/* ******************************************************************************** */
/*                                                                                  */
/* WConfigManager.h														            */
/*                                                                                  */
/* Description :                                                                    */
/*		Header file for WConfigManager.cpp							            	*/
/*		Process functions to manage the configuration of the W-Link                 */
/*                                                                                  */
/* History :	25/02/2017	(RW)	Creation of this file                           */
/*                                                                                  */
/* ******************************************************************************** */

#ifndef __WCONFIG_MANAGER_H__
#define __WCONFIG_MANAGER_H__

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
typedef enum {
    WCFG_STS_BUSY           = -1,
    WCFG_STS_OK             = 0,
    WCFG_STS_NOT_ENABLED    = 1,
    WCFG_STS_ERROR          = 100,
    WCFG_STS_ERROR_READING  = 101
}WCFG_STATUS;

/* ******************************************************************************** */
/* Functions Prototypes
/* ******************************************************************************** */
void WConfigManager_Init();
void WConfigManager_Enable();
void WConfigManager_Disable();
WCFG_STATUS WConfigManager_Process();


#endif // __WCONFIG_MANAGER_H__
