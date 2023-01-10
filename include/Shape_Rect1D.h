#ifndef _SHAPE_RECT1D_H_
#define _SHAPE_RECT1D_H_

#include <complex.h>

#define SHAPE_RECT1D &Shape_Rect1D_Class

typedef struct _Class Class;
typedef struct _IShape IShape;
typedef struct _IMaterial IMaterial;
typedef struct _VectorD VectorD;
typedef struct _MatrixDC MatrixDC;
typedef struct _Shape_Rect1D Shape_Rect1D;

extern Class Shape_Rect1D_Class;

extern Shape_Rect1D* Shape_Rect1D_New(double offset, double width, IMaterial* material);

extern Shape_Rect1D* Shape_Rect1D_Del(Shape_Rect1D* this);

extern IShape* Shape_Rect1D_GetIShape(Shape_Rect1D* this);

extern MatrixDC* Shape_Rect1D_AddEpsG(Shape_Rect1D* this, double wl, double cell_size, double complex back_eps, VectorD* g, MatrixDC* epsilon_g);

extern MatrixDC* Shape_Rect1D_AddInvEpsG(Shape_Rect1D* this, double wl, double cell_size, double complex back_eps, VectorD* g, MatrixDC* inv_epsilon_g);

#endif /*_SHAPE_RECT1D_H_*/

