/* ******************************************************************************** */
/*                                                                                  */
/* WMenuItemText.h														            */
/*                                                                                  */
/* Description :                                                                    */
/*		Defines the texts used for WMenu, in several languages  					*/
/*                                                                                  */
/* History :	18/03/2017	(RW)	Creation of this file                           */
/*                                                                                  */
/* ******************************************************************************** */

#ifndef __WMENU_ITEM_TEXT_H__
#define __WMENU_ITEM_TEXT_H__

/* ******************************************************************************** */
/* Include
/* ******************************************************************************** */
#include <Arduino.h>

/* ******************************************************************************** */
/* Enumeration
/* ******************************************************************************** */
typedef enum {
    WMENU_ITEM_NULL = 0,
    WMENU_ITEM_WELCOME_SCREEN,
    WMENU_ITEM_IDLE_SCREEN,
    WMENU_ITEM_SETTINGS,    
    WMENU_ITEM_SETTINGS_LANGUAGE,
    WMENU_ITEM_SETTINGS_LANGUAGE_SELECT,
    WMENU_ITEM_SETTINGS_DATETIME,
    WMENU_ITEM_SETTINGS_DATETIME_DATE,
    WMENU_ITEM_SETTINGS_DATETIME_DATE_SET,
    WMENU_ITEM_SETTINGS_DATETIME_TIME,
    WMENU_ITEM_SETTINGS_DATETIME_TIME_SET,
    WMENU_ITEM_SETTINGS_LCD,
    WMENU_ITEM_SETTINGS_LCD_BACKLIGHT,
    WMENU_ITEM_SETTINGS_RESET,
    WMENU_ITEM_SETTINGS_RESET_CONFIRM,
    WMENU_ITEM_NUMBER
} WMENU_ITEM_ENUM;


/* ******************************************************************************** */
/* Structure & Enumeration
/* ******************************************************************************** */

//              Text for all menu item :        
const String GL_ppWMenuItemText_Str[][3] = {
//      EN                          FR                          NL
    { "                    ",     "                    ",     "                    " },
    { "--- W-Link ---  (EN)",     "--- W-Link ---  (FR)",     "--- W-Link ---  (NL)" },
    { "       W-Link       ",     "       W-Link       ",     "       W-Link       " },
    { "  Settings          ",     "  Reglages          ",     "  Instellingen      " },
    { "  Languages         ",     "  Langues           ",     "  Talen             " },
    { "1=EN - 2=FR - 3=NL  ",     "1=EN - 2=FR - 3=NL  ",     "1=EN - 2=FR - 3=NL  " },
    { "  Date & Time       ",     "  Date & Heure      ",     "  Datum & Tijd      " },
    { "  Date              ",     "  Date              ",     "  Datum             " },
    { "  DD/MM/YY          ",     "  JJ/MM/AA          ",     "  DD/MM/JJ          " },
    { "  Time              ",     "  Heure             ",     "  Tijd              " },
    { "  hh:mm:ss          ",     "  hh:mm:ss          ",     "  uu:mm:ss          " },
    { "  LCD               ",     "  LCD               ",     "  LCD               " },
    { "  Backlight         ",     "  Retroeclairage    ",     "  Tegenlicht        " },
    { "  Reset             ",     "  Reset             ",     "  Reset             " },
    { "X=No - V=Yes        ",     "X=Non - V=Oui       ",     "X=Nee - V=Ja        " },
};

/* ******************************************************************************** */
/* Functions Prototypes
/* ******************************************************************************** */

#endif // __WMENU_ITEM_TEXT_H__

