/*--------------------------------------------------------------------
Name:   Jeffrey Falkinburg
Date:   24 Mar 19
Course: CSCE 236 Embedded Systems (Spring 2020)
File:   test.ino
HW/Lab: Lab 5/Project 2, Measure IR Pulses

Purp: Uses counters and interrupts to measure IR Pulses for a
    remote.

Doc:  <list the names of the people who you helped>
    <list the names of the people who assisted you>

Academic Integrity Statement: I certify that, while others may have
assisted me in brain storming, debugging and validating this program,
the program itself is my own work. I understand that submitting code
which is the work of other individuals is a violation of the honor
code.  I also understand that if I knowingly give my original work to
another individual is also a violation of the honor code.
--------------------------------------------------------------------*/
#include <avr/io.h>

#define SAMPLE_SIZE    34
#define IR_DECODER_PIN    (PIND & (1 << PIND2)) // (i.e. Digital Pin 2)
#define IR_PIN    (PIND2)
#define   TRUE        1
#define   FALSE       0

#define REMOTE_UP 0x20df02fd
#define REMOTE_DOWN 0x20df827d
#define REMOTE_LEFT 0x20dfe01f
#define REMOTE_RIGHT 0x20df609f
#define REMOTE_OK 0x20df22dd
#define REMOTE_NUM1 0x20df8877
#define REMOTE_NUM2 0x20df48b7
#define REMOTE_NUM3 0x20dfc837
#define REMOTE_CH_UP 0x20df00ff
#define REMOTE_CH_DOWN 0x20df807f

volatile uint8_t  newIrPacket = FALSE;
uint16_t time1[SAMPLE_SIZE], time0[SAMPLE_SIZE];
uint8_t  i;
uint32_t x;

void printRemoteButton(uint32_t val);
/*
 * main loop
 */
void loop() {

    Serial.println("Waiting for IR input");

    while(IR_DECODER_PIN != 0); // IR input is nominally logic 1
    TCNT1 = 0;                  // reset timer
    newIrPacket = FALSE;
	//write line of code		// Clear Timer/Counter1, Output Compare A Match Flag by writing 1

	//write line of code		// Enable interrupt on match with OCR1A
  TIFR1 |= (1<<1);
  TIMSK1 |= (1<<1);


    for(i=0; i<SAMPLE_SIZE; i++) {

      TCNT1 = 0;                  // reset timer and
      while(IR_DECODER_PIN!=0 && newIrPacket == FALSE);   // wait while IR is logic 0
      time0[i] = TCNT1;           // and store timer 1 count

      TCNT1 = 0;                  // reset timer and
      while(IR_DECODER_PIN == 0 && newIrPacket == FALSE); // wait while IR is logic 1
      time1[i] = TCNT1;           // and store timer 1 count

    } // end for

    // Serial.println("Time Logic 1");
    // for(i=0; i<SAMPLE_SIZE; i++) {
    //     Serial.print("time1["); Serial.print(i,DEC); Serial.print("] = ");Serial.println(time1[i],DEC);
    //
    // }
    // Serial.println("Time Logic 0");
    for(i=0; i<SAMPLE_SIZE; i++) {
        //Serial.print("time0["); Serial.print(i,DEC); Serial.print("] = ");Serial.println(time0[i],DEC);
        if(i > 1 && time0[i] > 300){
          x = (x<<1) + 1;
        }
        else if(i > 1){
          x = (x<<1);
        }

    }
    Serial.print("This is the value  in hex 0x");
    Serial.println(x,HEX);
    printRemoteButton(x);

} // end main loop


void printRemoteButton(uint32_t val){
  switch(val){
    case REMOTE_UP:
      Serial.println("UP");
      break;
    case REMOTE_DOWN:
      Serial.println("DOWN");
      break;
    case REMOTE_LEFT:
      Serial.println("LEFT");
      break;
    case REMOTE_RIGHT:
      Serial.println("RIGHT");
      break;
    case REMOTE_OK:
      Serial.println("OK");
      break;
    case REMOTE_NUM1:
      Serial.println("NUM1");
      break;
    case REMOTE_NUM2:
      Serial.println("NUM2");
      break;
    case REMOTE_NUM3:
      Serial.println("NUM3");
      break;
    case REMOTE_CH_UP:
      Serial.println("CH_UP");
      break;
    case REMOTE_CH_DOWN:
      Serial.println("CH_DOWN");
      break;
    default :
      Serial.println("Unknown code.");
  }
}

// -----------------------------------------------------------------------
// -----------------------------------------------------------------------
void setup() {
  /* Turn off WDT */
  WDTCSR = 0x00;

  Serial.begin(9600);
  Serial.println("Starting up.");

  //Init Timer 1
  //write line of code      /* Reset TCCR1A & TCCR1B to defaults */
  TCCR1A = 0;
  TCCR1B = 0;

  //write line of code	   	/* Set Timer 1 to CTC with OCR1A as top */
  TCCR1B |= (1<<3);

  //write line of code	    /* Set clock prescaler to clk/64 */
  TCCR1B |= (1<<1) | (1<<0);
  /* Configure OCR1A (the counter top) to generate an interrupt every 65ms. */
  OCR1A = 0x3f7a;
  //write line of code     	/* Clear timer 1 counter register high byte first*/
  TCNT1H = 0;
  TCNT1L = 0;
  //write line of code

  /* Configure IR input on Port D, Pin 2 using registers and (1 << IR_PIN) value */
							/* Input IR on Port D, Pin 2 */
							/* Enable Pullup on Port D, Pin 2 */
  DDRD |= (0<<IR_PIN);
  PORTD |= (1<<IR_PIN);
} // end setup

/**
 * This function is called whenever the timer 1 output compare match OCR1A
 * is generated.
 **/
ISR(TIMER1_COMPA_vect){
	//write line of code	// Disable interrupt on match with OCR1A
  TIMSK1 &= ~(1<<1);
  newIrPacket = TRUE;
}
