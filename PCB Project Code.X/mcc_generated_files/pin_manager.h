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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.78.1
        Device            :  PIC16F1518
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.30	
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

// get/set channel_AN0 aliases
#define channel_AN0_TRIS                 TRISAbits.TRISA0
#define channel_AN0_LAT                  LATAbits.LATA0
#define channel_AN0_PORT                 PORTAbits.RA0
#define channel_AN0_ANS                  ANSELAbits.ANSA0
#define channel_AN0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define channel_AN0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define channel_AN0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define channel_AN0_GetValue()           PORTAbits.RA0
#define channel_AN0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define channel_AN0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define channel_AN0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define channel_AN0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set D4 aliases
#define D4_TRIS                 TRISAbits.TRISA4
#define D4_LAT                  LATAbits.LATA4
#define D4_PORT                 PORTAbits.RA4
#define D4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define D4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define D4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define D4_GetValue()           PORTAbits.RA4
#define D4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)

// get/set pinG aliases
#define pinG_TRIS                 TRISAbits.TRISA5
#define pinG_LAT                  LATAbits.LATA5
#define pinG_PORT                 PORTAbits.RA5
#define pinG_ANS                  ANSELAbits.ANSA5
#define pinG_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define pinG_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define pinG_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define pinG_GetValue()           PORTAbits.RA5
#define pinG_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define pinG_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define pinG_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define pinG_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set pinC aliases
#define pinC_TRIS                 TRISAbits.TRISA6
#define pinC_LAT                  LATAbits.LATA6
#define pinC_PORT                 PORTAbits.RA6
#define pinC_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define pinC_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define pinC_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define pinC_GetValue()           PORTAbits.RA6
#define pinC_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define pinC_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set virgule aliases
#define virgule_TRIS                 TRISAbits.TRISA7
#define virgule_LAT                  LATAbits.LATA7
#define virgule_PORT                 PORTAbits.RA7
#define virgule_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define virgule_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define virgule_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define virgule_GetValue()           PORTAbits.RA7
#define virgule_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define virgule_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set pinD aliases
#define pinD_TRIS                 TRISCbits.TRISC0
#define pinD_LAT                  LATCbits.LATC0
#define pinD_PORT                 PORTCbits.RC0
#define pinD_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define pinD_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define pinD_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define pinD_GetValue()           PORTCbits.RC0
#define pinD_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define pinD_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

// get/set pinE aliases
#define pinE_TRIS                 TRISCbits.TRISC1
#define pinE_LAT                  LATCbits.LATC1
#define pinE_PORT                 PORTCbits.RC1
#define pinE_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define pinE_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define pinE_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define pinE_GetValue()           PORTCbits.RC1
#define pinE_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define pinE_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set D1 aliases
#define D1_TRIS                 TRISCbits.TRISC2
#define D1_LAT                  LATCbits.LATC2
#define D1_PORT                 PORTCbits.RC2
#define D1_ANS                  ANSELCbits.ANSC2
#define D1_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define D1_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define D1_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define D1_GetValue()           PORTCbits.RC2
#define D1_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define D1_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define D1_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define D1_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set pinA aliases
#define pinA_TRIS                 TRISCbits.TRISC3
#define pinA_LAT                  LATCbits.LATC3
#define pinA_PORT                 PORTCbits.RC3
#define pinA_ANS                  ANSELCbits.ANSC3
#define pinA_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define pinA_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define pinA_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define pinA_GetValue()           PORTCbits.RC3
#define pinA_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define pinA_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define pinA_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define pinA_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set pinF aliases
#define pinF_TRIS                 TRISCbits.TRISC4
#define pinF_LAT                  LATCbits.LATC4
#define pinF_PORT                 PORTCbits.RC4
#define pinF_ANS                  ANSELCbits.ANSC4
#define pinF_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define pinF_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define pinF_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define pinF_GetValue()           PORTCbits.RC4
#define pinF_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define pinF_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define pinF_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define pinF_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set D2 aliases
#define D2_TRIS                 TRISCbits.TRISC5
#define D2_LAT                  LATCbits.LATC5
#define D2_PORT                 PORTCbits.RC5
#define D2_ANS                  ANSELCbits.ANSC5
#define D2_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define D2_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define D2_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define D2_GetValue()           PORTCbits.RC5
#define D2_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define D2_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define D2_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define D2_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set D3 aliases
#define D3_TRIS                 TRISCbits.TRISC6
#define D3_LAT                  LATCbits.LATC6
#define D3_PORT                 PORTCbits.RC6
#define D3_ANS                  ANSELCbits.ANSC6
#define D3_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define D3_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define D3_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define D3_GetValue()           PORTCbits.RC6
#define D3_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define D3_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define D3_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define D3_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set pinB aliases
#define pinB_TRIS                 TRISCbits.TRISC7
#define pinB_LAT                  LATCbits.LATC7
#define pinB_PORT                 PORTCbits.RC7
#define pinB_ANS                  ANSELCbits.ANSC7
#define pinB_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define pinB_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define pinB_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define pinB_GetValue()           PORTCbits.RC7
#define pinB_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define pinB_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define pinB_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define pinB_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

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