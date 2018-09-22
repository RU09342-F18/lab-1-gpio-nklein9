# Lab 1: Blink an LED and you can control the world!     
As grandiose as this statement sounds, it is fairly accurate. By the time you are done this lab, you have probably done about 75% of what makes embedded difficult. Just to blink an LED on an MSP430, you need to understand:
* The WatchDog Timer and its role in the processor
* Initialization of the Clocks
* Initialization of the GPIO
* How to set the state of a GPIO Pin
* How to implement delays
* How to poll the status of a pin
* and more...

All of this just to do something a cheap 10 cent widget from a dollar store can do; and you are going to use about $30.00 in microcontrollers to do it.

## Goals For the Lab
By the end of this lab, you will be able to:
* Initialize the WDT and Clock on the microcontroller
* Initialize and Control the GPIO on all development boards
* Blink the LED's on board the Development platforms
* Blink LED's external to the development boards
* Control the status of an LED from a Button using Polling
* Use the MSP430G2553 in a breadboard and blink LEDS without the development platform.

This seems like a lot to do, but you have a ton of materials available to you to do this and is one of the most fundamental projects in the embedded world.

## Order of Exercises
Since GITHUB likes to alphabetize files, you need to perform the exercises in the following order:
1. Simple Blink
2. Multiple Blink
3. Button Blink
4. Off_Board Blink

## Deliverables
By the end of the lab, you will need to provide well documented main.c files for 2 development boards for *EACH* part of the lab along with the accompanying README files which explain to a use how to implement your code. For each of the exercises, you must be able to implement the task on the MSP430G2553 and another processor of your choice. Since some of you may still be waiting on processors, I would like you to use as many processors as you have for this exercise by the end of the lab. So for the "Simple Blink" exercise you could use the G2553 and the MSP432, and for the Multiple Blink, you could use the G2553 and the F5529. The idea here is to break you into the processors early on so that with later exercises you can easily build code which will work on any of the processors you have in your arsenal.

When you submit your code, I will be looking for four (4) folders with the following titles:
* Simple Blink
* Multiple Blink
* Button Blink
* Off_Board Blink



### README Files
Since most of these projects will have just a simple main.c file, you do not need to generate 20 README files. Instead, unless you go for a more advanced implementation of the exercises, you just need 1 README per exercise folder. "But how do I make a README with all of the processors included?" Well now we are getting somewhere. You should talk about the general form of your code as it should be very similar for each processor, but you should highlight what the differences are between each processor. For example, do the clocks need to be initialized differently? As another step forward, you could take that information and somehow make it where your code would work on any of the processors without the need to change it between projects.


### Header Files
You may find yourself by the end of this lab not having generated any header files, which in this case, ignore this section. If you have generated more than just a main.c you most likely have yourself a .h file or two. Remember from the first lab that any header files or libraries that you generate need to have their own README.md which tell the user what dependencies there are, how to install them into their projects, etc.

## Documentation
Since you will most likely be using pre-made code to make most of your code, so what I am going to require you to do is comment each line of code and what it is doing. If you are using code from TI themselves, it will most likely have some of the comments there. But I want you to use your own words when writing these comments. Dive into the datasheets, look into the MSP430.h file to see what registers are being manipulated and tell me why you need to configure them. Also, take note of the headers on the precompiled examples and make sure to adhere to any requirements they may have about preserving any notices.
