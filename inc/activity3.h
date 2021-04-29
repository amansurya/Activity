/**
 * @file activity3.h
 * @author Sai Sanath P
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>

#define TEMP_COND_1 (temp>=0)&&(temp<=200)
#define TEMP_COND_2 (temp>=210)&&(temp<=500)
#define TEMP_COND_3 (temp>=510)&&(temp<=700)
#define TEMP_COND_4 (temp>=710)&&(temp<=1024)

/**
 * @brief calling function activity 3
 * 
 * @return int 
 */
int activity3(uint16_t);

#endif // ACTIVITY3_H_INCLUDED
