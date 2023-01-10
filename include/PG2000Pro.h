#ifndef _PG2000PRO_H_
#define _PG2000PRO_H_

#define PG2000PRO &PG2000Pro_Class

typedef struct _Class Class;
typedef struct _USBDevice USBDevice;
typedef struct _PG2000Pro PG2000Pro;

extern Class PG2000Pro_Class;

extern PG2000Pro* PG2000Pro_New(USBDevice* device);

extern PG2000Pro* PG2000Pro_Del(PG2000Pro* this);

extern char* PG2000Pro_GetSerialNumber(PG2000Pro* this);

extern int PG2000Pro_GetPixelNumber(PG2000Pro* this);

extern double* PG2000Pro_GetWaveLens(PG2000Pro* this);

extern double* PG2000Pro_GerSpectrum(PG2000Pro* this);

extern void PG2000Pro_SetIntTime(PG2000Pro* this, int int_time);

#endif /*_PG2000PRO_H_*/