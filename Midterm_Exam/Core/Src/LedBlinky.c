/*
 * LedBlinky.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Student
 */
#include "LedBlinky.h"

void fsm_LedBlinky_run(){
	switch(led_status){
		case INIT_for_led:
			led_status = LED_ON;
			setTimer3(100);

		break;

		case LED_ON:
			if(timer3_flag == 1){
				timer3_flag = 0;
				HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
				led_status = LED_OFF;
				setTimer3(100);
			}
			break;

		case LED_OFF:
			if(timer3_flag == 1){
				timer3_flag = 0;
				HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
				led_status = LED_ON;
				setTimer3(100);
			}
			break;
}
}
