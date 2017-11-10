/*
 * _coder_perebor8pskTPC_api.c
 *
 * Code generation for function '_coder_perebor8pskTPC_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "perebor8pskTPC.h"
#include "_coder_perebor8pskTPC_api.h"
#include "perebor8pskTPC_emxutil.h"
#include "hamming_decode_soft.h"
#include "perebor8pskTPC_mexutil.h"

/* Variable Definitions */
static emlrtRTEInfo v_emlrtRTEI = { 1, 1, "_coder_perebor8pskTPC_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *data_symb_len, const char_T *identifier);
static const mxArray *c_emlrt_marshallOut(const boolean_T u);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Star, const
  char_T *identifier, real_T **y_data, int32_T y_size[2]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *out_burst_complex_without_UWs, const char_T *identifier, emxArray_creal_T *y);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2]);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret);
static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y)
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *data_symb_len, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(data_symb_len), &thisId);
  emlrtDestroyArray(&data_symb_len);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const boolean_T u)
{
  const mxArray *y;
  const mxArray *m12;
  y = NULL;
  m12 = emlrtCreateLogicalScalar(u);
  emlrtAssign(&y, m12);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Star, const
  char_T *identifier, real_T **y_data, int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(sp, emlrtAlias(Star), &thisId, y_data, y_size);
  emlrtDestroyArray(&Star);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *out_burst_complex_without_UWs, const char_T *identifier, emxArray_creal_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(out_burst_complex_without_UWs), &thisId, y);
  emlrtDestroyArray(&out_burst_complex_without_UWs);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2])
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret)
{
  int32_T iv32[1];
  boolean_T bv0[1];
  int32_T iv33[1];
  int32_T i48;
  iv32[0] = 1048576;
  bv0[0] = true;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", true, 1U, iv32, bv0, iv33);
  i48 = ret->size[0];
  ret->size[0] = iv33[0];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i48, (int32_T)sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, true);
  emlrtDestroyArray(&src);
}

static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2])
{
  int32_T iv34[2];
  boolean_T bv1[2];
  int32_T i49;
  static const boolean_T bv2[2] = { false, true };

  int32_T iv35[2];
  for (i49 = 0; i49 < 2; i49++) {
    iv34[i49] = 1 + 7 * i49;
    bv1[i49] = bv2[i49];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv34, bv1, iv35);
  ret_size[0] = iv35[0];
  ret_size[1] = iv35[1];
  *ret_data = (real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
}

void perebor8pskTPC_api(const mxArray * const prhs[8], const mxArray *plhs[7])
{
  emxArray_creal_T *out_burst_complex_without_UWs;
  real_T data_symb_len;
  real_T num_packet_per_burst;
  int32_T Star_size[2];
  real_T (*Star_data)[8];
  real_T frame_dec_len;
  real_T packet_dec_len;
  real_T c_r;
  real_T flag_FDMA;
  real_T num_iter_;
  real_T num_iter;
  real_T ind_bad_;
  real_T ind_good_;
  real_T ind_bad;
  real_T ind_good;
  boolean_T flag_ok;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_creal_T(&st, &out_burst_complex_without_UWs, 1, &v_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "out_burst_complex_without_UWs",
                   out_burst_complex_without_UWs);
  data_symb_len = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "data_symb_len");
  num_packet_per_burst = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]),
    "num_packet_per_burst");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "Star", (real_T **)&Star_data,
                     Star_size);
  frame_dec_len = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "frame_dec_len");
  packet_dec_len = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]),
    "packet_dec_len");
  c_r = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "c_r");
  flag_FDMA = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "flag_FDMA");

  /* Invoke the target function */
  perebor8pskTPC(&st, out_burst_complex_without_UWs, data_symb_len,
                 num_packet_per_burst, *Star_data, Star_size, frame_dec_len,
                 packet_dec_len, c_r, flag_FDMA, &flag_ok, &ind_good, &ind_bad,
                 &ind_good_, &ind_bad_, &num_iter, &num_iter_);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(flag_ok);
  plhs[1] = b_emlrt_marshallOut(ind_good);
  plhs[2] = b_emlrt_marshallOut(ind_bad);
  plhs[3] = b_emlrt_marshallOut(ind_good_);
  plhs[4] = b_emlrt_marshallOut(ind_bad_);
  plhs[5] = b_emlrt_marshallOut(num_iter);
  plhs[6] = b_emlrt_marshallOut(num_iter_);
  emxFree_creal_T(&out_burst_complex_without_UWs);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_perebor8pskTPC_api.c) */
