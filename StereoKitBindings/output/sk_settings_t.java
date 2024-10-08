/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.1
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.stereokitbindings;

public class sk_settings_t {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected sk_settings_t(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(sk_settings_t obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected static long swigRelease(sk_settings_t obj) {
    long ptr = 0;
    if (obj != null) {
      if (!obj.swigCMemOwn)
        throw new RuntimeException("Cannot release ownership as memory is not owned");
      ptr = obj.swigCPtr;
      obj.swigCMemOwn = false;
      obj.delete();
    }
    return ptr;
  }

  @SuppressWarnings({"deprecation", "removal"})
  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        StereoKitJNI.delete_sk_settings_t(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setApp_name(String value) {
    StereoKitJNI.sk_settings_t_app_name_set(swigCPtr, this, value);
  }

  public String getApp_name() {
    return StereoKitJNI.sk_settings_t_app_name_get(swigCPtr, this);
  }

  public void setAssets_folder(String value) {
    StereoKitJNI.sk_settings_t_assets_folder_set(swigCPtr, this, value);
  }

  public String getAssets_folder() {
    return StereoKitJNI.sk_settings_t_assets_folder_get(swigCPtr, this);
  }

  public void setDisplay_preference(display_mode_ value) {
    StereoKitJNI.sk_settings_t_display_preference_set(swigCPtr, this, value.swigValue());
  }

  public display_mode_ getDisplay_preference() {
    return display_mode_.swigToEnum(StereoKitJNI.sk_settings_t_display_preference_get(swigCPtr, this));
  }

  public void setNo_flatscreen_fallback(int value) {
    StereoKitJNI.sk_settings_t_no_flatscreen_fallback_set(swigCPtr, this, value);
  }

  public int getNo_flatscreen_fallback() {
    return StereoKitJNI.sk_settings_t_no_flatscreen_fallback_get(swigCPtr, this);
  }

  public void setFlatscreen_width(int value) {
    StereoKitJNI.sk_settings_t_flatscreen_width_set(swigCPtr, this, value);
  }

  public int getFlatscreen_width() {
    return StereoKitJNI.sk_settings_t_flatscreen_width_get(swigCPtr, this);
  }

  public void setFlatscreen_height(int value) {
    StereoKitJNI.sk_settings_t_flatscreen_height_set(swigCPtr, this, value);
  }

  public int getFlatscreen_height() {
    return StereoKitJNI.sk_settings_t_flatscreen_height_get(swigCPtr, this);
  }

  public sk_settings_t() {
    this(StereoKitJNI.new_sk_settings_t(), true);
  }

}
