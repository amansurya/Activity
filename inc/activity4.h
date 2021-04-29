#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>

void USARTInit(uint16_t);
char USARTReadChar();
void USARTWriteChar(int);
void activity4(int);

#endif // ACTIVITY4_H_INCLUDED
