//
// Student License - for use by students to meet course requirements and
// perform academic research at degree granting institutions only.  Not
// for government, commercial, or other organizational use.
//
// spkezr_wrapper.h
//
// Code generation for function 'spkezr_wrapper'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void spkezr_wrapper1(const emlrtStack *sp,
                     const coder::array<char_T, 2U> &varargin_1,
                     real_T varargin_2,
                     const coder::array<char_T, 2U> &varargin_3,
                     const coder::array<char_T, 2U> &varargin_4,
                     const coder::array<char_T, 2U> &varargin_5,
                     real_T starg[6], real_T *lt);

void spkezr_wrapper2(const emlrtStack *sp,
                     const coder::array<char_T, 2U> &varargin_1,
                     real_T starg[6], real_T *lt);

void spkezr_wrapper3(const emlrtStack *sp, real_T starg[6], real_T *lt);

// End of code generation (spkezr_wrapper.h)
