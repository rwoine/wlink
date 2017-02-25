/* ******************************************************************************** */
/*                                                                                  */
/* WLinkManager.cpp														            */
/*                                                                                  */
/* Description :                                                                    */
/*		Describes the state machine to manage the whole W-Link          			*/
/*                                                                                  */
/* History :  	25/02/2017  (RW)	Creation of this file                           */
/*                                                                                  */
/* ******************************************************************************** */

#define MODULE_NAME		"WLinkManager"

/* ******************************************************************************** */
/* Include
/* ******************************************************************************** */

#include "WLinkManager.h"
#include "WConfigManager.h"

#include "Debug.h"


/* ******************************************************************************** */
/* Define
/* ******************************************************************************** */



/* ******************************************************************************** */
/* Local Variables
/* ******************************************************************************** */
enum W_STATE {
    W_IDLE,
    W_CONFIG
};

static W_STATE GL_WLinkManager_CurrentState_E = W_STATE::W_IDLE;
static boolean GL_WLinkManagerEnabled_B = false;


/* ******************************************************************************** */
/* Prototypes for Internal Functions
/* ******************************************************************************** */
static void ProcessIdle(void);
static void ProcessConfig(void);


static void TransitionToIdle(void);
static void TransitionToConfig(void);


/* ******************************************************************************** */
/* Functions
/* ******************************************************************************** */

void WLinkManager_Init() {
    GL_WLinkManagerEnabled_B = false;
    DBG_PRINTLN(DEBUG_SEVERITY_INFO, "W-Link Manager Initialized");
    // Init sub-entities Manager
    WConfigManager_Init();
}

void WLinkManager_Enable() {
    GL_WLinkManagerEnabled_B = true;
}

void WLinkManager_Disable() {
    GL_WLinkManagerEnabled_B = false;
}

void WLinkManager_Process() {
    switch (GL_WLinkManager_CurrentState_E) {
    case W_IDLE:
        ProcessIdle();
        break;

    }
}


/* ******************************************************************************** */
/* Internal Functions
/* ******************************************************************************** */

void ProcessIdle(void) {
    if (GL_WLinkManagerEnabled_B)
        TransitionToConfig();
}

void ProcessConfig(void) {
    if (WConfigManager_Process() != WCFG_STS_BUSY) {

    }
}

void TransitionToIdle(void) {
    DBG_PRINTLN(DEBUG_SEVERITY_INFO, "Transition To IDLE");
    GL_WLinkManager_CurrentState_E = W_STATE::W_IDLE;
}

void TransitionToConfig(void) {
    DBG_PRINTLN(DEBUG_SEVERITY_INFO, "Transition to CONFIG");
    WConfigManager_Enable();
    GL_WLinkManager_CurrentState_E = W_STATE::W_CONFIG;
}
