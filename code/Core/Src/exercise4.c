/*
 * exercise4.c
 *
 *  Created on: 10 thg 9, 2024
 *      Author: Thảo Quảng
 */
#include "exercise4.h"

void init_exercise4() {
	HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 1);
	HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 1);
	HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 1);
	HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 1);
	HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 1);
	HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 1);
	HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 1);
}

void setDigit(int a, int b, int c, int d, int e, int f, int g) {
	HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, a);
	HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, b);
	HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, c);
	HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, d);
	HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, e);
	HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, f);
	HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, g);
}

void display7SEG(int value) {
    switch (value) {
		case 0:
			setDigit(0,0,0,0,0,0,1);
			break;
		case 1:
			setDigit(1,0,0,1,1,1,1);
			break;
		case 2:
			setDigit(0,0,1,0,0,1,0);
			break;
		case 3:
			setDigit(0,0,0,0,1,1,0);
			break;
		case 4:
			setDigit(1,0,0,1,1,0,0);
			break;
		case 5:
			setDigit(0,1,0,0,1,0,0);
			break;
		case 6:
			setDigit(0,1,0,0,0,0,0);
			break;
		case 7:
			setDigit(0,0,0,1,1,1,1);
			break;
		case 8:
			setDigit(0,0,0,0,0,0,0);
			break;
		case 9:
			setDigit(0,0,0,0,1,0,0);
			break;
		default:
			break;
    }
}
