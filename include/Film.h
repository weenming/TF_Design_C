#ifndef _FILM_H_
#define _FILM_H_

#define FILM &Film_Class

typedef struct _Class Class;
typedef struct _VectorD VectorD;
typedef struct _IOptimLM IOptimLM;
typedef struct _IMaterial IMaterial;
typedef struct _Film Film;

extern Class Film_Class;

extern Film* Film_New(double angle, double wl, int is_te, int is_trans);

extern Film* Film_Del(Film* this);

extern IOptimLM* Film_GetIOptimLM(Film* this);

extern Film* Film_SetConfig(Film* this, double angle, double wl, int is_te, int is_trans);

extern Film* Film_AddLayer(Film* this, IMaterial* material, double d, int d_opt);

extern Film* Film_InsertLayer(Film* this, int index, IMaterial* material, double d, int d_opt);

extern Film* Film_RemoveLayer(Film* this, int index);

extern int Film_GetOptSize(Film* this);

extern VectorD* Film_GetOptParam(Film* this, VectorD* opt_param);

extern Film* Film_SetOptParam(Film* this, VectorD* opt_param);

extern Film* Film_Build(Film* this);

extern Film* Film_Calculate(Film* this);

extern double Film_GetEnergyCoeff(Film* this);

extern VectorD* Film_GetOptGrad(Film* this, VectorD* grad);

extern double Film_GetInsertGrad(Film* this, int index, double pos, IMaterial* material);

#endif /*_FILM_H_*/
