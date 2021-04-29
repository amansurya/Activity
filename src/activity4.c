#include "activity4.h"

void USARTInit(uint16_t BAUDRATE)
{
UBRR0H=(BAUDRATE>>8)&(0x00FF);
UBRR0L=BAUDRATE;

UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);
UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

char USARTReadChar()
{
while(!(UCSR0A&(1<<RXC0))){}
return UDR0;
}

void USARTWriteChar(int data)
{
while(!(UCSR0A&(1<<UDRE0))){}
UDR0=data;
}

void activity4(int t2)
{
USARTInit(103);
USARTWriteChar(t2);
}