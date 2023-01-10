#ifndef _PARSER_H_
#define _PARSER_H_

#include "mpc.h"

#define PARSER &Parser_Class

typedef struct _Class Class;
typedef struct _MatrixD MatrixD;
typedef struct _Parser Parser;

extern Class Parser_Class;

extern Parser* ParserOSE_New();

extern Parser* ParserOSE_Del(Parser* this);

extern int Parser_Interpret(Parser* this, char* input);

extern Parser* Parser_Refresh(Parser* this);

extern double Parser_Result(Parser* this, MatrixD* data, int delay_index);

#endif /*_PARSER_H_*/