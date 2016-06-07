/* ******************************************************************************** */
/*                                                                                  */
/* LD5218.h																			*/
/*                                                                                  */
/* Description :                                                                    */
/*		Header file for LD5218.cpp													*/
/*                                                                                  */
/* History :  	07/06/2015  (RW)	Creation of this file							*/
/*                                                                                  */
/* ******************************************************************************** */

#ifndef __LD5218_H__
#define __LD5218_H__

/* ******************************************************************************** */
/* Include
/* ******************************************************************************** */
#include "Indicator.h"

/* ******************************************************************************** */
/* Define
/* ******************************************************************************** */

/* ******************************************************************************** */
/* Structure & Enumeration
/* ******************************************************************************** */
const INDICATOR_INTERFACE_FRAME_STRUCT GL_pLD5218Frames_X[] = {	{ 3,{ 0x02,'?',0x03 } },					// ASK_WEIGHT
																{ 7,{ 0x02,'A','?','0','4','C',0x03 } },	// ASK_WEIGHT_ALIBI
																{ 7,{ 0x02,'a','?','0','6','C',0x03 } },	// ASK_LAST_ALIBI
																{ 7,{ 0x02,'A','=','0','>','4',0x03 } },	// ASK_WEIGHT_MSA
																{ 3,{ 0x02,'0',0x03 } }						// SET_TO_ZERO
																};

/* ******************************************************************************** */
/* Functions
/* ******************************************************************************** */
void LD5218_ProcessWeight(unsigned char * pBuffer_UB, INDICATOR_WEIGHT_STRUCT * pWeight_X, boolean isAlibi_B, boolean isMsa_B);

#endif // __LD5218_H__