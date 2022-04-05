//
// Student License - for use by students to meet course requirements and
// perform academic research at degree granting institutions only.  Not
// for government, commercial, or other organizational use.
//
// _coder_spkezr_c_mex.cpp
//
// Code generation for function '_coder_spkezr_c_mex'
//

// Include files
#include "_coder_spkezr_c_mex.h"
#include "_coder_spkezr_c_api.h"
#include "rt_nonfinite.h"
#include "spkezr_c_data.h"
#include "spkezr_c_initialize.h"
#include "spkezr_c_terminate.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  static int32_T entryIndex;
  mexAtExit(&spkezr_c_atexit);
  // Module initialization.
  spkezr_c_initialize();
  try {
    emlrtShouldCleanupOnError((emlrtCTX *)emlrtRootTLSGlobal, false);
    // Decision tree logic for Polymorphic Mex
    if (nrhs == 5) {
      entryIndex = 0;
    } else if (nrhs == 1) {
      entryIndex = 1;
    } else if (nrhs == 0) {
      entryIndex = 2;
    }
    // Dispatch the entry-point.
    switch (entryIndex) {
    case 0:
      spkezr_wrapper1_mexFunction(nlhs, plhs, nrhs, &prhs[0]);
      break;
    case 1:
      spkezr_wrapper2_mexFunction(nlhs, plhs, nrhs, &prhs[0]);
      break;
    case 2:
      spkezr_wrapper3_mexFunction(nlhs, plhs, nrhs);
      break;
    }
    // Module termination.
    spkezr_c_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge,
                           (const char_T *)"windows-1252", true);
  return emlrtRootTLSGlobal;
}

void spkezr_wrapper1_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs,
                                 const mxArray *prhs[5])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs[2];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        15, "spkezr_wrapper1");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "spkezr_wrapper1");
  }
  // Call the function.
  spkezr_wrapper1_api(prhs, nlhs, outputs);
  // Copy over outputs to the caller.
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

void spkezr_wrapper2_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs,
                                 const mxArray *prhs[1])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs[2];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        15, "spkezr_wrapper2");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "spkezr_wrapper2");
  }
  // Call the function.
  spkezr_wrapper2_api(prhs[0], nlhs, outputs);
  // Copy over outputs to the caller.
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

void spkezr_wrapper3_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs[2];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4,
                        15, "spkezr_wrapper3");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "spkezr_wrapper3");
  }
  // Call the function.
  spkezr_wrapper3_api(nlhs, outputs);
  // Copy over outputs to the caller.
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

// End of code generation (_coder_spkezr_c_mex.cpp)
