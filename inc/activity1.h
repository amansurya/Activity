/**
 * @file activity1.h
 * @author Sai Sanath P
 * @brief Header file of activity 1
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>

#define BUTTON_ON !(PIND&(1<<PD2))
#define HEATER_ON !(PIND&(1<<PD3))
#define LED_ON PORTB|=(1<<PB0)
#define LED_OFF PORTB&=~(1<<PB0)

/**
 * @brief calling function of activity 1
 * 
 * @return int 
 */
int activity1(void);

#endif // ACTIVITY1_H_INCLUDED
