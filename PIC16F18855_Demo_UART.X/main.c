/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC16F18855
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    // Séquence de clignotement des LED D2à D5
    // LED flashing sequence
    LED_D2_SetHigh();
    __delay_ms(250);
    LED_D2_SetLow();
    LED_D3_SetHigh();
    __delay_ms(250);
    LED_D3_SetLow();
    LED_D4_SetHigh();
    __delay_ms(250);
    LED_D4_SetLow();
    LED_D5_SetHigh();
    __delay_ms(250);
    LED_D5_SetLow();
 
    // Compile file path (internal file of compilation proccess)
    printf("__FILE__: " __FILE__ "\r\n");

    // Date of compliation
    printf("__DATE__: " __DATE__ "\r\n");

    // Time of compilation
    printf("__TIME__: " __TIME__ "\r\n");

    // Version of comilator (avr-gcc) 
    printf("__VERSION__: " __VERSION__ "\r\n\n");

    __delay_ms(1000);

    while (true)
    {
        volatile uint8_t rxData;

        // Logic to echo received data
        if (EUSART_is_rx_ready())
        {
            rxData = EUSART_Read();
            if (EUSART_is_tx_ready())
            {
                EUSART_Write(rxData);
            }
        }

        if (!S2_GetValue())
        {
            __delay_ms(50); // delay for SW debounce
            if (!S2_GetValue())
            {
                LED_D2_Toggle();
                printf("BUTTON PRESSED\r\n"); // send message to serial port
                // Attendre le relâchement du bouton poussoir
                while (!S2_GetValue()); // wait for the push button to release
            }
        }
    }
}

/**
 End of File
 */
