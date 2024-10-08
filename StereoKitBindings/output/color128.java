/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.1
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.stereokitbindings;

public class color128 {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected color128(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(color128 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected static long swigRelease(color128 obj) {
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
        StereoKitJNI.delete_color128(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setR(float value) {
    StereoKitJNI.color128_r_set(swigCPtr, this, value);
  }

  public float getR() {
    return StereoKitJNI.color128_r_get(swigCPtr, this);
  }

  public void setG(float value) {
    StereoKitJNI.color128_g_set(swigCPtr, this, value);
  }

  public float getG() {
    return StereoKitJNI.color128_g_get(swigCPtr, this);
  }

  public void setB(float value) {
    StereoKitJNI.color128_b_set(swigCPtr, this, value);
  }

  public float getB() {
    return StereoKitJNI.color128_b_get(swigCPtr, this);
  }

  public void setA(float value) {
    StereoKitJNI.color128_a_set(swigCPtr, this, value);
  }

  public float getA() {
    return StereoKitJNI.color128_a_get(swigCPtr, this);
  }

  public color128() {
    this(StereoKitJNI.new_color128(), true);
  }

}
