#ifndef _MATERIALI_H_
#define _MATERIALI_H_

#include <complex.h>

#define MATERIALI &MaterialI_Class

typedef struct _Class Class;
typedef struct _IMaterial IMaterial;
typedef struct _IOptimLM IOptimLM;
typedef struct _VectorD VectorD;
typedef struct _MaterialI MaterialI;

extern Class MaterialI_Class;

extern MaterialI* MaterialI_New(int len, double* wl, double* n, double* k);

extern MaterialI* MaterialI_Del(MaterialI*this);

extern IMaterial* MaterialI_GetIMaterial(MaterialI* this);

extern double complex MaterialI_GetN(MaterialI* this, double wl);

extern int MaterialI_GetOptSize(MaterialI* this);

extern VectorD* MaterialI_GetOptGrad(MaterialI* this, double deriv_n, double deriv_k, double wl, int index, VectorD* grad);

extern VectorD* MaterialI_GetOptParam(MaterialI* this, int index, VectorD* opt_param);

extern MaterialI* MaterialI_SetOptParam(MaterialI* this, int index, VectorD* opt_param);

#endif /*_MATERIALI_H_*/
