/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.1
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.stereokitbindings;

public final class display_mode_ {
  public final static display_mode_ display_mode_mixedreality = new display_mode_("display_mode_mixedreality", StereoKitJNI.display_mode_mixedreality_get());
  public final static display_mode_ display_mode_flatscreen = new display_mode_("display_mode_flatscreen", StereoKitJNI.display_mode_flatscreen_get());
  public final static display_mode_ display_mode_none = new display_mode_("display_mode_none", StereoKitJNI.display_mode_none_get());

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static display_mode_ swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + display_mode_.class + " with value " + swigValue);
  }

  private display_mode_(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private display_mode_(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private display_mode_(String swigName, display_mode_ swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static display_mode_[] swigValues = { display_mode_mixedreality, display_mode_flatscreen, display_mode_none };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

