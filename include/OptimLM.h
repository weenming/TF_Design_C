#ifndef _OPTIMLM_H_
#define _OPTIMLM_H_

#define OPTIMLM &OptimLM_Class

typedef struct _Class Class;
typedef struct _IOptimLM IOptimLM;
typedef struct _VectorD VectorD;
typedef struct _OptimLM OptimLM;

extern Class OptimLM_Class;

extern OptimLM* OptimLM_New(IOptimLM* iOptimLM);

extern OptimLM* OptimLM_Del(OptimLM* this);

extern OptimLM* OptimLM_SetIOptimLM(OptimLM* this, IOptimLM* iOptimLM);

extern OptimLM* OptimLM_SetConfig(OptimLM* this, int iter_max, double tau, double epsilon1, double epsilon2, double epsilon3);

extern VectorD* OptimLM_Fit(OptimLM* this, VectorD* init_param, VectorD* input, VectorD* ground_truth, VectorD* final_param, double* work);

#endif /*_OPTIMLM_H_*/
