#include<avr/io.h>
void main()
{ DDRC=0b0000000;
  DDRB=0b11111111;
  while(1)
  { int x = PINC&0b0000001;
    if(x==0b0000000)
	{PORTB=0b00011110;}
    if(x==0b0000001)
	{PORTB=0b00000000;}
  }
}
