/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.1
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.stereokitbindings;

public final class handed_ {
  public final static handed_ handed_left = new handed_("handed_left", StereoKitJNI.handed_left_get());
  public final static handed_ handed_right = new handed_("handed_right", StereoKitJNI.handed_right_get());
  public final static handed_ handed_max = new handed_("handed_max", StereoKitJNI.handed_max_get());

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static handed_ swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + handed_.class + " with value " + swigValue);
  }

  private handed_(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private handed_(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private handed_(String swigName, handed_ swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static handed_[] swigValues = { handed_left, handed_right, handed_max };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

