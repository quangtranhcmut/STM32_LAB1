/*
 * 7segled.c
 *
 *  Created on: 10 thg 9, 2024
 *      Author: Thảo Quảng
 */
#include "7segled.h"

void setDigit(int serial_7seg, int a, int b, int c, int d, int e, int f, int g) {
	if (serial_7seg == A_7SEG) {
		HAL_GPIO_WritePin(ASEG_0_GPIO_Port, ASEG_0_Pin, a);
		HAL_GPIO_WritePin(ASEG_1_GPIO_Port, ASEG_1_Pin, b);
		HAL_GPIO_WritePin(ASEG_2_GPIO_Port, ASEG_2_Pin, c);
		HAL_GPIO_WritePin(ASEG_3_GPIO_Port, ASEG_3_Pin, d);
		HAL_GPIO_WritePin(ASEG_4_GPIO_Port, ASEG_4_Pin, e);
		HAL_GPIO_WritePin(ASEG_5_GPIO_Port, ASEG_5_Pin, f);
		HAL_GPIO_WritePin(ASEG_6_GPIO_Port, ASEG_6_Pin, g);
	}
	if (serial_7seg == B_7SEG) {
		HAL_GPIO_WritePin(BSEG_0_GPIO_Port, BSEG_0_Pin, a);
		HAL_GPIO_WritePin(BSEG_1_GPIO_Port, BSEG_1_Pin, b);
		HAL_GPIO_WritePin(BSEG_2_GPIO_Port, BSEG_2_Pin, c);
		HAL_GPIO_WritePin(BSEG_3_GPIO_Port, BSEG_3_Pin, d);
		HAL_GPIO_WritePin(BSEG_4_GPIO_Port, BSEG_4_Pin, e);
		HAL_GPIO_WritePin(BSEG_5_GPIO_Port, BSEG_5_Pin, f);
		HAL_GPIO_WritePin(BSEG_6_GPIO_Port, BSEG_6_Pin, g);
	}
}

void displayDigit(int serial_7seg, int value) {
    switch (value) {
		case 0:
			setDigit(serial_7seg,0,0,0,0,0,0,1);
			break;
		case 1:
			setDigit(serial_7seg,1,0,0,1,1,1,1);
			break;
		case 2:
			setDigit(serial_7seg,0,0,1,0,0,1,0);
			break;
		case 3:
			setDigit(serial_7seg,0,0,0,0,1,1,0);
			break;
		case 4:
			setDigit(serial_7seg,1,0,0,1,1,0,0);
			break;
		case 5:
			setDigit(serial_7seg,0,1,0,0,1,0,0);
			break;
		case 6:
			setDigit(serial_7seg,0,1,0,0,0,0,0);
			break;
		case 7:
			setDigit(serial_7seg,0,0,0,1,1,1,1);
			break;
		case 8:
			setDigit(serial_7seg,0,0,0,0,0,0,0);
			break;
		case 9:
			setDigit(serial_7seg,0,0,0,0,1,0,0);
			break;
		default: break;
    }
}
