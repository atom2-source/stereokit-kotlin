/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.1
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.stereokitbindings;

public class fov_info_t {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected fov_info_t(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(fov_info_t obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected static long swigRelease(fov_info_t obj) {
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
        StereoKitJNI.delete_fov_info_t(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setLeft(float value) {
    StereoKitJNI.fov_info_t_left_set(swigCPtr, this, value);
  }

  public float getLeft() {
    return StereoKitJNI.fov_info_t_left_get(swigCPtr, this);
  }

  public void setRight(float value) {
    StereoKitJNI.fov_info_t_right_set(swigCPtr, this, value);
  }

  public float getRight() {
    return StereoKitJNI.fov_info_t_right_get(swigCPtr, this);
  }

  public void setTop(float value) {
    StereoKitJNI.fov_info_t_top_set(swigCPtr, this, value);
  }

  public float getTop() {
    return StereoKitJNI.fov_info_t_top_get(swigCPtr, this);
  }

  public void setBottom(float value) {
    StereoKitJNI.fov_info_t_bottom_set(swigCPtr, this, value);
  }

  public float getBottom() {
    return StereoKitJNI.fov_info_t_bottom_get(swigCPtr, this);
  }

  public fov_info_t() {
    this(StereoKitJNI.new_fov_info_t(), true);
  }

}
