/*
 * fsm_auto.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Student
 */

#include "fsm_auto.h"
#include "display7SEG.h"
#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "global.h"

void fsm_auto_run(){
	switch(status){
	case INIT:
		display7SEG(0);
		status = BUT0;
		setTimer2(1000);
		break;

	case AUTO_0:
		display7SEG(0);
		if(timer2_flag == 1){
			timer2_flag = 0;
			setTimer2(100);
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUT1;
		}
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUT0;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUT9;
		}
		break;
	case AUTO_1:
		display7SEG(1);
		if(timer2_flag == 1){
			timer2_flag = 0;
			status = AUTO_0;
			setTimer2(100);
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUT2;
		}
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUT0;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUT1;
		}
		break;
	case AUTO_2:
		display7SEG(2);
		if(timer2_flag == 1){
			timer2_flag = 0;
			status = AUTO_1;
			setTimer2(100);
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUT3;
		}
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUT0;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUT1;
		}
		break;
	case AUTO_3:
		display7SEG(3);
		if(timer2_flag == 1){
			timer2_flag = 0;
			status = AUTO_2;
			setTimer2(100);
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUT4;
		}
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUT0;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUT2;
		}
		break;
	case AUTO_4:
		display7SEG(4);
		if(timer2_flag == 1){
			timer2_flag = 0;
			status = AUTO_3;
			setTimer2(100);
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUT5;
		}
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUT0;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUT3;
		}
		break;
	case AUTO_5:
		display7SEG(5);
		if(timer2_flag == 1){
			timer2_flag = 0;
			status = AUTO_4;
			setTimer2(100);
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUT6;
		}
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUT0;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUT4;
		}
		break;
	case AUTO_6:
		display7SEG(6);
		if(timer2_flag == 1){
			timer2_flag = 0;
			status = AUTO_5;
			setTimer2(100);
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUT7;
		}
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUT0;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUT5;
		}
		break;
	case AUTO_7:
		display7SEG(7);
		if(timer2_flag == 1){
			timer2_flag = 0;
			status = AUTO_6;
			setTimer2(100);
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUT8;
		}
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUT0;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUT6;
		}
		break;
	case AUTO_8:
		display7SEG(8);
		if(timer2_flag == 1){
			timer2_flag = 0;
			status = AUTO_7;
			setTimer2(100);
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUT9;
		}
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUT0;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUT7;
		}
		break;
	case AUTO_9:
		display7SEG(9);
		if(timer2_flag == 1){
			timer2_flag = 0;
			status = AUTO_8;
			setTimer2(100);
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUT9;
		}
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUT0;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUT8;
		}
		break;
	default:
		break;
	}
}
