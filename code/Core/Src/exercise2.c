/*
 * exercise2.c
 *
 *  Created on: 9 thg 9, 2024
 *      Author: Thảo Quảng
 */

#include "exercise2.h"

int state = GREEN_STATE;
int count = 0;
void green_led() {
	HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
}
void yellow_led() {
	HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
}
void red_led() {
	HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
}
void init_exercise2() {

}
void exercise2_run() {
	switch(state) {
		case GREEN_STATE: {
			green_led();
			count++;
			if(count >= 3) {
				state = YELLOW_STATE;
				count = 0;
			}
			break;
		}
		case YELLOW_STATE: {
			yellow_led();
			count++;
			if(count >= 2) {
				state = RED_STATE;
				count = 0;
			}
			break;
		}
		case RED_STATE: {
			red_led();
			count++;
			if(count >= 5){
				state = GREEN_STATE;
				count = 0;
			}
			break;
		}
		default: break;
	}
}
