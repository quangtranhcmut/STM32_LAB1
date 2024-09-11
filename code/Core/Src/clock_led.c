/*
 * clock_led.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Thảo Quảng
 */

#include "clock_led.h"

void setNumberOnClock(int num) {
	switch(num) {
		case LED_1: {
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 1);
			break;
		}
		case LED_2: {
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 1);
			break;
		}
		case LED_3: {
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 1);
			break;
		}
		case LED_4: {
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 1);
			break;
		}
		case LED_5: {
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 1);
			break;
		}
		case LED_6: {
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 1);
			break;
		}
		case LED_7: {
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, 1);
			break;
		}
		case LED_8: {
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, 1);
			break;
		}
		case LED_9: {
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, 1);
			break;
		}
		case LED_10: {
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, 1);
			break;
		}
		case LED_11: {
			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, 1);
			break;
		}
		case LED_12: {
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, 1);
			break;
		}
		default: {
			break;
		}
	}
}

void clearNumberOnClock(int num) {
	switch(num) {
		case LED_1: {
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
			break;
		}
		case LED_2: {
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
			break;
		}
		case LED_3: {
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
			break;
		}
		case LED_4: {
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 0);
			break;
		}
		case LED_5: {
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 0);
			break;
		}
		case LED_6: {
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 0);
			break;
		}
		case LED_7: {
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, 0);
			break;
		}
		case LED_8: {
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, 0);
			break;
		}
		case LED_9: {
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, 0);
			break;
		}
		case LED_10: {
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, 0);
			break;
		}
		case LED_11: {
			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, 0);
			break;
		}
		case LED_12: {
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, 0);
			break;
		}
		default: {
			break;
		}
	}
}

void clearAllClock() {
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 0);
	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 0);
	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 0);
	HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, 0);
	HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, 0);
	HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, 0);
	HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, 0);
	HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, 0);
	HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, 0);
}

void init_exercise(){
	clearAllClock();
}

int led_serial = 0;
void exercise6_run() {
	setNumberOnClock(led_serial++);
	if (led_serial > 12 || led_serial < 0) {
	  led_serial = 0;
	  clearAllClock();
	}
}

int hour = 0;
int minute = 0;
int second = 0;
void exercise10_run() {
	second++;
	if(second >= 60) {
		second = 0;
		minute++;
	}
	if(minute >= 60) {
		minute = 0;
		hour++;
	}
	if(hour >= 12) {
		hour = 0;
	}
	clearAllClock();
	setNumberOnClock(hour);
	setNumberOnClock((minute / 5));
	setNumberOnClock((second / 5));
}
