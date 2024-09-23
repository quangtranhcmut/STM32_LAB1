/*
 * automatic.c
 *
 *  Created on: 23 thg 9, 2024
 *      Author: Thảo Quảng
 */

#include "automatic.h"

void traffic_green_red();
void init_automatic() {

}
void automatic_run(){
	switch (status) {
		case INIT: {
			if (1) {
				status = GREEN_RED;
//				setTimer(0, 5000); // Timer 1
//				timer_flag[1] = 1; // Timer 2
			}
			break;
		}
		case GREEN_RED: {
//			traffic_green_red();
//			if (timer_flag[0] == 1) {
//				status = AMBER_RED;
//				setTimer(0, 2000); // Timer 1
//			}
//			if (timer_flag[1] == 1) {
//				//UPDATE DISPLAY
//				setTimer(1, 1000); // Timer 2
//			}
//			if (isButton1Pressed()) {
				// Check button1_flag == 1, then reset button1_flag = 0
//				status = MAN_GREEN_RED;
//				setTimer(2, 10000); // Timer 3
//			}
			break;
		}
		case AMBER_RED: {
			break;
		}
		case RED_GREEN: {
			break;
		}
		case RED_AMBER: {
			break;
		}
		default: {
			break;
		}
	}
}
