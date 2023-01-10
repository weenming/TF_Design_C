#ifndef _BULKENDPOINT_H_
#define _BULKENDPOINT_H_

#define BULKENDPOINT &BulkEndPoint_Class

typedef struct _Class Class;
typedef struct _IObject IObject;
typedef struct _BulkEndPoint BulkEndPoint;
typedef struct _USB_ENDPOINT_DESCRIPTOR USB_ENDPOINT_DESCRIPTOR,* PUSB_ENDPOINT_DESCRIPTOR;

extern Class BulkEndPoint_Class;

extern BulkEndPoint* BulkEndPoint_New(void* handle, PUSB_ENDPOINT_DESCRIPTOR endpoint_descriptor);

extern BulkEndPoint* BulkEndPoint_Del(BulkEndPoint* this);

extern IObject* BulkEndPoint_GetIObject(BulkEndPoint* this);

extern BulkEndPoint* BulkEndPoint_SetDescriptor(BulkEndPoint* this, PUSB_ENDPOINT_DESCRIPTOR endpoint_descriptor);

extern unsigned char BulkEndPoint_GetAddress(BulkEndPoint* this);

extern BulkEndPoint* BulkEndPoint_SetTimeOut(BulkEndPoint* this, unsigned int time_out);

extern int BulkEndPoint_XferData(BulkEndPoint* this, unsigned char* buf, int len);

#endif /*_BULKENDPOINT_H_*/