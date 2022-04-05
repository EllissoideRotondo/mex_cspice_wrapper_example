/*
 * Student License - for use by students to meet course requirements and
 * perform academic research at degree granting institutions only.  Not
 * for government, commercial, or other organizational use.
 *
 * _coder_spkezr_c_api.c
 *
 * Code generation for function '_coder_spkezr_c_api'
 *
 */

/* Include files */
#include "_coder_spkezr_c_api.h"
#include "rt_nonfinite.h"
#include "spkezr_c_data.h"
#include "spkezr_c_emxutil.h"
#include "spkezr_c_types.h"
#include "spkezr_wrapper.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = {
    1,                     /* lineNo */
    1,                     /* colNo */
    "_coder_spkezr_c_api", /* fName */
    ""                     /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_char_T *y);

static const mxArray *b_emlrt_marshallOut(const real_T u);

static real_T c_emlrt_marshallIn(const emlrtStack *sp,
                                 const mxArray *varargin_2,
                                 const char_T *identifier);

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_char_T *ret);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *varargin_1,
                             const char_T *identifier, emxArray_char_T *y);

static const mxArray *emlrt_marshallOut(const real_T u[6]);

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_char_T *y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp,
                                 const mxArray *varargin_2,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(varargin_2), &thisId);
  emlrtDestroyArray(&varargin_2);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_char_T *ret)
{
  static const int32_T dims[2] = {1, -1};
  int32_T iv[2];
  int32_T i;
  char_T *ret_data;
  const boolean_T bv[2] = {false, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_char_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret_data = ret->data;
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret_data[0], 1, false);
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *varargin_1,
                             const char_T *identifier, emxArray_char_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(varargin_1), &thisId, y);
  emlrtDestroyArray(&varargin_1);
}

static const mxArray *emlrt_marshallOut(const real_T u[6])
{
  static const int32_T i = 0;
  static const int32_T i1 = 6;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &i1, 1);
  emlrtAssign(&y, m);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 0U, (void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void spkezr_wrapper1_api(const mxArray *const prhs[5], int32_T nlhs,
                         const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_char_T *varargin_1;
  emxArray_char_T *varargin_3;
  emxArray_char_T *varargin_4;
  emxArray_char_T *varargin_5;
  real_T(*starg)[6];
  real_T lt;
  real_T varargin_2;
  st.tls = emlrtRootTLSGlobal;
  starg = (real_T(*)[6])mxMalloc(sizeof(real_T[6]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_char_T(&st, &varargin_1, &g_emlrtRTEI);
  emxInit_char_T(&st, &varargin_3, &g_emlrtRTEI);
  emxInit_char_T(&st, &varargin_4, &g_emlrtRTEI);
  emxInit_char_T(&st, &varargin_5, &g_emlrtRTEI);
  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "varargin_1", varargin_1);
  varargin_2 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "varargin_2");
  emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "varargin_3", varargin_3);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "varargin_4", varargin_4);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "varargin_5", varargin_5);
  /* Invoke the target function */
  spkezr_wrapper1(&st, varargin_1, varargin_2, varargin_3, varargin_4,
                  varargin_5, *starg, &lt);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*starg);
  emxFree_char_T(&st, &varargin_5);
  emxFree_char_T(&st, &varargin_4);
  emxFree_char_T(&st, &varargin_3);
  emxFree_char_T(&st, &varargin_1);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(lt);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void spkezr_wrapper2_api(const mxArray *prhs, int32_T nlhs,
                         const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_char_T *varargin_1;
  real_T(*starg)[6];
  real_T lt;
  st.tls = emlrtRootTLSGlobal;
  starg = (real_T(*)[6])mxMalloc(sizeof(real_T[6]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_char_T(&st, &varargin_1, &g_emlrtRTEI);
  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs), "varargin_1", varargin_1);
  /* Invoke the target function */
  spkezr_wrapper2(&st, varargin_1, *starg, &lt);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*starg);
  emxFree_char_T(&st, &varargin_1);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(lt);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void spkezr_wrapper3_api(int32_T nlhs, const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*starg)[6];
  real_T lt;
  st.tls = emlrtRootTLSGlobal;
  starg = (real_T(*)[6])mxMalloc(sizeof(real_T[6]));
  /* Invoke the target function */
  spkezr_wrapper3(&st, *starg, &lt);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*starg);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(lt);
  }
}

/* End of code generation (_coder_spkezr_c_api.c) */
