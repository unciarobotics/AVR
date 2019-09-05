#include<avr/io.h>
#include<util/delay.h>
int b=90000;
int t=90000;
void main()
{DDRB=0b11111111;
 DDRC=0b0000000;
 while(1)
 {int x = PINC&0b0001001;
  if(x==0b0001001) {PORTB=0b00010100;}

  if(x==0b00001000) 
  {PORTB=0b00001010;
   _delay_ms(b);_delay_ms(b);_delay_ms(b);_delay_ms(b);
   PORTB=0b00010000;
   _delay_ms(t); _delay_ms(t);_delay_ms(t);_delay_ms(t);
  }
   
   if(x==0b0000001)
  {
   PORTB=0b00001010;
   _delay_ms(b);_delay_ms(b);_delay_ms(b);_delay_ms(b);
   PORTB=0b00010000;
    _delay_ms(t);_delay_ms(t);_delay_ms(t);_delay_ms(t);
  }
  
  if(x==0b0000000)
  {
   PORTB=0b00001010;
   _delay_ms(b);_delay_ms(b);_delay_ms(b);_delay_ms(b);
   PORTB=0b00010000;
    _delay_ms(t);_delay_ms(t);_delay_ms(t);_delay_ms(t);
  }
   
 }
}
