
/* ===================================================================================
Project: KiwiVending - Kiwi Campus Inc.

Code Information:
	Developer: Juan Jurado - JJ.
	Phone:  / +1 (513) 909 4704 / +57 (313) 247 4186.
	Mail: juanjuradop@gmail.com / jj@kiwicampus.com.

Description: 
    Kiwivending - project
    MVP to test the vending machine system on site.
    Objective: Write a software pipeline to activate vending machine motors.

Tested on: 
    Electron board by Particle Systems. v0.7.0
======================================================================================
*/

/* ===================================================================================
Every program based on Wiring (programming language used by Arduino, and 
Particle devices) has two essential parts:
    setup - runs once at the beginning of your program
    loop - runs continuously over and over
======================================================================================
*/

// Declare products names to identify the products in the machine (location)
int Product1 = D0;
int Product2 = D1;
int Product3 = D2;
int Product4 = D3;
int Product5 = D4;
int Product6 = D5;
int Product7 = D6;
int Product8 = D7;