#ifndef _IOPTIMLM_H_
#define _IOPTIMLM_H_

typedef struct _VectorD VectorD;
typedef struct _MatrixD MatrixD;
typedef struct _IOptimLM IOptimLM;

struct _IOptimLM
{
    void* implementor;
    VectorD* (*Func)(void* implementor, VectorD* param, VectorD* input, VectorD* output);
    MatrixD* (*JacMatrix)(void* implementor, VectorD* param, VectorD* input, MatrixD* jac_maxtrix);    
};

extern VectorD* IOptimLM_Func(IOptimLM* this, VectorD* param, VectorD* input, VectorD* output);

extern MatrixD* IOptimLM_JacMatrix(IOptimLM* this, VectorD* param, VectorD* input, MatrixD* jac_maxtrix);

#endif /*_IsOPTIMLM_H_*/