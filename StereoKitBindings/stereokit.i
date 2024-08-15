%module StereoKit

%{
#include "stereokit_swig.h"
%}

// Handle StereoKit-specific macros
#pragma SWIG nowarn=301,302 // Suppress warnings about macro redefinition

// Handle default parameters
%feature("compactdefaultargs");

// Include standard integer typemaps
%include "stdint.i"
%include "typemaps.i"

// Define bool32_t if it's not already defined
#ifndef SWIG_BOOL32_T_DEFINED
#define SWIG_BOOL32_T_DEFINED
typedef int bool32_t;
#endif

// Define basic types
typedef struct vec2 { float x, y; } vec2;
typedef struct vec3 { float x, y, z; } vec3;
typedef struct vec4 { float x, y, z, w; } vec4;
typedef struct quat { float x, y, z, w; } quat;
typedef union matrix { vec4 row[4]; float m[16]; } matrix;
typedef struct pose_t { vec3 position; quat orientation; } pose_t;
typedef struct ray_t { vec3 pos; vec3 dir; } ray_t;

// Typemaps for sk_ref usage
%typemap(in) sk_ref(pose_t) (pose_t temp) {
    temp = *($input);
    $1 = &temp;
}
%typemap(in) sk_ref(matrix) (matrix temp) {
    temp = *($input);
    $1 = &temp;
}
%typemap(in) sk_ref(vec3) (vec3 temp) {
    temp = *($input);
    $1 = &temp;
}
%typemap(in) sk_ref(quat) (quat temp) {
    temp = *($input);
    $1 = &temp;
}

// Custom OUTPUT typemaps
%apply float *OUTPUT { float *out_t };

%typemap(jni) vec3 *out_pt "jobject"
%typemap(jtype) vec3 *out_pt "Vec3"
%typemap(jstype) vec3 *out_pt "Vec3"
%typemap(javain) vec3 *out_pt "$javainput"
%typemap(javaout) vec3 *out_pt { return $jnicall; }

%typemap(jni) pose_t *out_pose "jobject"
%typemap(jtype) pose_t *out_pose "Pose"
%typemap(jstype) pose_t *out_pose "Pose"
%typemap(javain) pose_t *out_pose "$javainput"
%typemap(javaout) pose_t *out_pose { return $jnicall; }

%typemap(jni) matrix *out_matrix "jobject"
%typemap(jtype) matrix *out_matrix "Matrix"
%typemap(jstype) matrix *out_matrix "Matrix"
%typemap(javain) matrix *out_matrix "$javainput"
%typemap(javaout) matrix *out_matrix { return $jnicall; }

%typemap(jni) ray_t *out_intersection "jobject"
%typemap(jtype) ray_t *out_intersection "Ray"
%typemap(jstype) ray_t *out_intersection "Ray"
%typemap(javain) ray_t *out_intersection "$javainput"
%typemap(javaout) ray_t *out_intersection { return $jnicall; }

// Rename functions to follow Java naming conventions
%rename("%(lowercamelcase)s", %$isfunction) "";

// Handle enums
%javaconst(1);

// Handle asset types
%ignore tex_t;
%ignore shader_t;
%ignore material_t;
%ignore model_t;
%ignore sound_t;
%ignore sprite_t;
%ignore font_t;
%ignore mesh_t;

// Opaque pointer types
%define OPAQUE_POINTER(TYPE)
    %typemap(jni) TYPE "jlong"
    %typemap(jtype) TYPE "long"
    %typemap(jstype) TYPE "long"
    %typemap(javain) TYPE "$javainput"
    %typemap(javaout) TYPE { return $jnicall; }
%enddef

OPAQUE_POINTER(tex_t)
OPAQUE_POINTER(shader_t)
OPAQUE_POINTER(material_t)
OPAQUE_POINTER(model_t)
OPAQUE_POINTER(sound_t)
OPAQUE_POINTER(sprite_t)
OPAQUE_POINTER(font_t)
OPAQUE_POINTER(mesh_t)

// Include the StereoKit header
%include "stereokit_swig.h"

// Additional SWIG directives for complex types or functions
%extend matrix {
    matrix(float m00, float m01, float m02, float m03,
           float m10, float m11, float m12, float m13,
           float m20, float m21, float m22, float m23,
           float m30, float m31, float m32, float m33) {
        matrix *mat = (matrix*)malloc(sizeof(matrix));
        mat->m[0] = m00; mat->m[1] = m01; mat->m[2] = m02; mat->m[3] = m03;
        mat->m[4] = m10; mat->m[5] = m11; mat->m[6] = m12; mat->m[7] = m13;
        mat->m[8] = m20; mat->m[9] = m21; mat->m[10] = m22; mat->m[11] = m23;
        mat->m[12] = m30; mat->m[13] = m31; mat->m[14] = m32; mat->m[15] = m33;
        return mat;
    }
}

// Handle callback functions
%typemap(in) void (*app_step)(void) {
    jclass clazz;
    jmethodID mid;

    clazz = (*jenv)->GetObjectClass(jenv, $input);
    mid = (*jenv)->GetMethodID(jenv, clazz, "run", "()V");
    if (mid == 0) {
        SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "Method run() not found");
        return $null;
    }

    $1 = app_step_callback;
    app_step_callback_data = (*jenv)->NewGlobalRef(jenv, $input);
}

%{
static void app_step_callback(void) {
    JNIEnv *jenv;
    jclass clazz;
    jmethodID mid;

    (*jvm)->AttachCurrentThread(jvm, (void **)&jenv, NULL);
    
    clazz = (*jenv)->GetObjectClass(jenv, app_step_callback_data);
    mid = (*jenv)->GetMethodID(jenv, clazz, "run", "()V");
    (*jenv)->CallVoidMethod(jenv, app_step_callback_data, mid);

    (*jvm)->DetachCurrentThread(jvm);
}

static jobject app_step_callback_data;
%}

%pragma(java) jniclasscode=%{
  static {
    try {
        System.loadLibrary("stereokit-bindings");
    } catch (UnsatisfiedLinkError e) {
        System.err.println("Native code library failed to load. \n" + e);
        System.exit(1);
    }
  }
%}