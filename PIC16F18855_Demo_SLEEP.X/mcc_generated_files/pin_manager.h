/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC16F18855
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.30 and above
        MPLAB 	          :  MPLAB X 5.40	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set POTENTIOMETER aliases
#define POTENTIOMETER_TRIS                 TRISAbits.TRISA4
#define POTENTIOMETER_LAT                  LATAbits.LATA4
#define POTENTIOMETER_PORT                 PORTAbits.RA4
#define POTENTIOMETER_WPU                  WPUAbits.WPUA4
#define POTENTIOMETER_OD                   ODCONAbits.ODCA4
#define POTENTIOMETER_ANS                  ANSELAbits.ANSA4
#define POTENTIOMETER_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define POTENTIOMETER_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define POTENTIOMETER_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define POTENTIOMETER_GetValue()           PORTAbits.RA4
#define POTENTIOMETER_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define POTENTIOMETER_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define POTENTIOMETER_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define POTENTIOMETER_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define POTENTIOMETER_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define POTENTIOMETER_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define POTENTIOMETER_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define POTENTIOMETER_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set S2 aliases
#define S2_TRIS                 TRISAbits.TRISA5
#define S2_LAT                  LATAbits.LATA5
#define S2_PORT                 PORTAbits.RA5
#define S2_WPU                  WPUAbits.WPUA5
#define S2_OD                   ODCONAbits.ODCA5
#define S2_ANS                  ANSELAbits.ANSA5
#define S2_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define S2_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define S2_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define S2_GetValue()           PORTAbits.RA5
#define S2_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define S2_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define S2_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define S2_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define S2_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define S2_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define S2_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define S2_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set LED_LD1 aliases
#define LED_LD1_TRIS                 TRISBbits.TRISB0
#define LED_LD1_LAT                  LATBbits.LATB0
#define LED_LD1_PORT                 PORTBbits.RB0
#define LED_LD1_WPU                  WPUBbits.WPUB0
#define LED_LD1_OD                   ODCONBbits.ODCB0
#define LED_LD1_ANS                  ANSELBbits.ANSB0
#define LED_LD1_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define LED_LD1_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define LED_LD1_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define LED_LD1_GetValue()           PORTBbits.RB0
#define LED_LD1_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define LED_LD1_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define LED_LD1_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define LED_LD1_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define LED_LD1_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define LED_LD1_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define LED_LD1_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define LED_LD1_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set LED_LD2 aliases
#define LED_LD2_TRIS                 TRISBbits.TRISB1
#define LED_LD2_LAT                  LATBbits.LATB1
#define LED_LD2_PORT                 PORTBbits.RB1
#define LED_LD2_WPU                  WPUBbits.WPUB1
#define LED_LD2_OD                   ODCONBbits.ODCB1
#define LED_LD2_ANS                  ANSELBbits.ANSB1
#define LED_LD2_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define LED_LD2_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define LED_LD2_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define LED_LD2_GetValue()           PORTBbits.RB1
#define LED_LD2_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define LED_LD2_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define LED_LD2_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define LED_LD2_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define LED_LD2_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define LED_LD2_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define LED_LD2_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define LED_LD2_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set LED_LD3 aliases
#define LED_LD3_TRIS                 TRISBbits.TRISB2
#define LED_LD3_LAT                  LATBbits.LATB2
#define LED_LD3_PORT                 PORTBbits.RB2
#define LED_LD3_WPU                  WPUBbits.WPUB2
#define LED_LD3_OD                   ODCONBbits.ODCB2
#define LED_LD3_ANS                  ANSELBbits.ANSB2
#define LED_LD3_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define LED_LD3_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define LED_LD3_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define LED_LD3_GetValue()           PORTBbits.RB2
#define LED_LD3_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define LED_LD3_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define LED_LD3_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define LED_LD3_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define LED_LD3_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define LED_LD3_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define LED_LD3_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define LED_LD3_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set LED_LD4 aliases
#define LED_LD4_TRIS                 TRISBbits.TRISB3
#define LED_LD4_LAT                  LATBbits.LATB3
#define LED_LD4_PORT                 PORTBbits.RB3
#define LED_LD4_WPU                  WPUBbits.WPUB3
#define LED_LD4_OD                   ODCONBbits.ODCB3
#define LED_LD4_ANS                  ANSELBbits.ANSB3
#define LED_LD4_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define LED_LD4_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define LED_LD4_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define LED_LD4_GetValue()           PORTBbits.RB3
#define LED_LD4_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define LED_LD4_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define LED_LD4_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define LED_LD4_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define LED_LD4_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define LED_LD4_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define LED_LD4_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define LED_LD4_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set LED_LD5 aliases
#define LED_LD5_TRIS                 TRISBbits.TRISB4
#define LED_LD5_LAT                  LATBbits.LATB4
#define LED_LD5_PORT                 PORTBbits.RB4
#define LED_LD5_WPU                  WPUBbits.WPUB4
#define LED_LD5_OD                   ODCONBbits.ODCB4
#define LED_LD5_ANS                  ANSELBbits.ANSB4
#define LED_LD5_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LED_LD5_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LED_LD5_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LED_LD5_GetValue()           PORTBbits.RB4
#define LED_LD5_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LED_LD5_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LED_LD5_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define LED_LD5_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define LED_LD5_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define LED_LD5_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define LED_LD5_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define LED_LD5_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set LED_LD6 aliases
#define LED_LD6_TRIS                 TRISBbits.TRISB5
#define LED_LD6_LAT                  LATBbits.LATB5
#define LED_LD6_PORT                 PORTBbits.RB5
#define LED_LD6_WPU                  WPUBbits.WPUB5
#define LED_LD6_OD                   ODCONBbits.ODCB5
#define LED_LD6_ANS                  ANSELBbits.ANSB5
#define LED_LD6_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define LED_LD6_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define LED_LD6_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define LED_LD6_GetValue()           PORTBbits.RB5
#define LED_LD6_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define LED_LD6_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define LED_LD6_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define LED_LD6_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define LED_LD6_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define LED_LD6_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define LED_LD6_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define LED_LD6_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set LED_LD8 aliases
#define LED_LD8_TRIS                 TRISCbits.TRISC2
#define LED_LD8_LAT                  LATCbits.LATC2
#define LED_LD8_PORT                 PORTCbits.RC2
#define LED_LD8_WPU                  WPUCbits.WPUC2
#define LED_LD8_OD                   ODCONCbits.ODCC2
#define LED_LD8_ANS                  ANSELCbits.ANSC2
#define LED_LD8_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LED_LD8_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LED_LD8_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LED_LD8_GetValue()           PORTCbits.RC2
#define LED_LD8_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LED_LD8_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LED_LD8_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LED_LD8_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LED_LD8_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define LED_LD8_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define LED_LD8_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define LED_LD8_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set LED_LD12 aliases
#define LED_LD12_TRIS                 TRISCbits.TRISC3
#define LED_LD12_LAT                  LATCbits.LATC3
#define LED_LD12_PORT                 PORTCbits.RC3
#define LED_LD12_WPU                  WPUCbits.WPUC3
#define LED_LD12_OD                   ODCONCbits.ODCC3
#define LED_LD12_ANS                  ANSELCbits.ANSC3
#define LED_LD12_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LED_LD12_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LED_LD12_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LED_LD12_GetValue()           PORTCbits.RC3
#define LED_LD12_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LED_LD12_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LED_LD12_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define LED_LD12_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define LED_LD12_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define LED_LD12_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define LED_LD12_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define LED_LD12_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set LED_LD11 aliases
#define LED_LD11_TRIS                 TRISCbits.TRISC4
#define LED_LD11_LAT                  LATCbits.LATC4
#define LED_LD11_PORT                 PORTCbits.RC4
#define LED_LD11_WPU                  WPUCbits.WPUC4
#define LED_LD11_OD                   ODCONCbits.ODCC4
#define LED_LD11_ANS                  ANSELCbits.ANSC4
#define LED_LD11_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LED_LD11_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LED_LD11_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LED_LD11_GetValue()           PORTCbits.RC4
#define LED_LD11_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LED_LD11_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define LED_LD11_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define LED_LD11_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define LED_LD11_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define LED_LD11_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define LED_LD11_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define LED_LD11_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set LED_LD10 aliases
#define LED_LD10_TRIS                 TRISCbits.TRISC5
#define LED_LD10_LAT                  LATCbits.LATC5
#define LED_LD10_PORT                 PORTCbits.RC5
#define LED_LD10_WPU                  WPUCbits.WPUC5
#define LED_LD10_OD                   ODCONCbits.ODCC5
#define LED_LD10_ANS                  ANSELCbits.ANSC5
#define LED_LD10_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED_LD10_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED_LD10_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED_LD10_GetValue()           PORTCbits.RC5
#define LED_LD10_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED_LD10_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED_LD10_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define LED_LD10_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define LED_LD10_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define LED_LD10_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define LED_LD10_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define LED_LD10_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set LED_LD9 aliases
#define LED_LD9_TRIS                 TRISCbits.TRISC6
#define LED_LD9_LAT                  LATCbits.LATC6
#define LED_LD9_PORT                 PORTCbits.RC6
#define LED_LD9_WPU                  WPUCbits.WPUC6
#define LED_LD9_OD                   ODCONCbits.ODCC6
#define LED_LD9_ANS                  ANSELCbits.ANSC6
#define LED_LD9_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LED_LD9_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LED_LD9_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LED_LD9_GetValue()           PORTCbits.RC6
#define LED_LD9_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LED_LD9_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LED_LD9_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define LED_LD9_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define LED_LD9_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define LED_LD9_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define LED_LD9_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define LED_LD9_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set LED_LD7 aliases
#define LED_LD7_TRIS                 TRISCbits.TRISC7
#define LED_LD7_LAT                  LATCbits.LATC7
#define LED_LD7_PORT                 PORTCbits.RC7
#define LED_LD7_WPU                  WPUCbits.WPUC7
#define LED_LD7_OD                   ODCONCbits.ODCC7
#define LED_LD7_ANS                  ANSELCbits.ANSC7
#define LED_LD7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LED_LD7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LED_LD7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LED_LD7_GetValue()           PORTCbits.RC7
#define LED_LD7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LED_LD7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LED_LD7_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define LED_LD7_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define LED_LD7_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define LED_LD7_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define LED_LD7_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define LED_LD7_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/