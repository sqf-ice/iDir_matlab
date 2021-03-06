/*
 * eml_sort.h
 *
 * Code generation for function 'eml_sort'
 *
 */

#ifndef __EML_SORT_H__
#define __EML_SORT_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "perebor8pskTPC_types.h"

/* Function Declarations */
extern void b_eml_sort(const real_T x[4], real_T y[4], int32_T idx[4]);
extern void eml_sort(const real_T x_data[], const int32_T x_size[2], real_T
                     y_data[], int32_T y_size[2], int32_T idx_data[], int32_T
                     idx_size[2]);

#endif

/* End of code generation (eml_sort.h) */
