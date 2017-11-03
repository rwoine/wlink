/* ******************************************************************************** */
/*                                                                                  */
/* KipControlMenuItemFunction.h											            */
/*                                                                                  */
/* Description :                                                                    */
/*		Header file for KipControlMenuItemFunction.cpp						       	*/
/*		Defines the specific functions for the KipControl Menu Items.				*/
/*                                                                                  */
/* History :	03/09/2017	(RW)	Creation of this file                           */
/*                                                                                  */
/* ******************************************************************************** */

#ifndef __KCMENU_ITEM_FUNCTION_H__
#define __KCMENU_ITEM_FUNCTION_H__

/* ******************************************************************************** */
/* Include
/* ******************************************************************************** */
#include "WLink.h"


/* ******************************************************************************** */
/* Define
/* ******************************************************************************** */

/* ******************************************************************************** */
/* Structure & Enumeration
/* ******************************************************************************** */

/* ******************************************************************************** */
/* Functions Prototypes
/* ******************************************************************************** */
boolean KCMenuItem_WelcomeScreen_GetCondition(void * Hander_H);

void KCMenuItem_GetBatchNumber_Transition(void * Handler_H);
void KCMenuItem_GetReferenceId_Transition(void * Handler_H);
void KCMenuItem_GetTolerance_Transition(void * Handler_H);
void KCMenuItem_GetMinWeight_Transition(void * Handler_H);
void KCMenuItem_GetCurrentDay_Transition(void * Handler_H);


#endif // __KCMENU_ITEM_FUNCTION_H__

