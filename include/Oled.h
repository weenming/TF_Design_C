#ifndef _OLED_H_
#define _OLED_H_

#define OLED &Oled_Class

typedef struct _Class Class;
typedef struct _IMaterial IMaterial;
typedef struct _Oled Oled;

extern Class Oled_Class;

extern Oled* Oled_New();

extern Oled* Oled_Del(Oled* this);

extern IOptimLM* Oled_GetIOptimLMS(Oled* this);

extern IOptimLM* Oled_GetIOptimLMP(Oled* this);

extern Oled* Oled_AddLayer(Oled* this, IMaterial* material, double d, double rm_d);

extern Oled* Oled_InsertLayer(Oled* this, int index, IMaterial* material, double d, double rm_d);

extern Oled* Oled_RemoveLayer(Oled* this, int index);

extern Oled* Oled_ChangeLayer(Oled* this, int index, IMaterial* material, double d, double rm_d);

extern Oled* Oled_SetDipole(Oled* this, int dipole_layer_index, double z_plus, double wavelength, double theta);

extern void Oled_GetIntensity(Oled* this, double angle, double* P_te_plus, double* P_tm_plus);

extern int Oled_GetOptSize(Oled* this);

extern VectorD* Oled_GetOptParam(Oled* this, VectorD* opt_param);

extern Oled* Oled_SetOptParam(Oled* this, VectorD* opt_param);

#endif /*_OLED_H_*/

