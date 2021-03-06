/*
  Author Student code : Michael Martin
  Date : 2/19/2020
*/


/****************************************************************************
*
*   Copyright (c) 2011 Carrick Detweiler
*
*   This program is free software; you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation; either version 2 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program; if not, write to the Free Software
*   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*
****************************************************************************/

#include <avr/io.h>
#include <Arduino.h>


/**
 * Define a dot as a zero and dash as a 1
 **/
#define DOT 0
#define DASH 1
#define RED 2
#define BLUE 3
#define GREEN 4
#define BUTTON 5

/**
 * These macros convert dots and dashes into a binary representation.
 * The upper three bits indicate the number of dots and dashes.  The
 * other bits contain the dots (0) and dashes (1).  The LSB is the
 * first dot/dash to send and so forth.
 **/
#define MORSE_IN1(a)           ((1<<5) | (a<<0))
#define MORSE_IN2(a,b)         ((2<<5) | (a<<0) | (b<<1))
#define MORSE_IN3(a,b,c)       ((3<<5) | (a<<0) | (b<<1) | (c<<2))
#define MORSE_IN4(a,b,c,d)     ((4<<5) | (a<<0) | (b<<1) | (c<<2) | (d<<3))
#define MORSE_IN5(a,b,c,d,e)   ((5<<5) | (a<<0) | (b<<1) | (c<<2) | (d<<3) | (e<<4))

/**
 * This is a table of all of the morse code strings for a-z.  If you
 * are passed a letter c you can access it in here by using
 * morseTable[c-'a'].  The upper three bits indicate the number of dots
 * and dashes in the code for that character.  The LSB is the first
 * dot/dash, next bit is the second, etc.
 **/
uint8_t morseTable[26] =
  {MORSE_IN2(DOT,DASH), //A
   MORSE_IN4(DASH,DOT,DOT,DOT), //B
   MORSE_IN4(DASH,DOT,DASH,DOT), //C
   MORSE_IN3(DASH,DOT,DOT), //D
   MORSE_IN1(DOT), //E
   MORSE_IN4(DOT,DOT,DASH,DOT), //F
   MORSE_IN3(DASH,DASH,DOT), //G
   MORSE_IN4(DOT,DOT,DOT,DOT), //H
   MORSE_IN2(DOT,DOT), //I
   MORSE_IN4(DOT,DASH,DASH,DASH), //J
   MORSE_IN3(DASH,DOT,DASH), //K
   MORSE_IN4(DOT,DASH,DOT,DOT), //L
   MORSE_IN2(DASH,DASH), //M
   MORSE_IN2(DASH,DOT), //N
   MORSE_IN3(DASH,DASH,DASH), //O
   MORSE_IN4(DOT,DASH,DASH,DOT), //P
   MORSE_IN4(DASH,DASH,DOT,DASH), //Q
   MORSE_IN3(DOT,DASH,DOT), //R
   MORSE_IN3(DOT,DOT,DOT), //S
   MORSE_IN1(DASH), //T
   MORSE_IN3(DOT,DOT,DASH), //U
   MORSE_IN4(DOT,DOT,DOT,DASH), //V
   MORSE_IN3(DOT,DASH,DASH), //W
   MORSE_IN4(DASH,DOT,DOT,DASH), //X
   MORSE_IN4(DASH,DOT,DASH,DASH), //Y
   MORSE_IN4(DASH,DASH,DOT,DOT)}; //Z


/**
 * Sends a long blink on the specified led.
 **/
void morseBlinkLong(uint8_t led){

  switch(led){
    case RED : //red on port 1
      //DDRB |= 1;
      PORTD |= (1<<RED);
      delay(600);
      PORTD &= ~(1<<RED);
      break;
    case BLUE : //green on port 2
      //DDRB |= (1<<1);
      PORTD |= (1<<BLUE);
      delay(600);
      PORTD &= ~(1<<BLUE);
      break;
    case GREEN : //blue on port 3
      //DDRB |= (1<<2);
      PORTD |= (1<<GREEN);
      delay(600);
      PORTD &= ~(1<<GREEN);
      break;
    default :;
  }




}

/**
 * Sends a short blink (a dot) on the specified led.
 **/
void morseBlinkShort(uint8_t led){
  //STUDENT CODE
  switch(led){
    case RED : //red on port 1
      //DDRB |= 1;
      PORTD |= (1<<RED);
      delay(150);
      PORTD &= ~(1<<RED);
      break;
    case BLUE : //green on port 2
      //DDRB |= (1<<1);
      PORTD |= (1<<BLUE);
      delay(150);
      PORTD &= ~(1<<BLUE);
      break;
    case GREEN : //blue on port 3
      //DDRB |= (1<<2);
      PORTD |= (1<<GREEN);
      delay(150);
      PORTD &= ~(1<<GREEN);
      break;
    default :;
  }

}

/**
 * Perform a long pause (without turning on the LEDs), which should be
 * about the length of a dash.
 **/
void morseLongPause(void){
  //STUDENT CODE
  delay(600);

}

/**
 * Perform a short pause (without turning on the LEDs), which should
 * be about the length of a dot.
 **/
void morseShortPause(void){
  //STUDENT CODE
  delay(150);
  /*
  TCNT1 = 0;
  while(TCNT1 < 9600){}
  */

}

/**
 * Sends the right blink sequence for character c on the specified
 * led.  Note that the valid range for c is 'a'-'z' or 'A'-'Z'.
 **/
void morseBlinkChar(uint8_t led, char c){
  uint8_t i;

  //First make sure it is a valid character
  if(!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))){
    //Not valid
    return;
  }

  //If it is upper case, convert to lower case
  if(c >= 'A' && c <= 'Z'){
    c = c - 'A';
    c = c + 'a';
  }

  //Get the number of symbols in the morse code for c
  uint8_t numSymbols = morseTable[c-'a'] >> 5;
  //Now send each character
  for(i = 0; i < numSymbols; i++){
    //Send the right length pulse depending on if the i'th bit is a 1 or 0
    if(((morseTable[c-'a']>>i) & 0x1) == DOT){ morseBlinkShort(led); }
    else{ morseBlinkLong(led); } //DASH
    //Do a short pause, needed between symbols, ok for between
    //characters (but not long enough for between characters)
    morseShortPause();
  }
}


/**
 * Sends the specified string (with len characters) as morse code
 * blinks over the specified LED.  Note that the valid range for c is
 * 'a'-'z' or 'A'-'Z'.
 **/
void morseBlinkString(uint8_t led, char *c, uint8_t len){

  //STUDENT CODE
  //Send a string of characters to be blinked.  Note that between
  //characters there should be a morseLongPause().  You can call
  //morseBlinkChar() to send each character.
  int i;
  for(i=0;i < len; i++){
    morseBlinkChar(led,c[i]);
    morseLongPause();
  }

  return;

}
/*
bool setPrescale = false;
void buttonReadMorse(){
  if(!setPrescale){
    DDRD &= (1<<BUTTON);
    //Init counter1
    TCCR1A = 0; //Normal mode 0xffff top, rolls over
    TCCR1B &= ~(7);
    TCCR1B |= (0 << CS12) | (1 << CS10); //Clock prescaler 1024

    TCCR1C = 0;
    //Set counter to zero, high byte first
    TCNT1H = 0;
    TCNT1L = 0;
    //Make sure interrupts are disabled
    TIMSK1 = 0;
    TIFR1 = 0;
    setPrescale = true;
  }

  timeButtonHold();

}

void timeButtonHold(){
  if(PIND & (1<<5)){
    TCNT1 = 0;
    delay(50);
    while(digitalRead(8) == 0){}
    //Serial.println("Button Held");
    //Serial.println(TCNT1/10000.0);
  }
}
*/
