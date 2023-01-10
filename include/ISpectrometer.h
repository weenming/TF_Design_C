#ifndef _ISPECTROMETER_H_
#define _ISPECTROMETER_H_

typedef struct _ISpectrometer ISpectrometer;

struct _ISpectrometer
{
    void* implementor;
    char* (*GetSerialNumber)(void* implementor);
    int (*GetPixelNumber)(void* implementor);
    double* (*GetWaveLens)(void* implementor);
    double* (*GetSpectrum)(void* implementor);    
    void (*SetIntTime)(void* implementor, int int_time);
};

extern char* ISpectrometer_GetSerialNumber(ISpectrometer* this);

extern int ISpectrometer_GetPixelNumber(ISpectrometer* this);

extern double* ISpectrometer_GetWaveLens(ISpectrometer* this);

extern double* ISpectrometer_GetSpectrum(ISpectrometer* this);

extern void ISpectrometer_SetIntTime(ISpectrometer* this, int int_time);

#endif /*_ISPECTROMETER_H_*/