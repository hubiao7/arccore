/*
* Configuration of module: Rte (Rte_Types.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    TMS570
*
* Module vendor:           ArcCore
* Generator version:       0.0.9
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Thu Jun 30 17:29:02 CEST 2011
*/

/* Rte_Types.h */

#ifndef RTE_TYPES_H
#define RTE_TYPES_H

#include "Rte.h"

typedef void * Rte_Instance;

typedef float Float;

typedef sint32 SInt32;
#define SInt32_LowerLimit -2147483648
#define SInt32_UpperLimit 2147483647

typedef sint8 SInt8;
#define SInt8_LowerLimit -128
#define SInt8_UpperLimit 127

typedef uint32 UInt32;
#define UInt32_LowerLimit 0
#define UInt32_UpperLimit 4294967295

typedef uint8 UInt8;
#define UInt8_LowerLimit 0
#define UInt8_UpperLimit 255

typedef sint16 SInt16;
#define SInt16_LowerLimit -32768
#define SInt16_UpperLimit 32767

typedef boolean Boolean;

typedef uint16 UInt16;
#define UInt16_LowerLimit 0
#define UInt16_UpperLimit 65535

typedef struct {
	Float value;
} Rte_DE_Float;

typedef struct {
	SInt32 value;
} Rte_DE_SInt32;

typedef struct {
	SInt8 value;
} Rte_DE_SInt8;

typedef struct {
	UInt32 value;
} Rte_DE_UInt32;

typedef struct {
	UInt8 value;
} Rte_DE_UInt8;

typedef struct {
	SInt16 value;
} Rte_DE_SInt16;

typedef struct {
	Boolean value;
} Rte_DE_Boolean;

typedef struct {
	UInt16 value;
} Rte_DE_UInt16;

typedef struct {
} Rte_PDS_Calculator_CalculatorOperations_P;
typedef struct {
} Rte_PDS_Calculator_CalculatorOperations_R;

typedef struct {
} Rte_CDS_Calculator;

typedef struct {
} Rte_PDS_Tester_CalculatorOperations_P;
typedef struct {
} Rte_PDS_Tester_CalculatorOperations_R;

typedef struct {
	Std_ReturnType (*Write_arg1)(UInt8);
	Std_ReturnType (*Write_arg2)(UInt8);
} Rte_PDS_Tester_ArgumentIf_P;
typedef struct {
	Std_ReturnType (*Read_arg1)(UInt8);
	Std_ReturnType (*Read_arg2)(UInt8);
} Rte_PDS_Tester_ArgumentIf_R;

typedef struct {
	Std_ReturnType (*Write_result)(UInt16);
} Rte_PDS_Tester_ResultIf_P;
typedef struct {
	Std_ReturnType (*Read_result)(UInt16);
} Rte_PDS_Tester_ResultIf_R;

typedef struct {
	Std_ReturnType (*Write_freq)(UInt32);
} Rte_PDS_Tester_FreqReqIf_P;
typedef struct {
	Std_ReturnType (*Read_freq)(UInt32);
} Rte_PDS_Tester_FreqReqIf_R;

typedef struct {
	Rte_DE_UInt32* FreqReqRunnable_FreqReq_freq;
	Rte_DE_UInt8* TesterRunnable_Arguments_arg1;
	Rte_DE_UInt8* TesterRunnable_Arguments_arg2;
	Rte_DE_UInt32* FreqReqRunnable_FreqReqInd_freq;
	Rte_DE_UInt16* TesterRunnable_Result_result;
} Rte_CDS_Tester;

typedef struct {
	Std_ReturnType (*Write_result)(UInt16);
} Rte_PDS_Logger_ResultIf_P;
typedef struct {
	Std_ReturnType (*Read_result)(UInt16);
} Rte_PDS_Logger_ResultIf_R;

typedef struct {
	Rte_DE_UInt16* LoggerRunnable_Result_result;
} Rte_CDS_Logger;

typedef struct {
	Std_ReturnType (*Write_result)(UInt16);
} Rte_PDS_Logger2_ResultIf_P;
typedef struct {
	Std_ReturnType (*Read_result)(UInt16);
} Rte_PDS_Logger2_ResultIf_R;

typedef struct {
	Rte_DE_UInt16* Logger2Runnable_Result_result;
} Rte_CDS_Logger2;

#endif