#ifndef _ICALLBACK_H_
#define _ICALLBACK_H_

typedef struct _ICallback ICallback;

struct _ICallback
{
    void* implementor;
    void (*Func)(void* implementor, void* user_data);
    int (*Compare)(void* implementor, void* object, void* user_data);
};

extern void ICallback_Func(ICallback* this, void* user_data);

extern int ICallback_Compare(ICallback* this, void* object, void* user_data);

#endif /*_ICALLBACK_H_*/
