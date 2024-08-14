#pragma once
#include <stdint.h>

typedef int32_t bool32_t;

typedef enum display_mode_ {
    display_mode_mixedreality = 0,
    display_mode_flatscreen = 1,
    display_mode_none = 2,
} display_mode_;

typedef struct vec3 {
    float x;
    float y;
    float z;
} vec3;

typedef struct sk_settings_t {
    const char* app_name;
    const char* assets_folder;
    display_mode_  display_preference;
    bool32_t       no_flatscreen_fallback;
    int32_t        flatscreen_width;
    int32_t        flatscreen_height;
} sk_settings_t;

bool32_t sk_init(sk_settings_t settings);
void     sk_quit(void);

typedef struct color32 {
    uint8_t r, g, b, a;
} color32;

typedef struct tex_t {
    void* _id;
} tex_t;

typedef enum render_layer_ {
    render_layer_0 = 1 << 0,
    render_layer_1 = 1 << 1,
    render_layer_2 = 1 << 2,
    render_layer_all = 0xFFFF,
} render_layer_;

// Rendering functions
void render_add_mesh(mesh_t mesh, material_t material, matrix transform, color128 color_linear, render_layer_ layer);
tex_t tex_create_file(const char* file);
void render_set_clip(float near_plane, float far_plane);

// Input functions
pose_t input_head(void);
void input_hand_visible(int hand, bool32_t visible);

typedef struct vec2 {
    float x;
    float y;
} vec2;

typedef struct vec4 {
    float x;
    float y;
    float z;
    float w;
} vec4;

typedef union matrix {
    vec4 row[4];
    float m[16];
} matrix;

typedef struct rect_t {
    float x;
    float y;
    float w;
    float h;
} rect_t;

typedef struct ray_t {
    vec3 pos;
    vec3 dir;
} ray_t;

typedef struct bounds_t {
    vec3 center;
    vec3 dimensions;
} bounds_t;

typedef struct plane_t {
    vec3  normal;
    float d;
} plane_t;

typedef struct sphere_t {
    vec3  center;
    float radius;
} sphere_t;

typedef struct pose_t {
    vec3 position;
    quat orientation;
} pose_t;

typedef struct color128 {
    float r;
    float g;
    float b;
    float a;
} color128;

typedef enum asset_state_ {
    asset_state_none,
    asset_state_loading,
    asset_state_loaded,
    asset_state_failed
} asset_state_;

typedef void* asset_t;

// Asset management functions
asset_state_ asset_state(asset_t asset);
void         asset_release(asset_t asset);

// Specific asset types
typedef asset_t model_t;
typedef asset_t material_t;
typedef asset_t shader_t;
typedef asset_t sound_t;

// Model functions
model_t     model_create_mesh(mesh_t mesh, material_t material);
void        model_draw(model_t model, matrix transform, color128 color_linear, render_layer_ layer);

// Material functions
material_t  material_create(shader_t shader);
void        material_set_color(material_t material, const char* name, color128 color_gamma);

typedef enum handed_ {
    handed_left = 0,
    handed_right = 1,
    handed_max = 2,
} handed_;

typedef struct hand_joint_t {
    vec3 position;
    quat orientation;
    float radius;
} hand_joint_t;

typedef struct hand_t {
    hand_joint_t fingers[5][5];
    pose_t       wrist;
    pose_t       palm;
    vec3         pinch_pt;
    handed_      handedness;
    float        pinch_activation;
    float        grip_activation;
} hand_t;

// Input functions
const hand_t* input_hand(handed_ hand);
void          input_hand_visible(handed_ hand, bool32_t visible);
bool32_t      input_key(key_ key);

typedef enum render_clear_ {
    render_clear_none = 0,
    render_clear_color = 1 << 0,
    render_clear_depth = 1 << 1,
    render_clear_all = render_clear_color | render_clear_depth,
} render_clear_;

// Advanced rendering functions
void render_to(tex_t to_rendertarget, matrix camera, matrix projection, render_layer_ layer_filter, render_clear_ clear);
void render_add_model(model_t model, matrix transform, color128 color_linear, render_layer_ layer);

// Shader functions
shader_t shader_create_file(const char* filename);
void     shader_set_texture(shader_t shader, const char* name, tex_t texture);


typedef struct gradient_key_t {
    color128 color;
    float    position;
} gradient_key_t;

typedef struct spherical_harmonics_t {
    vec3     coefficients[9];
} spherical_harmonics_t;

typedef struct sh_light_t {
    vec3     dir_to;
    color128 color;
} sh_light_t;

typedef struct ui_settings_t {
    float margin;
    float padding;
    float gutter;
    float depth;
    float rounding;
    float backplate_depth;
    float backplate_border;
} ui_settings_t;


typedef enum app_focus_ {
    app_focus_active,
    app_focus_background,
    app_focus_hidden,
} app_focus_;

typedef enum device_tracking_ {
    device_tracking_none = 0,
    device_tracking_3dof,
    device_tracking_6dof,
} device_tracking_;

typedef enum display_type_ {
    display_type_none,
    display_type_stereo,
    display_type_flatscreen,
} display_type_;

typedef enum text_context_ {
    text_context_text = 1,
    text_context_number = 2,
    text_context_uri = 10,
    text_context_password = 18,
} text_context_;


// System functions
system_info_t sk_system_info(void);
app_focus_    sk_app_focus(void);

// Device functions
display_type_    device_display_get_type(void);
device_tracking_ device_get_tracking(void);
const char* device_get_name(void);

// World functions
bool32_t world_has_bounds(void);
vec2     world_get_bounds_size(void);
pose_t   world_get_bounds_pose(void);

// UI functions
void     ui_show_volumes(bool32_t show);
void     ui_settings(ui_settings_t settings);
color128 ui_get_theme_color(ui_color_ color_type);

// Sound functions
sound_t      sound_create(const char* filename_utf8);
sound_inst_t sound_play(sound_t sound, vec3 at, float volume);

// File functions
bool32_t platform_file_picker_visible(void);
bool32_t platform_read_file(const char* filename_utf8, void** out_data, size_t* out_size);

typedef struct sound_inst_t {
    uint16_t _id;
    int16_t  _slot;
} sound_inst_t;

typedef struct fov_info_t {
    float left;
    float right;
    float top;
    float bottom;
} fov_info_t;

typedef enum picker_mode_ {
    picker_mode_open,
    picker_mode_save,
} picker_mode_;

typedef enum anchor_caps_ {
    anchor_caps_storable = 1 << 0,
    anchor_caps_stability = 1 << 1,
} anchor_caps_;

// Additional system functions
void     platform_file_picker(picker_mode_ mode, void* callback_data, void (*picker_callback)(void* callback_data, bool32_t confirmed, const char* filename));
bool32_t platform_keyboard_get_force_fallback(void);
void     platform_keyboard_set_force_fallback(bool32_t force_fallback);

// Additional world functions
bool32_t world_ray_intersect(ray_t ray, ray_t* out_intersection);
void     world_set_occlusion_enabled(bool32_t enabled);
bool32_t world_get_occlusion_enabled(void);

// Additional rendering functions
void render_set_skytex(tex_t sky_texture);
tex_t render_get_skytex(void);

// Additional input functions
void input_hand_override(handed_ hand, const hand_joint_t* in_arr_hand_joints);

// Additional types and structures
typedef struct file_filter_t {
    char ext[32];
} file_filter_t;

// Additional enums
typedef enum backend_xr_type_ {
    backend_xr_type_none,
    backend_xr_type_simulator,
    backend_xr_type_openxr,
    backend_xr_type_webxr,
} backend_xr_type_;

typedef enum backend_platform_ {
    backend_platform_win32,
    backend_platform_uwp,
    backend_platform_linux,
    backend_platform_android,
    backend_platform_web,
} backend_platform_;

typedef enum backend_graphics_ {
    backend_graphics_none,
    backend_graphics_d3d11,
    backend_graphics_opengl_glx,
    backend_graphics_opengl_wgl,
    backend_graphics_opengles_egl,
    backend_graphics_webgl,
} backend_graphics_;

// Additional functions
backend_xr_type_ backend_xr_get_type(void);
backend_platform_ backend_platform_get(void);
backend_graphics_ backend_graphics_get(void);

void log_show_console(bool32_t show);
void log_set_filter(log_ level);
void log_subscribe(void (*log_callback)(log_ level, const char* text));

spherical_harmonics_t sh_create(const sh_light_t* in_arr_lights, int32_t light_count);
void sh_brightness(spherical_harmonics_t* ref_harmonics, float scale);
color128 sh_lookup(const spherical_harmonics_t* harmonics, vec3 normal);

gradient_t gradient_create(void);
void gradient_add(gradient_t gradient, color128 color_linear, float position);
color128 gradient_get(gradient_t gradient, float at);

anchor_t anchor_create(pose_t pose);
void anchor_set_persist(anchor_t anchor, bool32_t persist);
pose_t anchor_get_pose(const anchor_t anchor);

// OpenXR related functions
openxr_handle_t backend_openxr_get_instance(void);
openxr_handle_t backend_openxr_get_session(void);
openxr_handle_t backend_openxr_get_system_id(void);
openxr_handle_t backend_openxr_get_space(void);
int64_t backend_openxr_get_time(void);
int64_t backend_openxr_get_eyes_sample_time(void);
void* backend_openxr_get_function(const char* function_name);
bool32_t backend_openxr_ext_enabled(const char* extension_name);
void backend_openxr_ext_request(const char* extension_name);
void backend_openxr_ext_exclude(const char* extension_name);
void backend_openxr_use_minimum_exts(bool32_t use_minimum_exts);
void backend_openxr_composition_layer(void* XrCompositionLayerBaseHeader, int32_t data_size, int32_t sort_order);
void backend_openxr_end_frame_chain(void* XrBaseHeader, int32_t data_size);
void backend_openxr_set_hand_joint_scale(float joint_scale_factor);

// OpenXR callback functions
void backend_openxr_add_callback_pre_session_create(void (*xr_pre_session_create_callback)(void* context), void* context);
void backend_openxr_add_callback_poll_event(void (*xr_poll_event_callback)(void* context, void* XrEventDataBuffer), void* context);
void backend_openxr_remove_callback_poll_event(void (*xr_poll_event_callback)(void* context, void* XrEventDataBuffer));

// Android specific functions
void* backend_android_get_java_vm(void);
void* backend_android_get_activity(void);
void* backend_android_get_jni_env(void);

// Graphics backend functions
void* backend_d3d11_get_d3d_device(void);
void* backend_d3d11_get_d3d_context(void);
void* backend_d3d11_get_deferred_d3d_context(void);
void* backend_d3d11_get_deferred_mtx(void);
uint32_t backend_d3d11_get_main_thread_id(void);
void* backend_opengl_wgl_get_hdc(void);
void* backend_opengl_wgl_get_hglrc(void);
void* backend_opengl_glx_get_context(void);
void* backend_opengl_glx_get_display(void);
void* backend_opengl_glx_get_drawable(void);
void* backend_opengl_egl_get_context(void);
void* backend_opengl_egl_get_config(void);
void* backend_opengl_egl_get_display(void);

// Additional log functions
void log_set_colors(log_colors_ colors);
void log_subscribe_data(void (*log_callback)(void* context, log_ level, const char* text), void* context);
void log_unsubscribe_data(void (*log_callback)(void* context, log_ level, const char* text), void* context);

// Asset management functions
void assets_releaseref_threadsafe(void* asset);
int32_t assets_current_task(void);
int32_t assets_total_tasks(void);
int32_t assets_current_task_priority(void);
void assets_block_for_priority(int32_t priority);
int32_t assets_count(void);
asset_t assets_get_index(int32_t index);
asset_type_ assets_get_type(int32_t index);

asset_type_ asset_get_type(asset_t asset);
void asset_set_id(asset_t asset, const char* id);
const char* asset_get_id(const asset_t asset);
void asset_addref(asset_t asset);
void asset_release(asset_t asset);

// Additional types and enums
typedef enum ui_move_ {
    ui_move_exact = 0,
    ui_move_face_user,
    ui_move_pos_only,
    ui_move_none,
} ui_move_;

typedef enum ui_win_ {
    ui_win_empty = 1 << 0,
    ui_win_head = 1 << 1,
    ui_win_body = 1 << 2,
    ui_win_normal = ui_win_head | ui_win_body,
} ui_win_;

typedef enum ui_confirm_ {
    ui_confirm_push,
    ui_confirm_pinch,
    ui_confirm_variable_pinch
} ui_confirm_;

// Additional functions

// UI functions
void ui_window_begin(const char* text, sk_ref(pose_t) pose, vec2 size, ui_win_ window_type, ui_move_ move_type);
void ui_window_end(void);
bool32_t ui_button(const char* text);
void ui_label(const char* text);

// World functions
void world_set_occlusion_enabled(bool32_t enabled);
bool32_t world_get_occlusion_enabled(void);
void world_set_raycast_enabled(bool32_t enabled);
bool32_t world_get_raycast_enabled(void);

// Rendering functions
void render_set_clip(float near_plane, float far_plane);
void render_set_fov(float field_of_view_degrees);
void render_set_ortho_clip(float near_plane, float far_plane);
void render_set_ortho_size(float viewport_height_meters);

// Input functions
void input_hand_visible(handed_ hand, bool32_t visible);
void input_hand_solid(handed_ hand, bool32_t solid);
void input_hand_material(handed_ hand, material_t material);

// Time functions
double time_getf(void);
double time_elapsedf(void);
void time_scale(double scale);

// Sound functions
sound_t sound_create(const char* filename_utf8);
sound_inst_t sound_play(sound_t sound, vec3 at, float volume);
void sound_stop(sound_inst_t sound_inst);

// Math functions
vec3 vec3_cross(const sk_ref(vec3) a, const sk_ref(vec3) b);
quat quat_lookat(const sk_ref(vec3) from, const sk_ref(vec3) at);
matrix matrix_trs(const sk_ref(vec3) position, const sk_ref(quat) rotation, const sk_ref(vec3) scale);