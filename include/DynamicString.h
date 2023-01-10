#ifndef _DYNAMICSTRING_H_
#define _DYNAMICSTRING_H_

#define DYNAMICSTRING &DynamicString_Class

typedef struct _Class Class;
typedef struct _IObject IObject;
typedef struct _IString IString;
typedef struct _DynamicString DynamicString;

extern Class DynamicString_Class;

extern DynamicString* DynamicString_New();

extern DynamicString* DynamicString_Del(DynamicString* this);

extern IObject* DynamicString_GetIObject(DynamicString* this);

extern IString* DynamicString_GetIString(DynamicString* this);

extern char* DynamicString_GetString(DynamicString* this);

extern int DynamicString_Copy(DynamicString* this, char* string);

extern DynamicString* DynamicString_Clear(DynamicString* this);

extern int DynamicString_Length(DynamicString* this);

extern int DynamicString_Compare(DynamicString* this, char* string);

extern DynamicString* DynamicString_Concat(DynamicString* this, char* string);

extern DynamicString* DynamicString_SubString(DynamicString* this, char* string, int pos, int len);

extern int DynamicString_Index(DynamicString* this, char* string, int pos);

extern DynamicString* DynamicString_Replace(DynamicString* this, char* string1, char* string2);

extern DynamicString* DynamicString_Insert(DynamicString* this, int pos, char* string);

extern DynamicString* DynamicString_Delete(DynamicString* this, int pos, int len);

extern DynamicString* DynamicString_ToUpper(DynamicString* this);

extern DynamicString* DynamicString_ToLower(DynamicString* this);

#endif /*_DYNAMICSTRING_H_*/
