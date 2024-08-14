#ifndef STEREOKIT_SWIG_H
#define STEREOKIT_SWIG_H

#include "stereokit.h"

// Redefine problematic macros
#define SK_API
#define SK_API_S
#define SK_DeclarePrivateType(name) typedef struct name name;
#define sk_ref(x) x&

// Add necessary function declarations
bool32_t sk_init(sk_settings_t settings);
void sk_set_window(void* window);
void sk_set_window_xam(void* window);
void sk_shutdown(void);
void sk_shutdown_unsafe(void);
void sk_quit(void);
bool32_t sk_step(void (*app_step)(void));

// Add more function declarations as needed

#endif // STEREOKIT_SWIG_H