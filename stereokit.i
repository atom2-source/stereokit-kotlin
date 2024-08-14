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

// Define bool32_t if it's not already defined
#ifndef SWIG_BOOL32_T_DEFINED
#define SWIG_BOOL32_T_DEFINED
typedef int bool32_t;
#endif

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

// Rename functions to follow Java naming conventions
%rename(init) sk_init;
%rename(setWindow) sk_set_window;
%rename(setWindowXam) sk_set_window_xam;
%rename(shutdown) sk_shutdown;
%rename(shutdownUnsafe) sk_shutdown_unsafe;
%rename(quit) sk_quit;
%rename(step) sk_step;

// Include the simplified StereoKit header
%include "stereokit_swig.h"