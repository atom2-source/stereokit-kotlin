/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.1
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.stereokitbindings;

public final class render_clear_ {
  public final static render_clear_ render_clear_none = new render_clear_("render_clear_none", StereoKitJNI.render_clear_none_get());
  public final static render_clear_ render_clear_color = new render_clear_("render_clear_color", StereoKitJNI.render_clear_color_get());
  public final static render_clear_ render_clear_depth = new render_clear_("render_clear_depth", StereoKitJNI.render_clear_depth_get());
  public final static render_clear_ render_clear_all = new render_clear_("render_clear_all", StereoKitJNI.render_clear_all_get());

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static render_clear_ swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + render_clear_.class + " with value " + swigValue);
  }

  private render_clear_(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private render_clear_(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private render_clear_(String swigName, render_clear_ swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static render_clear_[] swigValues = { render_clear_none, render_clear_color, render_clear_depth, render_clear_all };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

