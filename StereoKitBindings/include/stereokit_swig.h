#ifndef STEREOKIT_SWIG_H
#define STEREOKIT_SWIG_H

// Redefine problematic macros before including stereokit.h
#define SK_API
#define SK_API_S
#define SK_DeclarePrivateType(name) typedef struct name name;
#define sk_ref(x) x&

// Include the original StereoKit header
#include "stereokit.h"
#include "stereokit_ui.h"

// Add any additional declarations or typedefs here if needed

#endif // STEREOKIT_SWIG_H