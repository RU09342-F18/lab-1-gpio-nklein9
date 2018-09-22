/*
 *Nicholas Klein
 *Created 9/12/18   Last Edit: 9/19/18
 *Multiple LED Blink on an MSP432P401R
 */

#include <msp432.h>

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    P1SEL1 &= ~BIT0;            //Sets P1.0 as an I/O pin
    P1SEL0 &= ~BIT0;            //Sets P1.0 as an I/O pin
    P1DIR |= BIT0;              //Sets P1.0 as an output

    P2SEL1 &= ~BIT0;            //Sets P2.0 as an I/O pin
    P2SEL0 &= ~BIT0;            //Sets P2.0 as an I/O pin
    P2DIR |= BIT2;              //Sets P2.2 as an output

    int i = 1;                  //counter int

    while (1)                   //infinite loop
    {
        __delay_cycles(1000000);//delays program by 1 second
        P1OUT ^= BIT0;          //switches the LED on or off, depending on its current state
        if (i > 3)              //Checks to see how many passes the loop has made, making one LED2 switch once every 3 changed of LED1
        {
            P2OUT ^= BIT2;      //switches the LED on or off, depending on its current state
            i = 0;              //resets i
        }
        i++;                    //increments i
    }

	return 0;
}
