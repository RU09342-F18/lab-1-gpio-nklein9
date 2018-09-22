 /*Nicholas Klein
 *Created 9/19/18   Last Edit: 9/21/18
 *Button LED Blink on an MSP430FR2311
 */

#include <msp430.h>

int main(void)
{
    // Disable the GPIO power-on default high-impedance mode to activate
    // previously configured port settings
    PM5CTL0 &= ~LOCKLPM5;

    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    P1SEL0 &= ~BIT0;            //Sets P1.0 as an I/O pin
    P1SEL1 &= ~BIT0;            //Sets P1.0 as an I/O pin
    P1DIR |= BIT0;              //Sets P1.0 as an output
    P1OUT |= BIT0;              //Starts the LED as off

    // Button setup
    P1DIR &= ~BIT1;             // button is an input
    P1SEL0 &= ~BIT1;            //Sets Button as an I/O pin
    P1OUT |= BIT1;              // pull-up resistor
    P1REN |= BIT1;              // resistor enabled
    int BUTTON = 0;             // button pressed holder
    while (1)                   //infinite loop
    {
        if ((P1IN & BIT1) & ~BUTTON)    //checks if the button is pushed and has not been pushed since the last completed cycle of the loop
        {
           BUTTON = 1;          //sets the button press holder to true
        }
        if (BUTTON)             //checks if the button has been pressed for this cycle of the loop
        {
            P1OUT ^= BIT0;      //switches the LED on or off, depending on its current state
            while (P1IN & BIT1) //while the button is still pushed after the initial push, the loop will not continue, removing blink errors.
            {

            }
            BUTTON = 0;         //resets the button pushed holder to zero.
        }
    }

return 0;
}

