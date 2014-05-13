/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package gov.nasa.gsfc.ccmc;

public class Interpolator {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Interpolator(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Interpolator obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        CCMCJNI.delete_Interpolator(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public float interpolate(String variable, float c0, float c1, float c2) {
    return CCMCJNI.Interpolator_interpolate__SWIG_0(swigCPtr, this, variable, c0, c1, c2);
  }

  public float interpolate(String variable, float c0, float c1, float c2, SWIGTYPE_p_float dc0, SWIGTYPE_p_float dc1, SWIGTYPE_p_float dc2) {
    return CCMCJNI.Interpolator_interpolate__SWIG_1(swigCPtr, this, variable, c0, c1, c2, SWIGTYPE_p_float.getCPtr(dc0), SWIGTYPE_p_float.getCPtr(dc1), SWIGTYPE_p_float.getCPtr(dc2));
  }

  public float interpolate(int variable_id, float c0, float c1, float c2) {
    return CCMCJNI.Interpolator_interpolate__SWIG_2(swigCPtr, this, variable_id, c0, c1, c2);
  }

  public float interpolate(int variable_id, float c0, float c1, float c2, SWIGTYPE_p_float dc0, SWIGTYPE_p_float dc1, SWIGTYPE_p_float dc2) {
    return CCMCJNI.Interpolator_interpolate__SWIG_3(swigCPtr, this, variable_id, c0, c1, c2, SWIGTYPE_p_float.getCPtr(dc0), SWIGTYPE_p_float.getCPtr(dc1), SWIGTYPE_p_float.getCPtr(dc2));
  }

  public float getConversionFactor(String arg0) {
    return CCMCJNI.Interpolator_getConversionFactor__SWIG_0(swigCPtr, this, arg0);
  }

  public float getConversionFactor(int variable_id) {
    return CCMCJNI.Interpolator_getConversionFactor__SWIG_1(swigCPtr, this, variable_id);
  }

  public String getModelName() {
    return CCMCJNI.Interpolator_getModelName(swigCPtr, this);
  }

}
