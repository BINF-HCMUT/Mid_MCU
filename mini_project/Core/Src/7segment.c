/*
 * 7segment.c
 *
 *  Created on: Nov 3, 2022
 *      Author: admin
 */
#include"7segment.h"
#include"main.h"
uint8_t segmentNumber[10] = {
	0x40,	//0
	0x79,	//1
	0x24,	//2
	0x30,	//3
	0x19,	//4
	0x12,	//5
	0x02,	//6
	0x78,	//7
	0x00,	//8
	0x10	//9
};
void display7Segment(int value){
	uint8_t number = segmentNumber[value];
	HAL_GPIO_WritePin(A_GPIO_Port, A_Pin,((number>>0) & 0x01));
	HAL_GPIO_WritePin(B_GPIO_Port, B_Pin,((number>>1) & 0x01));
	HAL_GPIO_WritePin(C_GPIO_Port, C_Pin,((number>>2) & 0x01));
	HAL_GPIO_WritePin(D_GPIO_Port, D_Pin,((number>>3) & 0x01));
	HAL_GPIO_WritePin(E_GPIO_Port, E_Pin,((number>>4) & 0x01));
	HAL_GPIO_WritePin(F_GPIO_Port, F_Pin,((number>>5) & 0x01));
	HAL_GPIO_WritePin(G_GPIO_Port, G_Pin,((number>>6) & 0x01));
}

