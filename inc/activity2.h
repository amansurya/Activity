#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>

void InitADC();
uint16_t ReadADC(uint8_t);
int activity2(void);

#endif // ACTIVITY2_H_INCLUDED
