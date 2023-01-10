#ifndef _IPATTERN_H_
#define _IPATTERN_H_

#include <complex.h>

typedef struct _VectorD VectorD;
typedef struct _MatrixDC MatrixDC;
typedef struct _IPattern IPattern;

struct _IPattern
{
    void* implementor;
    MatrixDC* (*GetEpsG)(void* implementor, double wl, double cell_size, double complex back_eps, VectorD* g, MatrixDC* epsilon_g);
    MatrixDC* (*GetInvEpsG)(void* implementor, double wl, double cell_size, double complex back_eps, VectorD* g, MatrixDC* inv_epsilon_g);
};

extern MatrixDC* IPattern_GetEpsG(IPattern* this, double wl, double cell_size, double complex back_eps, VectorD* g, MatrixDC* epsilon_g);

extern MatrixDC* IPattern_GetInvEpsG(IPattern* this, double wl, double cell_size, double complex back_eps, VectorD* g, MatrixDC* inv_epsilon_g);

#endif /*_IPATTERN_H_*/
