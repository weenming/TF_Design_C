#ifndef _MATERIALS_H_
#define _MATERIALS_H_

#include <complex.h>

#define MATERIALS &MaterialS_Class

typedef struct _Class Class;
typedef struct _IMaterial IMaterial;
typedef struct _IOptimLM IOptimLM;
typedef struct _VectorD VectorD;
typedef struct _MaterialS MaterialS;

extern Class MaterialS_Class;

extern MaterialS* MaterialS_New(double b1, double b2, double b3, double c1,
                                double c2, double c3);

extern MaterialS* MaterialS_Del(MaterialS* this);

extern IMaterial* MaterialS_GetIMaterial(MaterialS* this);

extern IOptimLM* MaterialS_GetIOptimLM(MaterialS* this);

extern MaterialS* MaterialS_SetOpt(MaterialS* this, int b1_opt, int b2_opt,
                                   int b3_opt, int c1_opt, int c2_opt,
                                   int c3_opt);

extern double complex MaterialS_GetN(MaterialS* this, double wl);

extern int MaterialS_GetOptSize(MaterialS* this);

extern VectorD* MaterialS_GetOptGrad(MaterialS* this, double deriv_n,
                                     double deriv_k, double wl, int index,
                                     VectorD* grad);

extern VectorD* MaterialS_GetOptParam(MaterialS* this, int index,
                                      VectorD* opt_param);

extern MaterialS* MaterialS_SetOptParam(MaterialS* this, int index,
                                        VectorD* opt_param);

#endif /*_MATERIALS_H_*/
