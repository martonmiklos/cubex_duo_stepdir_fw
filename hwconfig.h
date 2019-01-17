#ifndef HWCONFIG_H
#define HWCONFIG_H

//-----------------------------------------------------------------
//------------------------- DO NOT MODIFY -------------------------
//------------------Generated with the generate_hearer.ulp---------
//-----------------------------------------------------------------


#include <xc.h>

#define DIR_X_LAT   LATD
#define DIR_X_PORT   PORTD
#define DIR_X_TRISREG TRISD
#define DIR_X        PORTDbits.RD7
#define DIR_X_bit    7

#define DIR_X_IN_LAT   LATG
#define DIR_X_IN_PORT   PORTG
#define DIR_X_IN_TRISREG TRISG
#define DIR_X_IN        PORTGbits.RG6
#define DIR_X_IN_bit    6

#define DIR_Y_LAT   LATD
#define DIR_Y_PORT   PORTD
#define DIR_Y_TRISREG TRISD
#define DIR_Y        PORTDbits.RD9
#define DIR_Y_bit    9

#define DIR_Y_IN_LAT   LATE
#define DIR_Y_IN_PORT   PORTE
#define DIR_Y_IN_TRISREG TRISE
#define DIR_Y_IN        PORTEbits.RE7
#define DIR_Y_IN_bit    7

#define DIR_Z_LAT   LATB
#define DIR_Z_PORT   PORTB
#define DIR_Z_TRISREG TRISB
#define DIR_Z        PORTBbits.RB9
#define DIR_Z_bit    9

#define DIR_Z_IN_LAT   LATD
#define DIR_Z_IN_PORT   PORTD
#define DIR_Z_IN_TRISREG TRISD
#define DIR_Z_IN        PORTDbits.RD3
#define DIR_Z_IN_bit    3

#define GLOBAL_ENABLE_LAT   LATR
#define GLOBAL_ENABLE_PORT   PORTR
#define GLOBAL_ENABLE_TRISREG TRISR
#define GLOBAL_ENABLE        PORTRbits.RREG
#define GLOBAL_ENABLE_bit    EG

#define RB0_LAT   LATB
#define RB0_PORT   PORTB
#define RB0_TRISREG TRISB
#define RB0        PORTBbits.RB0
#define RB0_bit    0

#define RB1_LAT   LATB
#define RB1_PORT   PORTB
#define RB1_TRISREG TRISB
#define RB1        PORTBbits.RB1
#define RB1_bit    1

#define RB2_LAT   LATB
#define RB2_PORT   PORTB
#define RB2_TRISREG TRISB
#define RB2        PORTBbits.RB2
#define RB2_bit    2

#define RB4_LAT   LATB
#define RB4_PORT   PORTB
#define RB4_TRISREG TRISB
#define RB4        PORTBbits.RB4
#define RB4_bit    4

#define RB15_LAT   LATB
#define RB15_PORT   PORTB
#define RB15_TRISREG TRISB
#define RB15        PORTBbits.RB15
#define RB15_bit    15

#define RD11_LAT   LATD
#define RD11_PORT   PORTD
#define RD11_TRISREG TRISD
#define RD11        PORTDbits.RD11
#define RD11_bit    11

#define RF4_LAT   LATF
#define RF4_PORT   PORTF
#define RF4_TRISREG TRISF
#define RF4        PORTFbits.RF4
#define RF4_bit    4

#define RF5_LAT   LATF
#define RF5_PORT   PORTF
#define RF5_TRISREG TRISF
#define RF5        PORTFbits.RF5
#define RF5_bit    5

#define STEP_X_LAT   LATD
#define STEP_X_PORT   PORTD
#define STEP_X_TRISREG TRISD
#define STEP_X        PORTDbits.RD1
#define STEP_X_bit    1

#define STEP_X_IN_LAT   LATG
#define STEP_X_IN_PORT   PORTG
#define STEP_X_IN_TRISREG TRISG
#define STEP_X_IN        PORTGbits.RG8
#define STEP_X_IN_bit    8

#define STEP_Y_LAT   LATD
#define STEP_Y_PORT   PORTD
#define STEP_Y_TRISREG TRISD
#define STEP_Y        PORTDbits.RD8
#define STEP_Y_bit    8

#define STEP_Y_IN_LAT   LATG
#define STEP_Y_IN_PORT   PORTG
#define STEP_Y_IN_TRISREG TRISG
#define STEP_Y_IN        PORTGbits.RG7
#define STEP_Y_IN_bit    7

#define STEP_Z_LAT   LATB
#define STEP_Z_PORT   PORTB
#define STEP_Z_TRISREG TRISB
#define STEP_Z        PORTBbits.RB8
#define STEP_Z_bit    8

#define STEP_Z_IN_LAT   LATD
#define STEP_Z_IN_PORT   PORTD
#define STEP_Z_IN_TRISREG TRISD
#define STEP_Z_IN        PORTDbits.RD2
#define STEP_Z_IN_bit    2

//-----------------------------------------------------------------
//-- The default port direction values are depending on the -------
//-- connected devices pin's directions. Always double check ------
//-- the values here if you do not want frontdrive two outputs! ---
//-----------------------------------------------------------------

#define TRISB_default_value 0xFF;
#define TRISD_default_value 0xFF;
#define TRISE_default_value 0xFF;
#define TRISF_default_value 0xFF;
#define TRISG_default_value 0xFF;
#define TRISR_default_value 0xFF;

#endif //#define HWCONFIG_H