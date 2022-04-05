/*
 * Student License - for use by students to meet course requirements and
 * perform academic research at degree granting institutions only.  Not
 * for government, commercial, or other organizational use.
 *
 * spkezr_wrapper.h
 *
 * Code generation for function 'spkezr_wrapper'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "spkezr_c_types.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void spkezr_wrapper1(const emlrtStack *sp, const emxArray_char_T *varargin_1,
                     real_T varargin_2, const emxArray_char_T *varargin_3,
                     const emxArray_char_T *varargin_4,
                     const emxArray_char_T *varargin_5, real_T starg[6],
                     real_T *lt);

void spkezr_wrapper2(const emlrtStack *sp, const emxArray_char_T *varargin_1,
                     real_T starg[6], real_T *lt);

void spkezr_wrapper3(const emlrtStack *sp, real_T starg[6], real_T *lt);

/* End of code generation (spkezr_wrapper.h) */
