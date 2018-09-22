# Simple Blink
The Simple blink program allows an on-board LED to blink on and off.

## Supported Boards
* MSP430G2553
* MSP430F5529

## Functionality
The program sets up the LED as an I/O pin then sets it as an output. An infinite loop runs that sets the LED to the on state if it's currently off or the off state if it's currently on.

## Board Differences
The MSP430G2553 has two I/O selection pins (P1SEL.0) and (P1SEL2.0) where MSP430F5529 only has a single I/O selection pin (P1SEL.0). This adds only a single line of code.
