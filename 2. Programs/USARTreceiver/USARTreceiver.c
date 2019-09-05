#define F_CPU12000000UL;
#include<avr/io.h>
void main()
{DDRB=0b00011110;
 UBRRL=77;
 UBRRH=0;
 UCSRB|=0b00010000;
 UCSRC|=0b10000110;
while(1)
{while(RXC==0);
 char data=UDR;
 if(data=='f'){PORTB=0b00010100;}
 if(data=='b'){PORTB=0b00001010;}
 if(data=='r'){PORTB=0b00000100;}
 if(data=='l'){PORTB=0b00010000;}
 if(data=='s'){PORTB=0b00000000;}
}
}

