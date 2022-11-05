/*
 * fsm_simple_buttons_run.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ADMIN
 */
#include "fsm_simple_buttons_run.h"
#include "display7SEG.h"
#include "button.h"

void fsm_simple_buttons_run(){
	switch(status){
	case BUT0:
		//TODO
		display7SEG(0);
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUT0;
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUT1;
			setTimer2(200);
		}
		if(INC_flag1 == 1){
			INC_flag1 = 0;
			status = LONG_0;
			setTimer1(100);
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUT9;
			setTimer2(200);
		}
		if(DEC_flag1 == 1){
			DEC_flag1 = 0;
			status = LONG_0;
			setTimer1(100);
		}
		if(timer2_flag == 1){
			timer2_flag = 0;
			status = AUTO_0;
			setTimer2(200);
		}

		break;
	case BUT1:
		//TODO
		display7SEG(1);
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUT0;

		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUT2;
			setTimer2(200);
			}
		if(INC_flag1 == 1){
			INC_flag1 = 0;
			status = LONG_1;
			setTimer1(100);
		}
		if(DEC_flag1 == 1){
			DEC_flag1 = 0;
			status = LONG_1;
			setTimer1(100);
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUT0;
			setTimer2(200);
		}
		if(timer2_flag == 1){
			timer2_flag = 0;
			status = AUTO_1;
			setTimer2(200);
		}
		break;
	case BUT2:
		//TODO
		display7SEG(2);
		if(RESET_flag == 1){
					RESET_flag = 0;
					status = BUT0;

		}
		if(INC_flag == 1){
					INC_flag = 0;
					status = BUT3;
					setTimer2(200);
							}
		if(DEC_flag == 1){
					DEC_flag = 0;
					status = BUT1;
					setTimer2(200);
				}
		if(timer2_flag == 1){
			timer2_flag = 0;
			status = AUTO_2;
			setTimer2(200);
		}
		if(INC_flag1 == 1){
			INC_flag1 = 0;
			status = LONG_2;
			setTimer1(100);
		}
		if(DEC_flag1 == 1){
			DEC_flag1 = 0;
			status = LONG_2;
			setTimer1(100);
		}
		break;
	case BUT3:
		//TODO
				display7SEG(3);
				if(RESET_flag == 1){
							RESET_flag = 0;
							status = BUT0;

				}
				if(INC_flag == 1){
							INC_flag = 0;
							status = BUT4;
							setTimer2(200);
									}
				if(DEC_flag == 1){
							DEC_flag = 0;
							status = BUT2;
							setTimer2(200);
						}
				if(timer2_flag == 1){
					timer2_flag = 0;
					status = AUTO_3;
					setTimer2(200);
				}
				if(INC_flag1 == 1){
					INC_flag1 = 0;
					status = LONG_3;
					setTimer1(100);
				}
				if(DEC_flag1 == 1){
					DEC_flag1 = 0;
					status = LONG_3;
					setTimer1(100);
				}
				break;
	case BUT4:
		//TODO
		display7SEG(4);
		if(RESET_flag == 1){
					RESET_flag = 0;
					status = BUT0;

		}
		if(INC_flag == 1){
								INC_flag = 0;
								status = BUT5;
								setTimer2(200);
							}
		if(DEC_flag == 1){
								DEC_flag = 0;
								status = BUT3;
								setTimer2(200);
				}
		if(timer2_flag == 1){
			timer2_flag = 0;
			status = AUTO_4;
			setTimer2(200);
		}
		if(INC_flag1 == 1){
			INC_flag1 = 0;
			status = LONG_4;
			setTimer1(100);
		}
		if(DEC_flag1 == 1){
			DEC_flag1 = 0;
			status = LONG_4;
			setTimer1(100);
		}
		break;
	case BUT5:
		//TODO
		display7SEG(5);
		if(RESET_flag == 1){
					RESET_flag = 0;
					status = BUT0;

		}
					if(INC_flag == 1){
								INC_flag = 0;
								status = BUT6;
								setTimer2(200);
							}
							if(DEC_flag == 1){
								DEC_flag = 0;
								status = BUT4;
								setTimer2(200);
				}
							if(timer2_flag == 1){
								timer2_flag = 0;
								status = AUTO_5;
								setTimer2(200);
							}
							if(INC_flag1 == 1){
								INC_flag1 = 0;
								status = LONG_5;
								setTimer1(100);
							}
							if(DEC_flag1 == 1){
								DEC_flag1 = 0;
								status = LONG_5;
								setTimer1(100);
							}
		break;
	case BUT6:
		//TODO
		display7SEG(6);
		if(RESET_flag == 1){
					RESET_flag = 0;
					status = BUT0;

		}
					if(INC_flag == 1){
								INC_flag = 0;
								status = BUT7;
								setTimer2(200);
							}
							if(DEC_flag == 1){
								DEC_flag = 0;
								status = BUT5;
								setTimer2(200);
				}
							if(timer2_flag == 1){
								timer2_flag = 0;
								status = AUTO_6;
								setTimer2(200);
							}
							if(INC_flag1 == 1){
								INC_flag1 = 0;
								status = LONG_6;
								setTimer1(100);
							}
							if(DEC_flag1 == 1){
								DEC_flag1 = 0;
								status = LONG_6;
								setTimer1(100);
							}
		break;
	case BUT7:
		//TODO
		display7SEG(7);
		if(RESET_flag == 1){
					RESET_flag = 0;
					status = BUT0;
		}
				if(INC_flag == 1){
					INC_flag = 0;
					status = BUT8;
					setTimer2(200);
				}
				if(DEC_flag == 1){
					DEC_flag = 0;
					status = BUT6;
					setTimer2(200);
				}
				if(timer2_flag == 1){
					timer2_flag = 0;
					status = AUTO_7;
					setTimer2(200);
				}
				if(INC_flag1 == 1){
					INC_flag1 = 0;
					status = LONG_7;
					setTimer1(100);
				}
				if(DEC_flag1 == 1){
					DEC_flag1 = 0;
					status = LONG_7;
					setTimer1(100);
				}
		break;
	case BUT8:
		//TODO
		display7SEG(8);
		if(RESET_flag == 1){
					RESET_flag = 0;
					status = BUT0;

				}if(INC_flag == 1){
					INC_flag = 0;
					status = BUT9;
					setTimer2(200);
				}
				if(DEC_flag == 1){
					DEC_flag = 0;
					status = BUT7;
					setTimer2(200);
				}
				if(timer2_flag == 1){
					timer2_flag = 0;
					status = AUTO_8;
					setTimer2(200);
				}
				if(INC_flag1 == 1){
					INC_flag1 = 0;
					status = LONG_8;
					setTimer1(100);
				}
				if(DEC_flag1 == 1){
					DEC_flag1 = 0;
					status = LONG_8;
					setTimer1(100);
				}
		break;
	case BUT9:
		//TODO
		display7SEG(9);
		if(RESET_flag == 1){
					RESET_flag = 0;
					status = BUT0;

				}if(INC_flag == 1){
					INC_flag = 0;
					status = BUT0;
					setTimer2(200);
				}
				if(DEC_flag == 1){
					DEC_flag = 0;
					status = BUT8;
					setTimer2(200);
				}
				if(timer2_flag == 1){
					timer2_flag = 0;
					status = AUTO_9;
					setTimer2(200);
				}
				if(INC_flag1 == 1){
					INC_flag1 = 0;
					status = LONG_9;
					setTimer1(100);
				}
				if(DEC_flag1 == 1){
					DEC_flag1 = 0;
					status = LONG_9;
					setTimer1(100);
				}
		break;
	default:
		break;
		}
	}

