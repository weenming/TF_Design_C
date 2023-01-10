#ifndef _USBSPECTROMETER_H_
#define _USBSPECTROMETER_H_

#define USBSPECTROMETER &USBSpectrometer_Class

typedef struct _Class Class;
typedef struct _USBSpectrometer USBSpectrometer;

extern Class USBSpectrometer_Class;

extern char* USBSpectrometer_GetSerialNumber(USBSpectrometer* this);

extern int USBSpectrometer_GetPixelNumber(USBSpectrometer* this);

extern double* USBSpectrometer_GetWaveLens(USBSpectrometer* this);

extern double* USBSpectrometer_GetSpectrum(USBSpectrometer* this);

extern void USBSpectrometer_SetIntTime(USBSpectrometer* this, int int_time);

#endif /*_USBSPECTROMETER_H_*/