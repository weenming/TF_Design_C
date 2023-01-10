#ifndef _FACTORY_USBSPECTROMETER_H_
#define _FACTORY_USBSPECTROMETER_H_

#define FACTORY_USBSPECTROMETER &Factory_USBSpectrometer_Class

typedef struct _Class Class;
typedef struct _USBSpectrometer USBSpectrometer;
typedef struct _Factory_USBSpectrometer Factory_USBSpectrometer;

extern Class Factory_USBSpectrometer_Class;

extern Factory_USBSpectrometer* Factory_USBSpectrometer_New();

extern Factory_USBSpectrometer* Factory_USBSpectrometer_Del(Factory_USBSpectrometer* this);

extern USBSpectrometer* Factory_USBSpectrometer_Build(Factory_USBSpectrometer* this, char* serial_number);

extern USBSpectrometer* Factory_USBSpectrometer_Destroy(USBSpectrometer* spectrometer);

#endif /*_FACTORY_USBSPECTROMETER_H_*/
