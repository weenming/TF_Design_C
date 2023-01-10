#ifndef _CONTROLENDPOINT_H_
#define _CONTROLENDPOINT_H_

#define CONTROLENDPOINT &ControlEndPoint_Class

#define DIR_TO_DEVICE 0x00
#define DIR_FROM_DEVICE 0x80

#define TGT_DEVICE 0x00
#define TGT_INTFC 0x01
#define TGT_ENDPT 0x02
#define TGT_OTHER 0x03

#define REQ_STD 0x00
#define REQ_CLASS 0x20
#define REQ_VENDOR 0x40

typedef struct _Class Class;
typedef struct _ControlEndPoint ControlEndPoint;

extern Class ControlEndPoint_Class;

extern ControlEndPoint* ControlEndPoint_New(void* handle);

extern ControlEndPoint* ControlEndPoint_Del(ControlEndPoint* this);

extern ControlEndPoint* ControlEndPoint_SetTimeOut(ControlEndPoint* this, unsigned int time_out);

extern ControlEndPoint* ControlEndPoint_SetDirection(ControlEndPoint* this, unsigned char direction);

extern ControlEndPoint* ControlEndPoint_SetTarget(ControlEndPoint* this, unsigned char target);

extern ControlEndPoint* ControlEndPoint_SetReqType(ControlEndPoint* this, unsigned char req_type);

extern ControlEndPoint* ControlEndPoint_SetReqCode(ControlEndPoint* this, unsigned char req_code);

extern ControlEndPoint* ControlEndPoint_SetValue(ControlEndPoint* this, unsigned short value);

extern ControlEndPoint* ControlEndPoint_SetIndex(ControlEndPoint* this, unsigned short index);

extern int ControlEndPoint_XferData(ControlEndPoint* this, unsigned char* buf, int len);

#endif /*_CONTROLENDPOINT_H_*/