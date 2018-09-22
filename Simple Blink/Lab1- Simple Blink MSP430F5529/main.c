 /*Nicholas Klein
 *Created 9/12/18   Last Edit: 9/12/18
 *Simple LED Blink on an MSP430F5529
 */

#include <msp430.h> 

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    P1SEL = ~BIT0;              //Sets P1.0 as an I/O pin
    P1DIR |= BIT0;              //Sets P1.0 as an output

    while (1)                   //infinite loop
    {
        __delay_cycles(100000); //makes the program wait 0.1 seconds
        P1OUT ^= BIT0;          //switches the LED on or off, depending on its current state
    }

	return 0;
}
