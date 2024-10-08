/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.1
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


#define SWIG_VERSION 0x040201
#define SWIGJAVA

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif

#if defined(__cplusplus) && __cplusplus >=201103L
# define SWIG_NULLPTR nullptr
#else
# define SWIG_NULLPTR NULL
#endif 

/* -----------------------------------------------------------------------------
 * swigcompat.swg
 *
 * Macros to provide support compatibility with older C and C++ standards.
 * ----------------------------------------------------------------------------- */

/* C99 and C++11 should provide snprintf, but define SWIG_NO_SNPRINTF
 * if you're missing it.
 */
#if ((defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L) || \
     (defined __cplusplus && __cplusplus >= 201103L) || \
     defined SWIG_HAVE_SNPRINTF) && \
    !defined SWIG_NO_SNPRINTF
# define SWIG_snprintf(O,S,F,A) snprintf(O,S,F,A)
# define SWIG_snprintf2(O,S,F,A,B) snprintf(O,S,F,A,B)
#else
/* Fallback versions ignore the buffer size, but most of our uses either have a
 * fixed maximum possible size or dynamically allocate a buffer that's large
 * enough.
 */
# define SWIG_snprintf(O,S,F,A) sprintf(O,F,A)
# define SWIG_snprintf2(O,S,F,A,B) sprintf(O,F,A,B)
#endif


#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1,
  SWIG_JavaIOException,
  SWIG_JavaRuntimeException,
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError,
  SWIG_JavaIllegalStateException,
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { SWIG_JavaIllegalStateException, "java/lang/IllegalStateException" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) do { if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } } while (0)


#ifdef __cplusplus
#include <utility>
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigSmartPointer {
    T *ptr;
    SwigSmartPointer(T *p) : ptr(p) { }
    ~SwigSmartPointer() { delete ptr; }
    SwigSmartPointer& operator=(SwigSmartPointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
    void reset(T *p) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = p; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigSmartPointer tmp(new T(t)); pointer = tmp; return *this; }
#if __cplusplus >=201103L
  SwigValueWrapper& operator=(T&& t) { SwigSmartPointer tmp(new T(std::move(t))); pointer = tmp; return *this; }
  operator T&&() const { return std::move(*pointer.ptr); }
#else
  operator T&() const { return *pointer.ptr; }
#endif
  T *operator&() const { return pointer.ptr; }
  static void reset(SwigValueWrapper& t, T *p) { t.pointer.reset(p); }
};

/*
 * SwigValueInit() is a generic initialisation solution as the following approach:
 * 
 *       T c_result = T();
 * 
 * doesn't compile for all types for example:
 * 
 *       unsigned int c_result = unsigned int();
 */
template <typename T> T SwigValueInit() {
  return T();
}

#if __cplusplus >=201103L
# define SWIG_STD_MOVE(OBJ) std::move(OBJ)
#else
# define SWIG_STD_MOVE(OBJ) OBJ
#endif

#endif


#include "stereokit_swig.h"


#include <stdint.h>		// Use the C99 official header

SWIGINTERN matrix *new_matrix(float m00,float m01,float m02,float m03,float m10,float m11,float m12,float m13,float m20,float m21,float m22,float m23,float m30,float m31,float m32,float m33){
        matrix *mat = (matrix*)malloc(sizeof(matrix));
        mat->m[0] = m00; mat->m[1] = m01; mat->m[2] = m02; mat->m[3] = m03;
        mat->m[4] = m10; mat->m[5] = m11; mat->m[6] = m12; mat->m[7] = m13;
        mat->m[8] = m20; mat->m[9] = m21; mat->m[10] = m22; mat->m[11] = m23;
        mat->m[12] = m30; mat->m[13] = m31; mat->m[14] = m32; mat->m[15] = m33;
        return mat;
    }

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


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_vec2_1x_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  vec2 *arg1 = (vec2 *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec2 **)&jarg1; 
  arg2 = (float)jarg2; 
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT jfloat JNICALL Java_com_stereokitbindings_StereoKitJNI_vec2_1x_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jfloat jresult = 0 ;
  vec2 *arg1 = (vec2 *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec2 **)&jarg1; 
  result = (float) ((arg1)->x);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_vec2_1y_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  vec2 *arg1 = (vec2 *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec2 **)&jarg1; 
  arg2 = (float)jarg2; 
  if (arg1) (arg1)->y = arg2;
}


SWIGEXPORT jfloat JNICALL Java_com_stereokitbindings_StereoKitJNI_vec2_1y_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jfloat jresult = 0 ;
  vec2 *arg1 = (vec2 *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec2 **)&jarg1; 
  result = (float) ((arg1)->y);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_stereokitbindings_StereoKitJNI_new_1vec2(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  vec2 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (vec2 *)new vec2();
  *(vec2 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_delete_1vec2(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  vec2 *arg1 = (vec2 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(vec2 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_vec3_1x_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  vec3 *arg1 = (vec3 *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec3 **)&jarg1; 
  arg2 = (float)jarg2; 
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT jfloat JNICALL Java_com_stereokitbindings_StereoKitJNI_vec3_1x_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jfloat jresult = 0 ;
  vec3 *arg1 = (vec3 *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec3 **)&jarg1; 
  result = (float) ((arg1)->x);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_vec3_1y_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  vec3 *arg1 = (vec3 *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec3 **)&jarg1; 
  arg2 = (float)jarg2; 
  if (arg1) (arg1)->y = arg2;
}


SWIGEXPORT jfloat JNICALL Java_com_stereokitbindings_StereoKitJNI_vec3_1y_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jfloat jresult = 0 ;
  vec3 *arg1 = (vec3 *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec3 **)&jarg1; 
  result = (float) ((arg1)->y);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_vec3_1z_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  vec3 *arg1 = (vec3 *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec3 **)&jarg1; 
  arg2 = (float)jarg2; 
  if (arg1) (arg1)->z = arg2;
}


SWIGEXPORT jfloat JNICALL Java_com_stereokitbindings_StereoKitJNI_vec3_1z_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jfloat jresult = 0 ;
  vec3 *arg1 = (vec3 *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec3 **)&jarg1; 
  result = (float) ((arg1)->z);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_stereokitbindings_StereoKitJNI_new_1vec3(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  vec3 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (vec3 *)new vec3();
  *(vec3 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_delete_1vec3(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  vec3 *arg1 = (vec3 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(vec3 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_vec4_1x_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  vec4 *arg1 = (vec4 *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec4 **)&jarg1; 
  arg2 = (float)jarg2; 
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT jfloat JNICALL Java_com_stereokitbindings_StereoKitJNI_vec4_1x_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jfloat jresult = 0 ;
  vec4 *arg1 = (vec4 *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec4 **)&jarg1; 
  result = (float) ((arg1)->x);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_vec4_1y_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  vec4 *arg1 = (vec4 *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec4 **)&jarg1; 
  arg2 = (float)jarg2; 
  if (arg1) (arg1)->y = arg2;
}


SWIGEXPORT jfloat JNICALL Java_com_stereokitbindings_StereoKitJNI_vec4_1y_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jfloat jresult = 0 ;
  vec4 *arg1 = (vec4 *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec4 **)&jarg1; 
  result = (float) ((arg1)->y);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_vec4_1z_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  vec4 *arg1 = (vec4 *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec4 **)&jarg1; 
  arg2 = (float)jarg2; 
  if (arg1) (arg1)->z = arg2;
}


SWIGEXPORT jfloat JNICALL Java_com_stereokitbindings_StereoKitJNI_vec4_1z_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jfloat jresult = 0 ;
  vec4 *arg1 = (vec4 *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec4 **)&jarg1; 
  result = (float) ((arg1)->z);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_vec4_1w_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  vec4 *arg1 = (vec4 *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec4 **)&jarg1; 
  arg2 = (float)jarg2; 
  if (arg1) (arg1)->w = arg2;
}


SWIGEXPORT jfloat JNICALL Java_com_stereokitbindings_StereoKitJNI_vec4_1w_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jfloat jresult = 0 ;
  vec4 *arg1 = (vec4 *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vec4 **)&jarg1; 
  result = (float) ((arg1)->w);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_stereokitbindings_StereoKitJNI_new_1vec4(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  vec4 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (vec4 *)new vec4();
  *(vec4 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_delete_1vec4(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  vec4 *arg1 = (vec4 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(vec4 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_quat_1x_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  quat *arg1 = (quat *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(quat **)&jarg1; 
  arg2 = (float)jarg2; 
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT jfloat JNICALL Java_com_stereokitbindings_StereoKitJNI_quat_1x_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jfloat jresult = 0 ;
  quat *arg1 = (quat *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(quat **)&jarg1; 
  result = (float) ((arg1)->x);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_quat_1y_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  quat *arg1 = (quat *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(quat **)&jarg1; 
  arg2 = (float)jarg2; 
  if (arg1) (arg1)->y = arg2;
}


SWIGEXPORT jfloat JNICALL Java_com_stereokitbindings_StereoKitJNI_quat_1y_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jfloat jresult = 0 ;
  quat *arg1 = (quat *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(quat **)&jarg1; 
  result = (float) ((arg1)->y);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_quat_1z_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  quat *arg1 = (quat *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(quat **)&jarg1; 
  arg2 = (float)jarg2; 
  if (arg1) (arg1)->z = arg2;
}


SWIGEXPORT jfloat JNICALL Java_com_stereokitbindings_StereoKitJNI_quat_1z_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jfloat jresult = 0 ;
  quat *arg1 = (quat *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(quat **)&jarg1; 
  result = (float) ((arg1)->z);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_quat_1w_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  quat *arg1 = (quat *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(quat **)&jarg1; 
  arg2 = (float)jarg2; 
  if (arg1) (arg1)->w = arg2;
}


SWIGEXPORT jfloat JNICALL Java_com_stereokitbindings_StereoKitJNI_quat_1w_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jfloat jresult = 0 ;
  quat *arg1 = (quat *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(quat **)&jarg1; 
  result = (float) ((arg1)->w);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_stereokitbindings_StereoKitJNI_new_1quat(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  quat *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (quat *)new quat();
  *(quat **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_delete_1quat(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  quat *arg1 = (quat *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(quat **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_matrix_1row_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  matrix *arg1 = (matrix *) 0 ;
  vec4 *arg2 = (vec4 *) (vec4 *)0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(matrix **)&jarg1; 
  arg2 = *(vec4 **)&jarg2; 
  {
    size_t ii;
    vec4 *b = (vec4 *) arg1->row;
    for (ii = 0; ii < (size_t)4; ii++) b[ii] = *((vec4 *) arg2 + ii);
  }
  
}


SWIGEXPORT jlong JNICALL Java_com_stereokitbindings_StereoKitJNI_matrix_1row_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  matrix *arg1 = (matrix *) 0 ;
  vec4 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(matrix **)&jarg1; 
  result = (vec4 *)(vec4 *) ((arg1)->row);
  *(vec4 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_matrix_1m_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  matrix *arg1 = (matrix *) 0 ;
  float *arg2 = (float *) (float *)0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(matrix **)&jarg1; 
  arg2 = *(float **)&jarg2; 
  {
    size_t ii;
    float *b = (float *) arg1->m;
    for (ii = 0; ii < (size_t)16; ii++) b[ii] = *((float *) arg2 + ii);
  }
  
}


SWIGEXPORT jlong JNICALL Java_com_stereokitbindings_StereoKitJNI_matrix_1m_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  matrix *arg1 = (matrix *) 0 ;
  float *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(matrix **)&jarg1; 
  result = (float *)(float *) ((arg1)->m);
  *(float **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_stereokitbindings_StereoKitJNI_new_1matrix(JNIEnv *jenv, jclass jcls, jfloat jarg1, jfloat jarg2, jfloat jarg3, jfloat jarg4, jfloat jarg5, jfloat jarg6, jfloat jarg7, jfloat jarg8, jfloat jarg9, jfloat jarg10, jfloat jarg11, jfloat jarg12, jfloat jarg13, jfloat jarg14, jfloat jarg15, jfloat jarg16) {
  jlong jresult = 0 ;
  float arg1 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  float arg6 ;
  float arg7 ;
  float arg8 ;
  float arg9 ;
  float arg10 ;
  float arg11 ;
  float arg12 ;
  float arg13 ;
  float arg14 ;
  float arg15 ;
  float arg16 ;
  matrix *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (float)jarg1; 
  arg2 = (float)jarg2; 
  arg3 = (float)jarg3; 
  arg4 = (float)jarg4; 
  arg5 = (float)jarg5; 
  arg6 = (float)jarg6; 
  arg7 = (float)jarg7; 
  arg8 = (float)jarg8; 
  arg9 = (float)jarg9; 
  arg10 = (float)jarg10; 
  arg11 = (float)jarg11; 
  arg12 = (float)jarg12; 
  arg13 = (float)jarg13; 
  arg14 = (float)jarg14; 
  arg15 = (float)jarg15; 
  arg16 = (float)jarg16; 
  result = (matrix *)new_matrix(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16);
  *(matrix **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_delete_1matrix(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  matrix *arg1 = (matrix *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(matrix **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_pose_1t_1position_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  pose_t *arg1 = (pose_t *) 0 ;
  vec3 *arg2 = (vec3 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(pose_t **)&jarg1; 
  arg2 = *(vec3 **)&jarg2; 
  if (arg1) (arg1)->position = *arg2;
}


SWIGEXPORT jlong JNICALL Java_com_stereokitbindings_StereoKitJNI_pose_1t_1position_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  pose_t *arg1 = (pose_t *) 0 ;
  vec3 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pose_t **)&jarg1; 
  result = (vec3 *)& ((arg1)->position);
  *(vec3 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_pose_1t_1orientation_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  pose_t *arg1 = (pose_t *) 0 ;
  quat *arg2 = (quat *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(pose_t **)&jarg1; 
  arg2 = *(quat **)&jarg2; 
  if (arg1) (arg1)->orientation = *arg2;
}


SWIGEXPORT jlong JNICALL Java_com_stereokitbindings_StereoKitJNI_pose_1t_1orientation_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  pose_t *arg1 = (pose_t *) 0 ;
  quat *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pose_t **)&jarg1; 
  result = (quat *)& ((arg1)->orientation);
  *(quat **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_stereokitbindings_StereoKitJNI_new_1pose_1t(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  pose_t *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (pose_t *)new pose_t();
  *(pose_t **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_delete_1pose_1t(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  pose_t *arg1 = (pose_t *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(pose_t **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_ray_1t_1pos_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  ray_t *arg1 = (ray_t *) 0 ;
  vec3 *arg2 = (vec3 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(ray_t **)&jarg1; 
  arg2 = *(vec3 **)&jarg2; 
  if (arg1) (arg1)->pos = *arg2;
}


SWIGEXPORT jlong JNICALL Java_com_stereokitbindings_StereoKitJNI_ray_1t_1pos_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  ray_t *arg1 = (ray_t *) 0 ;
  vec3 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ray_t **)&jarg1; 
  result = (vec3 *)& ((arg1)->pos);
  *(vec3 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_ray_1t_1dir_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  ray_t *arg1 = (ray_t *) 0 ;
  vec3 *arg2 = (vec3 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(ray_t **)&jarg1; 
  arg2 = *(vec3 **)&jarg2; 
  if (arg1) (arg1)->dir = *arg2;
}


SWIGEXPORT jlong JNICALL Java_com_stereokitbindings_StereoKitJNI_ray_1t_1dir_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  ray_t *arg1 = (ray_t *) 0 ;
  vec3 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ray_t **)&jarg1; 
  result = (vec3 *)& ((arg1)->dir);
  *(vec3 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_stereokitbindings_StereoKitJNI_new_1ray_1t(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ray_t *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ray_t *)new ray_t();
  *(ray_t **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_stereokitbindings_StereoKitJNI_delete_1ray_1t(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ray_t *arg1 = (ray_t *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ray_t **)&jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif

