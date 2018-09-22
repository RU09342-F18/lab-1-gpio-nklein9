/*
 *Nicholas Klein
 *Created 9/12/18   Last Edit: 9/19/18
 *Multiple LED Blink on an MSP430G2553
 */

#include <msp430.h> 

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    P1SEL &= ~BIT0;             //Sets P1.0 as an I/O pin
    P1DIR |= BIT0;              //Sets P1.0 as an output

    P1SEL &= ~BIT6;             //Sets P1.6 as an I/O pin
    P1DIR |= BIT6;              //Sets P1.6 as an output

    int i = 0;                  //counter int

    while (1)                   //infinite loop
    {
        __delay_cycles(100000); //delays program .1 seconds
        P1OUT ^= BIT0;          //switches the LED on or off, depending on its current state
        if (i >= 3)             //Checks to see how many passes the loop has made, making one LED2 switch once every 3 changed of LED1
        {
            P1OUT ^= BIT6;      //switches the LED on or off, depending on its current state
            i = 0;              //resets i
        }
        i++;                    //increments i
    }

    return 0;
}
