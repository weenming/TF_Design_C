#ifndef _MATERIALC_H_
#define _MATERIALC_H_

#define MATERIALC &MaterialC_Class

#include <complex.h>

typedef struct _Class Class;
typedef struct _IMaterial IMaterial;
typedef struct _IOptimLM IOptimLM;
typedef struct _VectorD VectorD;
typedef struct _MaterialC MaterialC;

extern Class MaterialC_Class;

extern MaterialC* MaterialC_New(double an, double bn, double cn, double ak,
                                double bk, double ck);

extern MaterialC* MaterialC_Del(MaterialC* this);

extern IMaterial* MaterialC_GetIMaterial(MaterialC* this);

extern IOptimLM* MaterialC_GetIOptimLM(MaterialC* this);

extern MaterialC* MaterialC_SetOpt(MaterialC* this, int an_opt, int bn_opt,
                                   int cn_opt, int ak_opt, int bk_opt,
                                   int ck_opt);

extern double complex MaterialC_GetN(MaterialC* this, double wl);

extern int MaterialC_GetOptSize(MaterialC* this);

extern VectorD* MaterialC_GetOptGrad(MaterialC* this, double deriv_n,
                                     double deriv_k, double wl, int index,
                                     VectorD* grad);

extern VectorD* MaterialC_GetOptParam(MaterialC* this, int index,
                                      VectorD* opt_param);

extern MaterialC* MaterialC_SetOptParam(MaterialC* this, int index,
                                        VectorD* opt_param);

#endif /*_MATERIALC_H_*/