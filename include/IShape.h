#ifndef _ISHAPE_H_
#define _ISHAPE_H_

#include <complex.h>

typedef struct _VectorD VectorD;
typedef struct _MatrixDC MatrixDC;
typedef struct _IShape IShape;

struct _IShape
{
    void* implementor;
    MatrixDC* (*AddEpsG)(void* implementor, double wl, double cell_size, double complex back_eps, VectorD* g, MatrixDC* epsilon_g);
    MatrixDC* (*AddInvEpsG)(void* implementor, double wl, double cell_size, double complex back_eps, VectorD* g, MatrixDC* inv_epsilon_g);
};

extern MatrixDC* IShape_AddEpsG(IShape* this, double wl, double cell_size, double complex back_eps, VectorD* g, MatrixDC* epsilon_g);

extern MatrixDC* IShape_AddInvEpsG(IShape* this, double wl, double cell_size, double complex back_eps, VectorD* g, MatrixDC* inv_epsilon_g);

#endif/*_ISHAPE_H_*/
