//
// Student License - for use by students to meet course requirements and
// perform academic research at degree granting institutions only.  Not
// for government, commercial, or other organizational use.
//
// spkezr_wrapper.cpp
//
// Code generation for function 'spkezr_wrapper'
//

// Include files
#include "spkezr_wrapper.h"
#include "rt_nonfinite.h"
#include "C:\Users\alexp\Documents\mice\src\cspice\SpiceUsr.h"
#include "coder_array.h"

// Variable Definitions
static emlrtMCInfo emlrtMCI{
    45,                // lineNo
    9,                 // colNo
    "spkezr_wrapper1", // fName
    "C:\\Users\\alexp\\Documents\\spice_wrapper_example\\wrappers\\spkezr_"
    "wrapper.m" // pName
};

static emlrtMCInfo b_emlrtMCI{
    45,                // lineNo
    9,                 // colNo
    "spkezr_wrapper2", // fName
    "C:\\Users\\alexp\\Documents\\spice_wrapper_example\\wrappers\\spkezr_"
    "wrapper.m" // pName
};

static emlrtMCInfo c_emlrtMCI{
    45,                // lineNo
    9,                 // colNo
    "spkezr_wrapper3", // fName
    "C:\\Users\\alexp\\Documents\\spice_wrapper_example\\wrappers\\spkezr_"
    "wrapper.m" // pName
};

static emlrtRTEInfo emlrtRTEI{
    30,               // lineNo
    33,               // colNo
    "spkezr_wrapper", // fName
    "C:\\Users\\alexp\\Documents\\spice_wrapper_example\\wrappers\\spkezr_"
    "wrapper.m" // pName
};

static emlrtRTEInfo b_emlrtRTEI{
    30,               // lineNo
    47,               // colNo
    "spkezr_wrapper", // fName
    "C:\\Users\\alexp\\Documents\\spice_wrapper_example\\wrappers\\spkezr_"
    "wrapper.m" // pName
};

static emlrtRTEInfo c_emlrtRTEI{
    30,               // lineNo
    56,               // colNo
    "spkezr_wrapper", // fName
    "C:\\Users\\alexp\\Documents\\spice_wrapper_example\\wrappers\\spkezr_"
    "wrapper.m" // pName
};

static emlrtRTEInfo d_emlrtRTEI{
    30,               // lineNo
    68,               // colNo
    "spkezr_wrapper", // fName
    "C:\\Users\\alexp\\Documents\\spice_wrapper_example\\wrappers\\spkezr_"
    "wrapper.m" // pName
};

static emlrtRTEInfo e_emlrtRTEI{
    32,               // lineNo
    9,                // colNo
    "spkezr_wrapper", // fName
    "C:\\Users\\alexp\\Documents\\spice_wrapper_example\\wrappers\\spkezr_"
    "wrapper.m" // pName
};

static emlrtRSInfo emlrtRSI{
    45,                // lineNo
    "spkezr_wrapper3", // fcnName
    "C:\\Users\\alexp\\Documents\\spice_wrapper_example\\wrappers\\spkezr_"
    "wrapper.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    45,                // lineNo
    "spkezr_wrapper2", // fcnName
    "C:\\Users\\alexp\\Documents\\spice_wrapper_example\\wrappers\\spkezr_"
    "wrapper.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    45,                // lineNo
    "spkezr_wrapper1", // fcnName
    "C:\\Users\\alexp\\Documents\\spice_wrapper_example\\wrappers\\spkezr_"
    "wrapper.m" // pathName
};

// Function Declarations
static void b_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location);

// Function Definitions
static void b_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, nullptr, 1, &pArray,
                        (const char_T *)"error", true, location);
}

void spkezr_wrapper1(const emlrtStack *sp,
                     const coder::array<char_T, 2U> &varargin_1,
                     real_T varargin_2,
                     const coder::array<char_T, 2U> &varargin_3,
                     const coder::array<char_T, 2U> &varargin_4,
                     const coder::array<char_T, 2U> &varargin_5,
                     real_T starg[6], real_T *lt)
{
  static const int32_T iv[2]{1, 1841};
  static const char_T cv4[7]{"RETURN"};
  static const char_T cv2[5]{"NULL"};
  static const char_T cv5[5]{"LONG"};
  coder::array<char_T, 2U> r;
  coder::array<char_T, 2U> r1;
  coder::array<char_T, 2U> r2;
  coder::array<char_T, 2U> r3;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  int32_T loop_ub;
  char_T msg[1841];
  char_T cv3[7];
  char_T cv1[5];
  char_T cv[4];
  boolean_T failed;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  //  Include C files required for code generation
  //  Set error device
  cv[0] = 'S';
  cv[1] = 'E';
  cv[2] = 'T';
  cv[3] = '\x00';
  for (int32_T i{0}; i < 5; i++) {
    cv1[i] = cv2[i];
  }
  errdev_c(&cv[0], MAX_uint8_T, &cv1[0]);
  //  Set error behavior
  cv[0] = 'S';
  cv[1] = 'E';
  cv[2] = 'T';
  cv[3] = '\x00';
  for (int32_T i{0}; i < 7; i++) {
    cv3[i] = cv4[i];
  }
  erract_c(&cv[0], MAX_uint8_T, &cv3[0]);
  //  Preallocate output
  //  Call ephemeris
  r.set_size(&emlrtRTEI, sp, 1, varargin_1.size(1) + 1);
  loop_ub = varargin_1.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    r[i] = varargin_1[i];
  }
  r[varargin_1.size(1)] = '\x00';
  r1.set_size(&b_emlrtRTEI, sp, 1, varargin_3.size(1) + 1);
  loop_ub = varargin_3.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    r1[i] = varargin_3[i];
  }
  r1[varargin_3.size(1)] = '\x00';
  r2.set_size(&c_emlrtRTEI, sp, 1, varargin_4.size(1) + 1);
  loop_ub = varargin_4.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    r2[i] = varargin_4[i];
  }
  r2[varargin_4.size(1)] = '\x00';
  r3.set_size(&d_emlrtRTEI, sp, 1, varargin_5.size(1) + 1);
  loop_ub = varargin_5.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    r3[i] = varargin_5[i];
  }
  r3[varargin_5.size(1)] = '\x00';
  spkezr_c(&r[0], varargin_2, &r1[0], &r2[0], &r3[0], &starg[0], lt);
  //  Check for errors
  failed = failed_c();
  if (failed) {
    for (int32_T i{0}; i < 5; i++) {
      cv1[i] = cv5[i];
    }
    getmsg_c(&cv1[0], 1841, &msg[0]);
    reset_c();
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 1841, m, &msg[0]);
    emlrtAssign(&y, m);
    st.site = &c_emlrtRSI;
    b_error(&st, y, &emlrtMCI);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void spkezr_wrapper2(const emlrtStack *sp,
                     const coder::array<char_T, 2U> &varargin_1,
                     real_T starg[6], real_T *lt)
{
  static const int32_T iv[2]{1, 1841};
  static const char_T cv4[7]{"RETURN"};
  static const char_T cv2[5]{"NULL"};
  static const char_T cv5[5]{"LONG"};
  coder::array<char_T, 2U> bspfile;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  int32_T b_i;
  char_T msg[1841];
  char_T cv3[7];
  char_T cv1[5];
  char_T cv[4];
  boolean_T failed;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  //  Include C files required for code generation
  //  Set error device
  cv[0] = 'S';
  cv[1] = 'E';
  cv[2] = 'T';
  cv[3] = '\x00';
  for (int32_T i{0}; i < 5; i++) {
    cv1[i] = cv2[i];
  }
  errdev_c(&cv[0], MAX_uint8_T, &cv1[0]);
  //  Set error behavior
  cv[0] = 'S';
  cv[1] = 'E';
  cv[2] = 'T';
  cv[3] = '\x00';
  for (int32_T i{0}; i < 7; i++) {
    cv3[i] = cv4[i];
  }
  erract_c(&cv[0], MAX_uint8_T, &cv3[0]);
  //  Preallocate output
  for (b_i = 0; b_i < 6; b_i++) {
    starg[b_i] = 0.0;
  }
  *lt = 0.0;
  //  Call ephemeris
  bspfile.set_size(&e_emlrtRTEI, sp, 1, varargin_1.size(1) + 1);
  b_i = varargin_1.size(1);
  for (int32_T i{0}; i < b_i; i++) {
    bspfile[i] = varargin_1[i];
  }
  bspfile[varargin_1.size(1)] = '\x00';
  furnsh_c(&bspfile[0]);
  //  Check for errors
  failed = failed_c();
  if (failed) {
    for (int32_T i{0}; i < 5; i++) {
      cv1[i] = cv5[i];
    }
    getmsg_c(&cv1[0], 1841, &msg[0]);
    reset_c();
    y = nullptr;
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
  static const int32_T iv[2]{1, 1841};
  static const char_T cv4[7]{"RETURN"};
  static const char_T cv2[5]{"NULL"};
  static const char_T cv5[5]{"LONG"};
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  char_T msg[1841];
  char_T cv3[7];
  char_T cv1[5];
  char_T cv[4];
  boolean_T failed;
  st.prev = sp;
  st.tls = sp->tls;
  //  Include C files required for code generation
  //  Set error device
  cv[0] = 'S';
  cv[1] = 'E';
  cv[2] = 'T';
  cv[3] = '\x00';
  for (int32_T i{0}; i < 5; i++) {
    cv1[i] = cv2[i];
  }
  errdev_c(&cv[0], MAX_uint8_T, &cv1[0]);
  //  Set error behavior
  cv[0] = 'S';
  cv[1] = 'E';
  cv[2] = 'T';
  cv[3] = '\x00';
  for (int32_T i{0}; i < 7; i++) {
    cv3[i] = cv4[i];
  }
  erract_c(&cv[0], MAX_uint8_T, &cv3[0]);
  //  Preallocate output
  for (int32_T i{0}; i < 6; i++) {
    starg[i] = 0.0;
  }
  *lt = 0.0;
  //  Call ephemeris
  kclear_c();
  //  Unload kernels
  //  Check for errors
  failed = failed_c();
  if (failed) {
    for (int32_T i{0}; i < 5; i++) {
      cv1[i] = cv5[i];
    }
    getmsg_c(&cv1[0], 1841, &msg[0]);
    reset_c();
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 1841, m, &msg[0]);
    emlrtAssign(&y, m);
    st.site = &emlrtRSI;
    b_error(&st, y, &c_emlrtMCI);
  }
}

// End of code generation (spkezr_wrapper.cpp)
