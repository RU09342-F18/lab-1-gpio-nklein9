# Off Board Blink

## Supported Boards
* MSP430G2553

## Functionality
The MSP430G2553 chip was flashed with the programming from the multiple blink module. It's then placed into a breadboard and wired so that a button will reset it. The board itself was used to power the breadboard using the 3.3V and ground pins. Each red LED has to be grounded by a resistor, in this case a 4.7kΩ and 3.2kΩ resistor. The reset pin of the chip was connected to a button and a 1kΩ resistor. The button went straight to ground where as the resistor led to a 1.1µF capacitor in parallel with a 4.7kΩ resistor, both of which terminated at ground.

![Alt text](https://github.com/RU09342-F18/lab-1-gpio-nklein9/blob/master/Off_Board%20Blink/Circuit%20Board.JPG?raw=true "Reset Circuit")
