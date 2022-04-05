//
// Student License - for use by students to meet course requirements and
// perform academic research at degree granting institutions only.  Not
// for government, commercial, or other organizational use.
//
// spkezr_c_initialize.cpp
//
// Code generation for function 'spkezr_c_initialize'
//

// Include files
#include "spkezr_c_initialize.h"
#include "_coder_spkezr_c_mex.h"
#include "rt_nonfinite.h"
#include "spkezr_c_data.h"

// Function Definitions
void spkezr_c_initialize()
{
  static const volatile char_T *emlrtBreakCheckR2012bFlagVar{nullptr};
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

// End of code generation (spkezr_c_initialize.cpp)
