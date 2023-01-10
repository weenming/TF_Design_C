#ifndef _MATERIALF_H_
#define _MATERIALF_H_

#define MATERIALF &MaterialF_Class

#include <complex.h>

typedef struct _Class Class;
typedef struct _IMaterial IMaterial;
typedef struct _IOptimLM IOptimLM;
typedef struct _VectorD VectorD;
typedef struct _MaterialF MaterialF;

extern Class MaterialF_Class;

extern MaterialF* MaterialF_New(int q, double* A, double* B, double* C,
                                double Eg, double n_inf);

extern MaterialF* MaterialF_Del(MaterialF* this);

extern IMaterial* MaterialF_GetIMaterial(MaterialF* this);

extern IOptimLM* MaterialF_GetIOptimLM(MaterialF* this);

extern MaterialF* MaterialF_SetOpt(MaterialF* this, int* A_opt, int* B_opt,
                                   int* C_opt, int Eg_opt, int n_inf_opt);

extern double complex MaterialF_GetN(MaterialF* this, double wl);

extern int MaterialF_GetOptSize(MaterialF* this);

extern VectorD* MaterialF_GetOptGrad(MaterialF* this, double deriv_n,
                                     double deriv_k, double wl, int index,
                                     VectorD* grad);

extern VectorD* MaterialF_GetOptParam(MaterialF* this, int index,
                                      VectorD* opt_param);

extern MaterialF* MaterialF_SetOptParam(MaterialF* this, int index,
                                        VectorD* opt_param);

#endif /*_MATERIALF_H_*/
