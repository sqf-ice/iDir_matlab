/*
 * isequal.c
 *
 * Code generation for function 'isequal'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "HDLC_extract_2.h"
#include "isequal.h"

/* Function Definitions */
boolean_T isequal(const emxArray_real_T *varargin_1, const real_T varargin_2[8])
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  int32_T exitg2;
  boolean_T exitg1;
  p = false;
  b_p = false;
  k = 0;
  do {
    exitg2 = 0;
    if (k < 2) {
      if (varargin_1->size[k] != 1 + 7 * k) {
        exitg2 = 1;
      } else {
        k++;
      }
    } else {
      b_p = true;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  if (b_p && (!(varargin_1->size[1] == 0))) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= varargin_1->size[1] - 1)) {
      if (!(varargin_1->data[k] == varargin_2[k])) {
        b_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (!b_p) {
  } else {
    p = true;
  }

  return p;
}

/* End of code generation (isequal.c) */
