/*
 * fsm_simple_button_run.c
 *
 *  Created on: Nov 5, 2022
 *      Author: admin
 */


#include"fsm_simple_button_run.h"
#include"7segment.h"
void fsm_simple_button_run(){
	switch(status){
	case 0:
		display7Segment(status);
		if(isPRESS(1)){
			setTimer2(10000);
			status = 0;
		}
		if(isPRESS(2) || isPRESS1s(2)){
			setTimer2(10000);
			status = 1;
		}
		if(isPRESS(3) || isPRESS1s(3)){
			setTimer2(10000);
			status = 9;
		}
		if(timer2_flag == 1){
			setTimer2(1000);
			status = 19;
		}
		break;
	case 1:
		display7Segment(status);
		if(isPRESS(1)){
			setTimer2(10000);
			status = 0;
		}
		if(isPRESS(2) || isPRESS1s(2)){
			setTimer2(10000);
			status = 2;
		}
		if(isPRESS(3) || isPRESS1s(3)){
			setTimer2(10000);
			status = 0;
		}
		if(timer2_flag == 1){
			setTimer2(1000);
			status = status - 1 + 10;
		}
		break;
	case 2:
		display7Segment(status);
		if(isPRESS(1)){
			setTimer2(10000);
			status = 0;
		}
		if(isPRESS(2) || isPRESS1s(2)){
			setTimer2(10000);
			status = 3;
		}
		if(isPRESS(3) || isPRESS1s(3)){
			setTimer2(10000);
			status = 1;
		}
		if(timer2_flag == 1){
			setTimer2(1000);
			status = status - 1 + 10;
		}
		break;
	case 3:
		display7Segment(status);
		if(isPRESS(1)){
			setTimer2(10000);
			status = 0;
		}
		if(isPRESS(2) || isPRESS1s(2)){
			setTimer2(10000);
			status = 4;
		}
		if(isPRESS(3) || isPRESS1s(3)){
			setTimer2(10000);
			status = 2;
		}
		if(timer2_flag == 1){
			setTimer2(1000);
			status = status - 1 + 10;
		}
		break;
	case 4:
		display7Segment(status);
		if(isPRESS(1)){
			setTimer2(10000);
			status = 0;
		}
		if(isPRESS(2) || isPRESS1s(2)){
			setTimer2(10000);
			status = 5;
		}
		if(isPRESS(3) || isPRESS1s(3)){
			setTimer2(10000);
			status = 3;
		}
		if(timer2_flag == 1){
			setTimer2(1000);
			status = status - 1 + 10;
		}
		break;
	case 5:
		display7Segment(status);
		if(isPRESS(1)){
			setTimer2(10000);
			status = 0;
		}
		if(isPRESS(2) || isPRESS1s(2)){
			setTimer2(10000);
			status = 6;
		}
		if(isPRESS(3) || isPRESS1s(3)){
			setTimer2(10000);
			status = 4;
		}
		if(timer2_flag == 1){
			setTimer2(1000);
			status = status - 1 + 10;
		}
		break;
	case 6:
		display7Segment(status);
		if(isPRESS(1)){
			setTimer2(10000);
			status = 0;
		}
		if(isPRESS(2) || isPRESS1s(2)){
			setTimer2(10000);
			status = 7;
		}
		if(isPRESS(3) || isPRESS1s(3)){
			setTimer2(10000);
			status = 5;
		}
		if(timer2_flag == 1){
			setTimer2(1000);
			status = status - 1 + 10;
		}
		break;
	case 7:
		display7Segment(status);
		if(isPRESS(1)){
			setTimer2(10000);
			status = 0;
		}
		if(isPRESS(2) || isPRESS1s(2)){
			setTimer2(10000);
			status = 8;
		}
		if(isPRESS(3) || isPRESS1s(3)){
			setTimer2(10000);
			status = 6;
		}
		if(timer2_flag == 1){
			setTimer2(1000);
			status = status - 1 + 10;
		}
		break;
	case 8:
		display7Segment(status);
		if(isPRESS(1)){
			setTimer2(10000);
			status = 0;
		}
		if(isPRESS(2) || isPRESS1s(2)){
			setTimer2(10000);
			status = 9;
		}
		if(isPRESS(3) || isPRESS1s(3)){
			setTimer2(10000);
			status = 7;
		}
		if(timer2_flag == 1){
			setTimer2(1000);
			status = status - 1 + 10;
		}
		break;
	case 9:
		display7Segment(status);
		if(isPRESS(1)){
			setTimer2(10000);
			status = 0;
		}
		if(isPRESS(2) || isPRESS1s(2)){
			setTimer2(10000);
			status = 0;
		}
		if(isPRESS(3) || isPRESS1s(3)){
			setTimer2(10000);
			status = 8;
		}
		if(timer2_flag == 1){
			setTimer2(1000);
			status = status - 1 + 10;
		}
		break;
	default:
		break;
	}
}
