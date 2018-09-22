# Button Blink
This program allows an onboard led to turn on or off with a button push.

# YOU NEED TO CREATE THE FOLLOWING FOLDERS
* MSP430G2553
* MSP430FR2311

## Functionality
The program sets up the onboard LED as an I/O pin then sets it as an output. An infinite loop runs that waits for a button press. When the button is pressed, the program sets the LED to the on state if it's currently off or the off state if it's currently on. The program then waits for the button to be released before it takes a new button press so the clock can't force it to register multiple presses, causing errors in the functionality.

## Board Differences
The MSP430G2553 has two I/O selection pins, P1SEL and P1SEL2. The MSP430FR2311's I/O selection pins were P1SEL0 and P1SEL1 and required disabling the GPIO power-on default high-impedance mode to activate previously configured port settings, this was advice given in the warning section while building the first time. If this is not done, all pins may stay locked into a high impedence mode that will prevent the code from running properly.
