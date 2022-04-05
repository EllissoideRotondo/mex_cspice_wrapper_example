//
// Student License - for use by students to meet course requirements and
// perform academic research at degree granting institutions only.  Not
// for government, commercial, or other organizational use.
//
// _coder_spkezr_cpp_mex.h
//
// Code generation for function '_coder_spkezr_cpp_mex'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS();

void spkezr_wrapper1_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs,
                                 const mxArray *prhs[5]);

void spkezr_wrapper2_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs,
                                 const mxArray *prhs[1]);

void spkezr_wrapper3_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs);

// End of code generation (_coder_spkezr_cpp_mex.h)
