#ifndef _MATERIALL_H_
#define _MATERIALL_H_

#define MATERIALL &MaterialL_Class

#include <complex.h>

typedef struct _Class Class;
typedef struct _IMaterial IMaterial;
typedef struct _IOptimLM IOptimLM;
typedef struct _VectorD VectorD;
typedef struct _MaterialL MaterialL;

extern Class MaterialL_Class;

extern MaterialL* MaterialL_New(int q, double* f, double* gamma, double* E0, double Ep, double epsilon_inf);

extern MaterialL* MaterialL_Del(MaterialL* this);

extern IMaterial* MaterialL_GetIMaterial(MaterialL* this);

extern IOptimLM* MaterialL_GetIOptimLM(MaterialL* this);

extern MaterialL* MaterialL_SetOpt(MaterialL* this, int* f_opt, int* gamma_opt, int* E0_opt, int Ep_opt, int epsilon_inf_opt);

extern double complex MaterialL_GetN(MaterialL* this, double wl);

extern int MaterialL_GetOptSize(MaterialL* this);

extern VectorD* MaterialL_GetOptGrad(MaterialL* this, double deriv_n, double deriv_k, double wl, int index, VectorD* grad);

extern VectorD* MaterialL_GetOptParam(MaterialL* this, int index, VectorD* opt_param);

extern MaterialL* MaterialL_SetOptParam(MaterialL* this, int index, VectorD* opt_param);

#endif /*_MATERIALL_H_*/