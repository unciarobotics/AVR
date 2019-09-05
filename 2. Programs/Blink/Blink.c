#include<avr/io.h>
#include<util/delay.h>
void main()
{  DDRB=0b00011110;
   while(1)
   { PORTB=0b00011110;
     _delay_ms(1000);
     PORTB=0b00000000;
     _delay_ms(1000);   }
}
