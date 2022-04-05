//
// Student License - for use by students to meet course requirements and
// perform academic research at degree granting institutions only.  Not
// for government, commercial, or other organizational use.
//
// spkezr_cpp_terminate.cpp
//
// Code generation for function 'spkezr_cpp_terminate'
//

// Include files
#include "spkezr_cpp_terminate.h"
#include "_coder_spkezr_cpp_mex.h"
#include "rt_nonfinite.h"
#include "spkezr_cpp_data.h"

// Function Definitions
void spkezr_cpp_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void spkezr_cpp_terminate()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (spkezr_cpp_terminate.cpp)
