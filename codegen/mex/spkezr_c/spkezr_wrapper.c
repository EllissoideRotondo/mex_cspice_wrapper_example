/*
 * Student License - for use by students to meet course requirements and
 * perform academic research at degree granting institutions only.  Not
 * for government, commercial, or other organizational use.
 *
 * spkezr_wrapper.c
 *
 * Code generation for function 'spkezr_wrapper'
 *
 */

/* Include files */
#include "spkezr_wrapper.h"
#include "rt_nonfinite.h"
#include "spkezr_c_emxutil.h"
#include "spkezr_c_types.h"
#include "C:\Users\alexp\Documents\mice\src\cspice\SpiceUsr.h"

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = {
    54,                /* lineNo */
    9,                 /* colNo */
    "spkezr_wrapper1", /* fName */
    "C:\\Users\\alexp\\Documents\\GitHub\\mex_cspice_wrapper_"
    "example\\wrappers\\spkezr_wrapper.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    54,                /* lineNo */
    9,                 /* colNo */
    "spkezr_wrapper2", /* fName */
    "C:\\Users\\alexp\\Documents\\GitHub\\mex_cspice_wrapper_"
    "example\\wrappers\\spkezr_wrapper.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI = {
    54,                /* lineNo */
    9,                 /* colNo */
    "spkezr_wrapper3", /* fName */
    "C:\\Users\\alexp\\Documents\\GitHub\\mex_cspice_wrapper_"
    "example\\wrappers\\spkezr_wrapper.m" /* pName */
};

static emlrtRTEInfo emlrtRTEI = {
    29,               /* lineNo */
    33,               /* colNo */
    "spkezr_wrapper", /* fName */
    "C:\\Users\\alexp\\Documents\\GitHub\\mex_cspice_wrapper_"
    "example\\wrappers\\spkezr_wrapper.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    29,               /* lineNo */
    47,               /* colNo */
    "spkezr_wrapper", /* fName */
    "C:\\Users\\alexp\\Documents\\GitHub\\mex_cspice_wrapper_"
    "example\\wrappers\\spkezr_wrapper.m" /* pName */
};

static emlrtRTEInfo c_emlrtRTEI = {
    29,               /* lineNo */
    56,               /* colNo */
    "spkezr_wrapper", /* fName */
    "C:\\Users\\alexp\\Documents\\GitHub\\mex_cspice_wrapper_"
    "example\\wrappers\\spkezr_wrapper.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    29,               /* lineNo */
    68,               /* colNo */
    "spkezr_wrapper", /* fName */
    "C:\\Users\\alexp\\Documents\\GitHub\\mex_cspice_wrapper_"
    "example\\wrappers\\spkezr_wrapper.m" /* pName */
};

static emlrtRTEInfo e_emlrtRTEI = {
    5,                /* lineNo */
    24,               /* colNo */
    "spkezr_wrapper", /* fName */
    "C:\\Users\\alexp\\Documents\\GitHub\\mex_cspice_wrapper_"
    "example\\wrappers\\spkezr_wrapper.m" /* pName */
};

static emlrtRTEInfo f_emlrtRTEI = {
    37,               /* lineNo */
    9,                /* colNo */
    "spkezr_wrapper", /* fName */
    "C:\\Users\\alexp\\Documents\\GitHub\\mex_cspice_wrapper_"
    "example\\wrappers\\spkezr_wrapper.m" /* pName */
};

static emlrtRSInfo emlrtRSI = {
    54,                /* lineNo */
    "spkezr_wrapper3", /* fcnName */
    "C:\\Users\\alexp\\Documents\\GitHub\\mex_cspice_wrapper_"
    "example\\wrappers\\spkezr_wrapper.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    54,                /* lineNo */
    "spkezr_wrapper2", /* fcnName */
    "C:\\Users\\alexp\\Documents\\GitHub\\mex_cspice_wrapper_"
    "example\\wrappers\\spkezr_wrapper.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    54,                /* lineNo */
    "spkezr_wrapper1", /* fcnName */
    "C:\\Users\\alexp\\Documents\\GitHub\\mex_cspice_wrapper_"
    "example\\wrappers\\spkezr_wrapper.m" /* pathName */
};

/* Function Declarations */
static void b_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location);

/* Function Definitions */
static void b_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray,
                        (const char_T *)"error", true, location);
}

void spkezr_wrapper1(const emlrtStack *sp, const emxArray_char_T *varargin_1,
                     real_T varargin_2, const emxArray_char_T *varargin_3,
                     const emxArray_char_T *varargin_4,
                     const emxArray_char_T *varargin_5, real_T starg[6],
                     real_T *lt)
{
  static const int32_T iv[2] = {1, 1841};
  static const char_T cv1[5] = "LONG";
  emlrtStack st;
  emxArray_char_T *r;
  emxArray_char_T *r2;
  emxArray_char_T *r4;
  emxArray_char_T *r6;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  int32_T loop_ub;
  char_T msg[1841];
  const char_T *varargin_1_data;
  const char_T *varargin_3_data;
  const char_T *varargin_4_data;
  const char_T *varargin_5_data;
  char_T *r1;
  char_T *r3;
  char_T *r5;
  char_T *r7;
  boolean_T failed;
  st.prev = sp;
  st.tls = sp->tls;
  varargin_5_data = varargin_5->data;
  varargin_4_data = varargin_4->data;
  varargin_3_data = varargin_3->data;
  varargin_1_data = varargin_1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_char_T(sp, &r, &e_emlrtRTEI);
  /*  Author: Alex Pascarella */
  /*  Affiliation: University of Illinois Urbana-Champaign */
  /*  Date created: 04/05/2022 */
  /*  Include C files required for code generation  */
  /*  Preallocate output */
  /*  Call ephemeris */
  /*  Call spkezr_c (query ephemeris) */
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = varargin_1->size[1] + 1;
  emxEnsureCapacity_char_T(sp, r, i, &emlrtRTEI);
  r1 = r->data;
  loop_ub = varargin_1->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1[i] = varargin_1_data[i];
  }
  emxInit_char_T(sp, &r2, &e_emlrtRTEI);
  r1[varargin_1->size[1]] = '\x00';
  i = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = varargin_3->size[1] + 1;
  emxEnsureCapacity_char_T(sp, r2, i, &b_emlrtRTEI);
  r3 = r2->data;
  loop_ub = varargin_3->size[1];
  for (i = 0; i < loop_ub; i++) {
    r3[i] = varargin_3_data[i];
  }
  emxInit_char_T(sp, &r4, &e_emlrtRTEI);
  r3[varargin_3->size[1]] = '\x00';
  i = r4->size[0] * r4->size[1];
  r4->size[0] = 1;
  r4->size[1] = varargin_4->size[1] + 1;
  emxEnsureCapacity_char_T(sp, r4, i, &c_emlrtRTEI);
  r5 = r4->data;
  loop_ub = varargin_4->size[1];
  for (i = 0; i < loop_ub; i++) {
    r5[i] = varargin_4_data[i];
  }
  emxInit_char_T(sp, &r6, &e_emlrtRTEI);
  r5[varargin_4->size[1]] = '\x00';
  i = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = varargin_5->size[1] + 1;
  emxEnsureCapacity_char_T(sp, r6, i, &d_emlrtRTEI);
  r7 = r6->data;
  loop_ub = varargin_5->size[1];
  for (i = 0; i < loop_ub; i++) {
    r7[i] = varargin_5_data[i];
  }
  r7[varargin_5->size[1]] = '\x00';
  spkezr_c(&r1[0], varargin_2, &r3[0], &r5[0], &r7[0], &starg[0], lt);
  /*  Call failed_c (check for error) */
  failed = failed_c();
  emxFree_char_T(sp, &r6);
  emxFree_char_T(sp, &r4);
  emxFree_char_T(sp, &r2);
  emxFree_char_T(sp, &r);
  if (failed) {
    char_T cv[5];
    /*  Call getmsg_c (get error message) */
    for (i = 0; i < 5; i++) {
      cv[i] = cv1[i];
    }
    getmsg_c(&cv[0], 1841, &msg[0]);
    /*  Call reset_c (reset cspice error state) */
    reset_c();
    /*  Rethrow error from Matlab */
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 1841, m, &msg[0]);
    emlrtAssign(&y, m);
    st.site = &c_emlrtRSI;
    b_error(&st, y, &emlrtMCI);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void spkezr_wrapper2(const emlrtStack *sp, const emxArray_char_T *varargin_1,
                     real_T starg[6], real_T *lt)
{
  static const int32_T iv[2] = {1, 1841};
  static const char_T cv4[7] = "RETURN";
  static const char_T cv2[5] = "NULL";
  static const char_T cv5[5] = "LONG";
  emlrtStack st;
  emxArray_char_T *bspfile;
  const mxArray *m;
  const mxArray *y;
  int32_T b_i;
  int32_T i;
  char_T msg[1841];
  char_T cv3[7];
  char_T cv1[5];
  char_T cv[4];
  const char_T *varargin_1_data;
  char_T *bspfile_data;
  boolean_T failed;
  st.prev = sp;
  st.tls = sp->tls;
  varargin_1_data = varargin_1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /*  Author: Alex Pascarella */
  /*  Affiliation: University of Illinois Urbana-Champaign */
  /*  Date created: 04/05/2022 */
  /*  Include C files required for code generation  */
  /*  Preallocate output */
  for (i = 0; i < 6; i++) {
    starg[i] = 0.0;
  }
  *lt = 0.0;
  /*  Call ephemeris */
  /*  Call errdev_c (set error device)  */
  cv[0] = 'S';
  cv[1] = 'E';
  cv[2] = 'T';
  cv[3] = '\x00';
  for (b_i = 0; b_i < 5; b_i++) {
    cv1[b_i] = cv2[b_i];
  }
  errdev_c(&cv[0], MAX_uint8_T, &cv1[0]);
  /*  Call erract_c (set error behavior) */
  cv[0] = 'S';
  cv[1] = 'E';
  cv[2] = 'T';
  cv[3] = '\x00';
  for (b_i = 0; b_i < 7; b_i++) {
    cv3[b_i] = cv4[b_i];
  }
  emxInit_char_T(sp, &bspfile, &f_emlrtRTEI);
  erract_c(&cv[0], MAX_uint8_T, &cv3[0]);
  /*  Call furnsh_c (load kernel) */
  b_i = bspfile->size[0] * bspfile->size[1];
  bspfile->size[0] = 1;
  bspfile->size[1] = varargin_1->size[1] + 1;
  emxEnsureCapacity_char_T(sp, bspfile, b_i, &f_emlrtRTEI);
  bspfile_data = bspfile->data;
  i = varargin_1->size[1];
  for (b_i = 0; b_i < i; b_i++) {
    bspfile_data[b_i] = varargin_1_data[b_i];
  }
  bspfile_data[varargin_1->size[1]] = '\x00';
  furnsh_c(&bspfile_data[0]);
  /*  Call failed_c (check for error) */
  failed = failed_c();
  emxFree_char_T(sp, &bspfile);
  if (failed) {
    /*  Call getmsg_c (get error message) */
    for (b_i = 0; b_i < 5; b_i++) {
      cv1[b_i] = cv5[b_i];
    }
    getmsg_c(&cv1[0], 1841, &msg[0]);
    /*  Call reset_c (reset cspice error state) */
    reset_c();
    /*  Rethrow error from Matlab */
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 1841, m, &msg[0]);
    emlrtAssign(&y, m);
    st.site = &b_emlrtRSI;
    b_error(&st, y, &b_emlrtMCI);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void spkezr_wrapper3(const emlrtStack *sp, real_T starg[6], real_T *lt)
{
  static const int32_T iv[2] = {1, 1841};
  static const char_T cv1[5] = "LONG";
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msg[1841];
  boolean_T failed;
  st.prev = sp;
  st.tls = sp->tls;
  /*  Author: Alex Pascarella */
  /*  Affiliation: University of Illinois Urbana-Champaign */
  /*  Date created: 04/05/2022 */
  /*  Include C files required for code generation  */
  /*  Preallocate output */
  for (i = 0; i < 6; i++) {
    starg[i] = 0.0;
  }
  *lt = 0.0;
  /*  Call ephemeris */
  /*  Call kclear_c (unload all kernels) */
  kclear_c();
  /*  Call failed_c (check for error) */
  failed = failed_c();
  if (failed) {
    char_T cv[5];
    /*  Call getmsg_c (get error message) */
    for (i = 0; i < 5; i++) {
      cv[i] = cv1[i];
    }
    getmsg_c(&cv[0], 1841, &msg[0]);
    /*  Call reset_c (reset cspice error state) */
    reset_c();
    /*  Rethrow error from Matlab */
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 1841, m, &msg[0]);
    emlrtAssign(&y, m);
    st.site = &emlrtRSI;
    b_error(&st, y, &c_emlrtMCI);
  }
}

/* End of code generation (spkezr_wrapper.c) */
