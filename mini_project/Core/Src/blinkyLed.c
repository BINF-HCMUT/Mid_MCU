/*
 * blinkyLed.c
 *
 *  Created on: Nov 5, 2022
 *      Author: admin
 */


#include "blinkyLed.h"
#include "software_timer.h"
#include "main.h"
void blinkyLED(){
	if(timer1_flag == 1){
		HAL_GPIO_TogglePin(RED_GPIO_Port,RED_Pin);
		setTimer1(1000);
	}
}
