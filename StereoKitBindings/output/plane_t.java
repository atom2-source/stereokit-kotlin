/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.1
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.stereokitbindings;

public class plane_t {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected plane_t(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(plane_t obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected static long swigRelease(plane_t obj) {
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
        StereoKitJNI.delete_plane_t(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setNormal(vec3 value) {
    StereoKitJNI.plane_t_normal_set(swigCPtr, this, vec3.getCPtr(value), value);
  }

  public vec3 getNormal() {
    long cPtr = StereoKitJNI.plane_t_normal_get(swigCPtr, this);
    return (cPtr == 0) ? null : new vec3(cPtr, false);
  }

  public void setD(float value) {
    StereoKitJNI.plane_t_d_set(swigCPtr, this, value);
  }

  public float getD() {
    return StereoKitJNI.plane_t_d_get(swigCPtr, this);
  }

  public plane_t() {
    this(StereoKitJNI.new_plane_t(), true);
  }

}
