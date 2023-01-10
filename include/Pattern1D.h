#ifndef _PATTERN1D_H_
#define _PATTERN1D_H_

#include <complex.h>

#define PATTERN1D &Pattern1D_Class

typedef struct _Class Class;
typedef struct _IShape IShape;
typedef struct _IPattern IPattern;
typedef struct _VectorD VectorD;
typedef struct _MatrixDC MatrixDC;
typedef struct _Pattern1D Pattern1D;

extern Class Pattern1D_Class;

extern Pattern1D* Pattern1D_New();

extern Pattern1D* Pattern1D_Del(Pattern1D* this);

extern IPattern* Pattern1D_GetIPattern(Pattern1D* this);

extern Pattern1D* Pattern1D_AddShape(Pattern1D* this, IShape* shape);

extern MatrixDC* Pattern1D_GetEpsG(Pattern1D* this, double wl, double cell_size, double complex eps_back, VectorD* g, MatrixDC* epsilon_g);

extern MatrixDC* Pattern1D_GetInvEpsG(Pattern1D* this, double wl, double cell_size, double complex eps_back, VectorD* g, MatrixDC* inv_epsilon_g);

#endif /*_PATTERN1D_H_*/
