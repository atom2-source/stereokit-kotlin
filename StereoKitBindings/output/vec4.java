/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.1
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.stereokitbindings;

public class vec4 {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected vec4(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(vec4 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected static long swigRelease(vec4 obj) {
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
        StereoKitJNI.delete_vec4(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setX(float value) {
    StereoKitJNI.vec4_x_set(swigCPtr, this, value);
  }

  public float getX() {
    return StereoKitJNI.vec4_x_get(swigCPtr, this);
  }

  public void setY(float value) {
    StereoKitJNI.vec4_y_set(swigCPtr, this, value);
  }

  public float getY() {
    return StereoKitJNI.vec4_y_get(swigCPtr, this);
  }

  public void setZ(float value) {
    StereoKitJNI.vec4_z_set(swigCPtr, this, value);
  }

  public float getZ() {
    return StereoKitJNI.vec4_z_get(swigCPtr, this);
  }

  public void setW(float value) {
    StereoKitJNI.vec4_w_set(swigCPtr, this, value);
  }

  public float getW() {
    return StereoKitJNI.vec4_w_get(swigCPtr, this);
  }

  public vec4() {
    this(StereoKitJNI.new_vec4(), true);
  }

}