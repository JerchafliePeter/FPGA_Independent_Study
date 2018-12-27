/*
This program will display 0-9 and A-F on the seven segment dislay of the FPGA
The Delay function is simply a for loop to give each number time to be
visable. Nothing occurs during the execution of the for loop.

PORTB will contain a Hex value of the segments that will be activated.
DDRB = 0xFF turns the segments on

*/

#include <hidef.h>      /* common defines and macros */
#include "derivative.h"      /* derivative-specific definitions */

 volatile long i; //used for loop as part of delay

 void delay() {
 for(i=0;i<200000;i++);
 }

void main(void) {
  /* put your own code here */
  
  //Display 0 
  PORTB = 0x3F; 
  DDRB = 0xFF;	
  delay();


  //Display 1 
  PORTB = 0x06; 
  DDRB = 0xFF;	
  delay();
  
  //Display 2 
  PORTB = 0x5B; 
  DDRB = 0xFF;	
  delay();
  
  //Display 3 
  PORTB = 0x4F; 
  DDRB = 0xFF;	
  delay();
  
  //Display 4 
  PORTB = 0x66; 
  DDRB = 0xFF;	
  delay();
  
  //Display 5
  PORTB = 0x6D; 
  DDRB = 0xFF;	
  delay();
  
  //Display 6
  PORTB = 0x7D;
  DDRB = 0xFF;	
  delay();

  //Display 7 
  PORTB = 0x07; 
  DDRB = 0xFF;	
  delay();
  
  //Display 8
  PORTB = 0x7F; 
  DDRB = 0xFF;	
  delay();
  
  //Display 9 
  PORTB = 0x6F; 
  DDRB = 0xFF;	
  delay();

  //Display A 
  PORTB = 0x77; 
  DDRB = 0xFF;	
  delay();
  
  //Display B
  PORTB = 0x7C; 
  DDRB = 0xFF;	
  delay();
  
  //Display C 
  PORTB = 0x39; 
  DDRB = 0xFF;	
  delay();
  
  //Display D 
  PORTB = 0x5E; 
  DDRB = 0xFF;	
  delay();
  
  //Display E 
  PORTB = 0x79; 
  DDRB = 0xFF;	
  delay();
  
  //Display F 
  PORTB = 0x71; 
  DDRB = 0xFF;	
  delay();
 EnableInterrupts;
  for(;;) {
    _FEED_COP(); /* feeds the dog */
  } /* loop forever */
  /* please make sure that you never leave main */
}
