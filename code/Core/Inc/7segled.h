/*
 * 7segled.h
 *
 *  Created on: 10 thg 9, 2024
 *      Author: Thảo Quảng
 */

#ifndef INC_7SEGLED_H_
#define INC_7SEGLED_H_

#include "main.h"

#define A_7SEG 0
#define B_7SEG 1

void setDigit(int serial_7seg, int a, int b, int c, int d, int e, int f, int g);
void displayDigit(int serial_7seg, int value);

#endif /* INC_7SEGLED_H_ */
