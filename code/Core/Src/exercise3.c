/*
 * exercise3.c
 *
 *  Created on: 10 thg 9, 2024
 *      Author: Thảo Quảng
 */

#include "exercise3.h"

int xline_state = LED1_STATE;
int xline_count = 3;
int yline_state = LED6_STATE;
int yline_count = 5;

void led1(){
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_RESET);
}
void led2(){
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_RESET);
}
void led3(){
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_SET);
}

void led4(){
	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_RESET);
}
void led5(){
	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_RESET);
}
void led6(){
	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_SET);
}

void exercise3_run() {
	switch(xline_state) {
		case LED1_STATE: {
			led1();
			displayDigit(A_7SEG, xline_count - 1);
			xline_count--;
			if(xline_count <= 0) {
				xline_state = LED2_STATE;
				xline_count = 2;
			}
			break;
		}
		case LED2_STATE: {
			led2();
			displayDigit(A_7SEG, xline_count - 1);
			xline_count--;
			if(xline_count <= 0) {
				xline_state = LED3_STATE;
				xline_count = 5;
			}
			break;
		}
		case LED3_STATE: {
			led3();
			displayDigit(A_7SEG, xline_count - 1);
			xline_count--;
			if(xline_count <= 0){
				xline_state = LED1_STATE;
				xline_count = 3;
			}
			break;
		}
		default:
			break;
	}

	switch(yline_state) {
		case LED4_STATE: {
			led4();
			displayDigit(B_7SEG, yline_count - 1);
			yline_count--;
			if(yline_count <= 0) {
				yline_state = LED5_STATE;
				yline_count = 2;
			}
			break;
		}
		case LED5_STATE: {
			led5();
			displayDigit(B_7SEG, yline_count - 1);
			yline_count--;
			if(yline_count <= 0) {
				yline_state = LED6_STATE;
				yline_count = 5;
			}
			break;
		}
		case LED6_STATE: {
			led6();
			displayDigit(B_7SEG, yline_count - 1);
			yline_count--;
			if(yline_count <= 0){
				yline_state = LED4_STATE;
				yline_count = 3;
			}
			break;
		}
		default:
			break;
	}
}
