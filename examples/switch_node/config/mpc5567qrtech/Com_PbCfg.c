/* 
* Configuration of module Com (Com_PbCfg.c)
* 
* Created by: 
* Configured for (MCU): MPC5567
* 
* Module vendor:  ArcCore
* Module version: 2.0.3
* 
* 
* Generated by Arctic Studio (http://arccore.com)
*           on Thu Jun 17 15:44:15 CEST 2010
*/


#include "Com.h"
#include "stdlib.h"
#if defined(USE_PDUR)
#include "PduR.h"
#endif





/*
 * Signal init values.
 */
const uint16 Com_SignalInitValue_SetLedLevelTx = 0;
	

/*
 * Group signal definitions
 */
const ComGroupSignal_type ComGroupSignal[] = {
	{
		.Com_Arc_EOL = 1
	}
};


/* SignalGroup GroupSignals lists. */

/*
 * Signal definitions
 */
const ComSignal_type ComSignal[] = {
	{
		.ComHandleId = SetLedLevelTx,
		.ComFirstTimeoutFactor = 0,
		.ComNotification = NULL,
		.ComTimeoutFactor = 0,
		.ComTimeoutNotification = NULL,
		.ComTransferProperty = TRIGGERED,
		
		
		.ComSignalInitValue = &Com_SignalInitValue_SetLedLevelTx,
		.ComBitPosition = 7,
		.ComBitSize = 16,
		.ComSignalEndianess = BIG_ENDIAN,
		.ComSignalType = UINT16,
		.ComGroupSignal = NULL,
		
	},
	{
		.Com_Arc_EOL = 1
	}
};


/*
 * I-PDU group definitions
 */
const ComIPduGroup_type ComIPduGroup[] = {
	{
		.ComIPduGroupHandleId = TxGroup
	},
	
	{
		.Com_Arc_EOL  = 1
	}
};

/* IPdu signal lists. */
const ComSignal_type *ComIPduSignalRefs_LedCommandTx[] = {
	&ComSignal[ SetLedLevelTx ],		
	NULL,
};

/*
 * I-PDU definitions
 */
const ComIPdu_type ComIPdu[] = {	
    
	{ // LedCommandTx
		.ArcIPduOutgoingId = PDUR_DEST_PDU_ID_LedCommandTx,
		.ComIPduCallout = NULL,
		.ComIPduSignalProcessing =  DEFERRED,
		.ComIPduSize =  8,
		.ComIPduDirection = SEND,
		.ComIPduGroupRef = TxGroup,
		
		.ComTxIPdu = {
			.ComTxIPduMinimumDelayFactor = 0,
			.ComTxIPduUnusedAreasDefault = 0,
			.ComTxModeTrue = {
				.ComTxModeMode = DIRECT,
				.ComTxModeNumberOfRepetitions = 0,
				.ComTxModeRepetitionPeriodFactor = 0,
				.ComTxModeTimeOffsetFactor = 0,
				.ComTxModeTimePeriodFactor = 0,
			},
		},
		
		.ComIPduSignalRef = ComIPduSignalRefs_LedCommandTx,
	},   
	{
		.Com_Arc_EOL = 1
	}
};

const Com_ConfigType ComConfiguration = {
	.ComConfigurationId = 1,
	.ComIPdu = ComIPdu,
	.ComIPduGroup = ComIPduGroup,
	.ComSignal = ComSignal,
	.ComGroupSignal = ComGroupSignal
};

