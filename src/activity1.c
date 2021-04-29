#include "activity1.h"

int activity1(void)
{
DDRB |=(1<<PB0);
DDRD&=~(1<<PD2);
PORTD|=(1<<PD2);
DDRD&=~(1<<PD3);
PORTD|=(1<<PD3);

   if(!(PIND&(1<<PD2))&&(!(PIND&(1<<PD3))))//the satisfying condition for the sensor to start working.
        {
        PORTB|=(1<<PB0);
        _delay_ms(2);
        return 1;
        }
        else{
        PORTB&=~(1<<PB0);
        _delay_ms(20);

        }
return 0;
}
