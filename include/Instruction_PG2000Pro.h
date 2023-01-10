#ifndef _INSTRUCTION_PG2000PRO_H_
#define _INSTRUCTION_PG2000PRO_H_

#define INSTRUCTION_PG2000PRO &Instruction_PG2000Pro_Class

typedef struct _Class Class;
typedef struct _USBDevice USBDevice;
typedef struct _Instruction_PG2000Pro Instruction_PG2000Pro;

extern Class Instruction_PG2000Pro_Class;

extern Instruction_PG2000Pro* Instruction_PG2000Pro_New(USBDevice* device);

extern Instruction_PG2000Pro* Instruction_PG2000Pro_Del(Instruction_PG2000Pro* this);

extern void Instruction_PG2000Pro_SetIntegrationTime(Instruction_PG2000Pro* this, int int_time);

extern void Instruction_PG2000Pro_ReadWavelengthCalibrationCoefficients(Instruction_PG2000Pro* this, double* wavelength_correction);

extern void Instruction_PG2000Pro_SpecReadyFlag(Instruction_PG2000Pro* this, int* flag);

extern void Instruction_PG2000Pro_ReadData(Instruction_PG2000Pro* this, int number_of_pixels, unsigned short* singles);

extern void Instruction_PG2000Pro_GetPolynomialNonlinearityCalibration(Instruction_PG2000Pro* this, double* value);

extern void Instruction_PG2000Pro_GetBadPointReport(Instruction_PG2000Pro* this, char* report);

extern void Instruction_PG2000Pro_GetDetectorSerialNumber(Instruction_PG2000Pro* this, char* serial_number);

extern void Instruction_PG2000Pro_SetTriggerOfMode(Instruction_PG2000Pro* this, int trigger_mode);

extern void Instruction_PG2000Pro_GetStrayLightConstant(Instruction_PG2000Pro* this, char* constant);

#endif /*_INSTRUCTION_PG2000PRO_H_*/
