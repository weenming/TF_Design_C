#ifndef _USBDEVICE_H_
#define _USBDEVICE_H_

#define USBDEVICE &USBDevice_Class

typedef struct _GUID GUID;
typedef struct _Class Class;
typedef struct _IObject IObject;
typedef struct _ControlEndPoint ControlEndPoint;
typedef struct _BulkEndPoint BulkEndPoint;
typedef struct _USBDevice USBDevice;

extern Class USBDevice_Class;

extern unsigned char USBDevice_CountDevices(GUID* guid);

extern USBDevice* USBDevice_New(GUID* guid, unsigned char dev);

extern USBDevice* USBDevice_Del(USBDevice* this);

extern USBDevice* USBDevice_SetDevice(USBDevice* this, GUID* guid, unsigned char dev);

extern int USBDevice_Open(USBDevice* this);

extern void USBDevice_Close(USBDevice* this);

extern IObject* USBDevice_GetIObject(USBDevice* this);

extern ControlEndPoint* USBDevice_GetControlEndPoint(USBDevice* this);

extern BulkEndPoint* USBDevice_GetBulkEndPointOf(USBDevice* this, unsigned char address);

extern char* USBDevice_GetSerialNumber(USBDevice* this);

extern char* USBDevice_GetProduct(USBDevice* this);

extern unsigned short USBDevice_GetProductID(USBDevice* this);

#endif /*_USBDEVICE_H_*/ 
