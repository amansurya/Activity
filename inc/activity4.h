/**
 * @file activity4.h
 * @author Sai Sanath P
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>


#define DATA_NOT_RECEIVED !(UCSR0A&(1<<RXC0))
#define DATA_NOT_WRITTEN !(UCSR0A&(1<<UDRE0))


/**
 * @brief USART function
 * 
 */
void USARTInit(uint16_t);

/**
 * @brief Reading the value
 * 
 * @return char 
 */
char USARTReadChar();

/**
 * @brief writing the value
 * 
 */
void USARTWriteChar(int);

/**
 * @brief calling function activity 4
 * 
 */
void activity4(int);

#endif // ACTIVITY4_H_INCLUDED
