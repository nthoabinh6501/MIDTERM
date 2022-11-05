/*
 * LedBlinky.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Student
 */

#ifndef INC_LEDBLINKY_H_
#define INC_LEDBLINKY_H_

#define INIT_for_led		0
#define LED_ON				1
#define LED_OFF				2

#include "main.h"
#include "global.h"

int led_status;
void fsm_LedBlinky_run();

#endif /* INC_LEDBLINKY_H_ */
