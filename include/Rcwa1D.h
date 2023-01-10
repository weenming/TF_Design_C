#ifndef _RCWA1D_H_
#define _RCWA1D_H_

#define RCWA1D &Rcwa1D_Class

typedef struct _Class Class;
typedef struct _VectorD VectorD;
typedef struct _MatrixDC MatrixDC;
typedef struct _IMaterial IMaterial;
typedef struct _IPattern IPattern;
typedef struct _Rcwa1D Rcwa1D;

extern Class Rcwa1D_Class;

extern Rcwa1D* Rcwa1D_New(int num_g, double period, double polar_angle, double azimuth_angle, double wl);

extern Rcwa1D* Rcwa1D_Del(Rcwa1D* this);

extern Rcwa1D* Rcwa1D_SetConfig(Rcwa1D* this, double period, double polar_angle, double azimuth_angle, double wl);

extern Rcwa1D* Rcwa1D_AddLayer(Rcwa1D* this, IMaterial* material, IPattern* pattern, double d);

extern Rcwa1D* Rcwa1D_InsertLayer(Rcwa1D* this, int index, IMaterial* material, IPattern* pattern, double d);

extern Rcwa1D* Rcwa1D_RemoveLayer(Rcwa1D* this, int index);

extern Rcwa1D* Rcwa1D_Build(Rcwa1D* this);

extern Rcwa1D* Rcwa1D_Calculate(Rcwa1D* this);

extern MatrixDC* Rcwa1D_GetJonesMatrix(Rcwa1D* this, int is_trans, MatrixDC* jones_matrix);

extern VectorD* Rcwa1D_GetEfficiency(Rcwa1D* this, int is_te, int is_trans, VectorD* efficiency);

#endif /*_RCWA1D_H_*/
