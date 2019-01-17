/* 
 * File:   main.c
 * Author: mm
 *
 * Created on 2018. december 14., 16:15
 */


// PIC32MX440F256H Configuration Bit Settings

// 'C' source line config statements

// DEVCFG3
#pragma config USERID = 0xFFFF          // Enter Hexadecimal value (Enter Hexadecimal value)

// DEVCFG2
#pragma config FPLLIDIV = DIV_2         // PLL Input Divider (2x Divider)
#pragma config FPLLMUL = MUL_20         // PLL Multiplier (20x Multiplier)
#pragma config UPLLIDIV = DIV_12        // USB PLL Input Divider (12x Divider)
#pragma config UPLLEN = OFF             // USB PLL Enable (Disabled and Bypassed)
#pragma config FPLLODIV = DIV_256       // System PLL Output Clock Divider (PLL Divide by 256)

// DEVCFG1
#pragma config FNOSC = PRI              // Oscillator Selection Bits (Primary Osc (XT,HS,EC))
#pragma config FSOSCEN = ON             // Secondary Oscillator Enable (Enabled)
#pragma config IESO = ON                // Internal/External Switch Over (Enabled)
#pragma config POSCMOD = HS             // Primary Oscillator Configuration (HS osc mode)
#pragma config OSCIOFNC = OFF           // CLKO Output Signal Active on the OSCO Pin (Disabled)
#pragma config FPBDIV = DIV_1           // Peripheral Clock Divisor (Pb_Clk is Sys_Clk/1)
#pragma config FCKSM = CSDCMD           // Clock Switching and Monitor Selection (Clock Switch Disable, FSCM Disabled)
#pragma config WDTPS = PS1048576        // Watchdog Timer Postscaler (1:1048576)
#pragma config FWDTEN = OFF             // Watchdog Timer Enable (WDT Disabled (SWDTEN Bit Controls))

// DEVCFG0
#pragma config DEBUG = ON               // Background Debugger Enable (Debugger is enabled)
#pragma config ICESEL = ICS_PGx2        // ICE/ICD Comm Channel Select (ICE EMUC2/EMUD2 pins shared with PGC2/PGD2)
#pragma config PWP = OFF                // Program Flash Write Protect (Disable)
#pragma config BWP = OFF                // Boot Flash Write Protect bit (Protection Disabled)
#pragma config CP = OFF                 // Code Protect (Protection Disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.


#include "hwconfig.h"

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
/*
 * 
 */
int main(int argc, char** argv) 
{    
    TRISB &= ~((1<<STEP_Z_bit) | (1<<DIR_Z_bit));
    TRISD &= ~((1<<STEP_X_bit) | (1<<DIR_X_bit) | (1<<STEP_Y_bit) | (1<<DIR_Y_bit));
    AD1PCFG = 0xFFFF;
    
    while (1) {
        STEP_X = STEP_X_IN;
        DIR_X = DIR_X_IN;
        
        STEP_Y = STEP_Y_IN;
        DIR_Y = DIR_Y_IN;
        
        STEP_Z = STEP_Z_IN;
        DIR_Z = DIR_Z_IN;
    }
}

