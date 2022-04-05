//
// Student License - for use by students to meet course requirements and
// perform academic research at degree granting institutions only.  Not
// for government, commercial, or other organizational use.
//
// _coder_spkezr_c_api.cpp
//
// Code generation for function '_coder_spkezr_c_api'
//

// Include files
#include "_coder_spkezr_c_api.h"
#include "rt_nonfinite.h"
#include "spkezr_c_data.h"
#include "spkezr_wrapper.h"
#include "coder_array.h"

// Function Declarations
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<char_T, 2U> &ret);

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *varargin_2,
                               const char_T *identifier);

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *varargin_1,
                             const char_T *identifier,
                             coder::array<char_T, 2U> &y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<char_T, 2U> &y);

static const mxArray *emlrt_marshallOut(const real_T u[6]);

static const mxArray *emlrt_marshallOut(const real_T u);

// Function Definitions
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 0U, (void *)&dims);
  ret = *static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<char_T, 2U> &ret)
{
  static const int32_T dims[2]{1, -1};
  int32_T iv[2];
  const boolean_T bv[2]{false, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret[0], 1, false);
  emlrtDestroyArray(&src);
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *varargin_2,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(varargin_2), &thisId);
  emlrtDestroyArray(&varargin_2);
  return y;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = b_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *varargin_1,
                             const char_T *identifier,
                             coder::array<char_T, 2U> &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(varargin_1), &thisId, y);
  emlrtDestroyArray(&varargin_1);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<char_T, 2U> &y)
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const real_T u[6])
{
  static const int32_T i{0};
  static const int32_T i1{6};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &i1, 1);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

void spkezr_wrapper1_api(const mxArray *const prhs[5], int32_T nlhs,
                         const mxArray *plhs[2])
{
  coder::array<char_T, 2U> varargin_1;
  coder::array<char_T, 2U> varargin_3;
  coder::array<char_T, 2U> varargin_4;
  coder::array<char_T, 2U> varargin_5;
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T(*starg)[6];
  real_T lt;
  real_T varargin_2;
  st.tls = emlrtRootTLSGlobal;
  starg = (real_T(*)[6])mxMalloc(sizeof(real_T[6]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  // Marshall function inputs
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "varargin_1", varargin_1);
  varargin_2 = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "varargin_2");
  emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "varargin_3", varargin_3);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "varargin_4", varargin_4);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "varargin_5", varargin_5);
  // Invoke the target function
  spkezr_wrapper1(&st, varargin_1, varargin_2, varargin_3, varargin_4,
                  varargin_5, *starg, &lt);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(*starg);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(lt);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void spkezr_wrapper2_api(const mxArray *prhs, int32_T nlhs,
                         const mxArray *plhs[2])
{
  coder::array<char_T, 2U> varargin_1;
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T(*starg)[6];
  real_T lt;
  st.tls = emlrtRootTLSGlobal;
  starg = (real_T(*)[6])mxMalloc(sizeof(real_T[6]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  // Marshall function inputs
  emlrt_marshallIn(&st, emlrtAliasP(prhs), "varargin_1", varargin_1);
  // Invoke the target function
  spkezr_wrapper2(&st, varargin_1, *starg, &lt);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(*starg);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(lt);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void spkezr_wrapper3_api(int32_T nlhs, const mxArray *plhs[2])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T(*starg)[6];
  real_T lt;
  st.tls = emlrtRootTLSGlobal;
  starg = (real_T(*)[6])mxMalloc(sizeof(real_T[6]));
  // Invoke the target function
  spkezr_wrapper3(&st, *starg, &lt);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(*starg);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(lt);
  }
}

// End of code generation (_coder_spkezr_c_api.cpp)
