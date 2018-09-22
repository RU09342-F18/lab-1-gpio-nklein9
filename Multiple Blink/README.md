# Multiple Blink
This program allows two onboard LEDs to blink simulaneously with different frequencies.


# Supported Boards
* MSP430G2553
* MSP432P401R

## Functionality

The program sets up the two LEDs as I/O pins then sets them as outputs. An infinite loop runs that sets LED1 to the on state if it's currently off or the off state if it's currently on. Each time LED1 switches state, an incrimenter keeps track until it's switched state three times where it begins an if state that switches the state of LED2. After LED2 has switched, the incrimenter resets and waits for the incrimenter again.

## Board Differences

Both of the MSP432P401R's LEDs have both a zero and one bit for their I/O selection bits (PxSELy), the LEDs are attatched to P1.0 and P2.0 respectively. The MSP 430G2335's LEDs are set to P1.0 and P1.6.
