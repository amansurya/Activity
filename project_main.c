/**
 * @file main.c
 * @author Sai Sanath P
 * @brief  Embedded C project Activify 1
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "project_config.h"
#include "user_utils.h"
#include "blinky.h"

/**
 * @brief main function for the seat push button and activating temperature sensor
 * 
 * @return int 
 */
int main(void)
{
DDRB |=(1<<PB0);
DDRD&=~(1<<PD0);
PORTD|=(1<<PD0);
DDRC&=~(1<<PC0);
PORTC|=(1<<PC0);


    while(1)
    {
        if(!(PIND&(1<<PD0))&&(!(PINC&(1<<PC0))))//the satisfying condition for the sensor to start working.
        {
        PORTB|=(1<<PB0);
        
        }
        else{
        PORTB&=~(1<<PB0);
        
        }
    }


    return 0;
}
