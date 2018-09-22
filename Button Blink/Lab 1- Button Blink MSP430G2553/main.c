 /*Nicholas Klein
 *Created 9/19/18   Last Edit: 9/21/18
 *Button LED Blink on an MSP430G2553
 */

#include <msp430.h>

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    P1SEL &= ~BIT0;             //Sets P1.0 as an I/O pin
    P1SEL2 &= ~BIT0;            //Sets P1.0 as an I/O pin
    P1DIR |= BIT0;              //Sets P1.0 as an output

    // Button setup
    P1DIR &= ~BIT3;             // button is an input
    P1OUT |= BIT3;              // pull-up resistor
    P1REN |= BIT3;              // resistor enabled
    int BUTTON = 0;             // button pressed holder, would rather this be a bool
    while (1)                   //infinite loop
    {
        if ((P1IN & BIT3) & ~BUTTON)    //checks if the button is pushed and has not been pushed since the last completed cycle of the loop
        {
           BUTTON = 1;          //sets the button press holder to true
        }
        if (BUTTON)             //checks if the button has been pressed for this cycle of the loop
        {
            P1OUT ^= BIT0;      //switches the LED on or off, depending on its current state
            while (P1IN & BIT3) //while the button is still pushed after the initial push, the loop will not continue, removing blink errors.
            {

            }
            BUTTON = 0;         //resets the button pushed holder to zero.
        }
    }
return 0;
}
