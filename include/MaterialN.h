#ifndef _MATERIALN_H_
#define _MATERIALN_H_

#define MATERIALN &MaterialN_Class

#include <complex.h>

typedef struct _Class Class;
typedef struct _IMaterial IMaterial;
typedef struct _IOptimLM IOptimLM;
typedef struct _VectorD VectorD;
typedef struct _MaterialN MaterialN;

extern Class MaterialN_Class;

extern MaterialN* MaterialN_New(double n, double k);

extern MaterialN* MaterialN_Del(MaterialN* this);

extern IMaterial* MaterialN_GetIMaterial(MaterialN* this);

extern IOptimLM* MaterialN_GetIOptimLM(MaterialN* this);

extern MaterialN* MaterialN_SetOpt(MaterialN* this, int n_opt, int k_opt);

extern double complex MaterialN_GetN(MaterialN* this, double wl);

extern int MaterialN_GetOptSize(MaterialN* this);

extern VectorD* MaterialN_GetOptGrad(MaterialN* this, double deriv_n,
                                     double deriv_k, double wl, int index,
                                     VectorD* grad);

extern VectorD* MaterialN_GetOptParam(MaterialN* this, int index,
                                      VectorD* opt_param);

extern MaterialN* MaterialN_SetOptParam(MaterialN* this, int index,
                                        VectorD* opt_param);

#endif /*_MATERIALN_H_*/