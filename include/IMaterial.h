#ifndef _IMATERIAL_H_
#define _IMATERIAL_H_

#include <complex.h>

typedef struct _VectorD VectorD;
typedef struct _IMaterial IMaterial;

struct _IMaterial
{
    void* implementor;
    double complex (*GetN)(void* implementor, double wl);
    int (*GetOptSize)(void* implementor);
    VectorD* (*GetOptGrad)(void* implementor, double deriv_n, double deriv_k, double wl, int index, VectorD* grad);
    VectorD* (*GetOptParam)(void* implmentor, int index, VectorD* opt_param);
    IMaterial* (*SetOptParam)(void* implementor, int index, VectorD* opt_param);
};

extern double complex IMaterial_GetN(IMaterial* this, double wl);

extern int IMaterial_GetOptSize(IMaterial* this);

extern VectorD* IMaterial_GetOptGrad(IMaterial* this, double deriv_n, double deriv_k, double wl, int index, VectorD* grad);

extern VectorD* IMaterial_GetOptParam(IMaterial* this, int index, VectorD* opt_param);

extern IMaterial* IMaterial_SetOptParam(IMaterial* this, int index, VectorD* opt_param);

#endif /*_IMATERIAL_H_*/