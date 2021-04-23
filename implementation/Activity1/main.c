/*
 */

#include <avr/io.h>
//#include<util/delay.h>

int main(void)
{
DDRB |=(1<<PB0);
DDRD&=~(1<<PD0);
PORTD|=(1<<PD0);
DDRC&=~(1<<PC0);
PORTC|=(1<<PC0);


    while(1)
    {
        if(!(PIND&(1<<PD0))&&(!(PINC&(1<<PC0))))
        {
        PORTB|=(1<<PB0);
        //_delay_ms(2);
        }
        else{
        PORTB&=~(1<<PB0);
        //_delay_ms(20);
        }
    }


    return 0;
}

