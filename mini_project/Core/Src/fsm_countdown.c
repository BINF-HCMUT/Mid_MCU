/*
 * fsm_countdown.c
 *
 *  Created on: Nov 5, 2022
 *      Author: admin
 */

#include "fsm_countdown.h"
#include "7segment.h"
void fsm_countdown(){
	if(status > 9){
		if(timer2_flag == 1){
			setTimer2(1000);
			display7Segment(status%10);
			status--;
			if(status == 9)	status = 19;
		}
		if(isPRESS(1)){
			setTimer2(10000);
			status = 0;
		}
		if(isPRESS(2)){
			setTimer2(10000);
			status = (status + 1)%10;
		}
		if(isPRESS(3)){
			setTimer2(10000);
			status = (status - 1)%10;
		}
	}
}
