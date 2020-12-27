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

// get/set LED_D2 aliases
#define LED_D2_TRIS                 TRISAbits.TRISA0
#define LED_D2_LAT                  LATAbits.LATA0
#define LED_D2_PORT                 PORTAbits.RA0
#define LED_D2_WPU                  WPUAbits.WPUA0
#define LED_D2_OD                   ODCONAbits.ODCA0
#define LED_D2_ANS                  ANSELAbits.ANSA0
#define LED_D2_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED_D2_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED_D2_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED_D2_GetValue()           PORTAbits.RA0
#define LED_D2_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED_D2_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED_D2_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LED_D2_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LED_D2_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LED_D2_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LED_D2_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LED_D2_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LED_D3 aliases
#define LED_D3_TRIS                 TRISAbits.TRISA1
#define LED_D3_LAT                  LATAbits.LATA1
#define LED_D3_PORT                 PORTAbits.RA1
#define LED_D3_WPU                  WPUAbits.WPUA1
#define LED_D3_OD                   ODCONAbits.ODCA1
#define LED_D3_ANS                  ANSELAbits.ANSA1
#define LED_D3_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED_D3_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED_D3_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED_D3_GetValue()           PORTAbits.RA1
#define LED_D3_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED_D3_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED_D3_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED_D3_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED_D3_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED_D3_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED_D3_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED_D3_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED_D4 aliases
#define LED_D4_TRIS                 TRISAbits.TRISA2
#define LED_D4_LAT                  LATAbits.LATA2
#define LED_D4_PORT                 PORTAbits.RA2
#define LED_D4_WPU                  WPUAbits.WPUA2
#define LED_D4_OD                   ODCONAbits.ODCA2
#define LED_D4_ANS                  ANSELAbits.ANSA2
#define LED_D4_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_D4_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_D4_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_D4_GetValue()           PORTAbits.RA2
#define LED_D4_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_D4_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_D4_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_D4_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_D4_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED_D4_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED_D4_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_D4_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED_D5 aliases
#define LED_D5_TRIS                 TRISAbits.TRISA3
#define LED_D5_LAT                  LATAbits.LATA3
#define LED_D5_PORT                 PORTAbits.RA3
#define LED_D5_WPU                  WPUAbits.WPUA3
#define LED_D5_OD                   ODCONAbits.ODCA3
#define LED_D5_ANS                  ANSELAbits.ANSA3
#define LED_D5_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LED_D5_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LED_D5_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LED_D5_GetValue()           PORTAbits.RA3
#define LED_D5_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LED_D5_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LED_D5_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define LED_D5_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define LED_D5_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define LED_D5_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define LED_D5_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define LED_D5_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

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

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()             do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()           do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode()         do { ANSELCbits.ANSC0 = 1; } while(0)
#define RC0_SetDigitalMode()        do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()             do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()           do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode()         do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()        do { ANSELCbits.ANSC1 = 0; } while(0)

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