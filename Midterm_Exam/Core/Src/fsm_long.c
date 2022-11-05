/*
 * fsm_long.c
 *
 *  Created on: Nov 6, 2022
 *      Author: Student
 */
#include "fsm_long.h"
#include "fsm_auto.h"
#include "button.h"
#include "display7SEG.h"
#include "main.h"

void fsm_long_run(){
	switch (status){
	case LONG_0:
		display7SEG(0);
		if(timer1_flag == 1){
			timer1_flag = 0;
		if(INC_flag1 == 1){
			INC_flag1 = 0;
			status = LONG_1;
			setTimer1(100);
		}
		}
		break;
	case LONG_1:
		display7SEG(1);
		if(timer1_flag == 1){
			timer1_flag = 0;
		if(INC_flag1 == 1){
			INC_flag1 = 0;
			status = LONG_2;
			setTimer1(100);
		}
		}
		break;
	case LONG_2:
		display7SEG(2);
		if(timer1_flag == 1){
			timer1_flag = 0;
		if(INC_flag1 == 1){
			INC_flag1 = 0;
			status = LONG_3;
			setTimer1(100);
		}
		}
		break;
	case LONG_3:
		display7SEG(3);
		if(timer1_flag == 1){
			timer1_flag = 0;
		if(INC_flag1 == 1){
			INC_flag1 = 0;
			status = LONG_4;
			setTimer1(100);
		}
		}
		break;
	case LONG_4:
		display7SEG(4);
		if(timer1_flag == 1){
			timer1_flag = 0;
		if(INC_flag1 == 1){
			INC_flag1 = 0;
			status = LONG_5;
			setTimer1(100);
		}
		}
		break;
	case LONG_5:
		display7SEG(5);
		if(timer1_flag == 1){
			timer1_flag = 0;
		if(INC_flag1 == 1){
			INC_flag1 = 0;
			status = LONG_6;
			setTimer1(100);
		}
		}
		break;
	case LONG_6:
		display7SEG(6);
		if(timer1_flag == 1){
			timer1_flag = 0;
		if(INC_flag1 == 1){
			INC_flag1 = 0;
			status = LONG_7;
			setTimer1(100);
		}
		}
		break;
	case LONG_7:
		display7SEG(7);
		if(timer1_flag == 1){
			timer1_flag = 0;
		if(INC_flag1 == 1){
			INC_flag1 = 0;
			status = LONG_8;
			setTimer1(100);
		}
		}
		break;
	case LONG_8:
		display7SEG(8);
		if(timer1_flag == 1){
			timer1_flag = 0;
		if(INC_flag1 == 1){
			INC_flag1 = 0;
			status = LONG_7;
			setTimer1(100);
		}
		}
		break;
	case LONG_9:
		display7SEG(9);
		if(timer1_flag == 1){
			timer1_flag = 0;
		if(INC_flag1 == 1){
			INC_flag1 = 0;
			status = LONG_0;
			setTimer1(100);
		}
		}
		break;
	default:
		break;
	}
}

