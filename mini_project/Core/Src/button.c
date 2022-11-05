#include <button.h>
#define NO_OF_BUTTON 	3
int KeyReg0[NO_OF_BUTTON] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg1[NO_OF_BUTTON] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg2[NO_OF_BUTTON] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg3[NO_OF_BUTTON] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};




int TimeOutForKeyPress[NO_OF_BUTTON] =  {300,300,300};
int button_flag[NO_OF_BUTTON] = {0,0,0};
int button1s_flag[NO_OF_BUTTON] = {0,0,0};

unsigned char isPRESS( unsigned char i){
	int value = button_flag[i-1];
	button_flag[i-1] = 0;
	return (value == 1);
}

unsigned char isPRESS1s( unsigned char i){
	int value = button1s_flag[i-1];
	button1s_flag[i-1] = 0;
	return (value == 1);
}

void getKeyInput(){
	for(int i = 0 ; i < NO_OF_BUTTON ; i++){
		KeyReg2[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg0[i];
		if(i == 0)	KeyReg0[i] = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
		if(i == 1)	KeyReg0[i] = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
		if(i == 2)	KeyReg0[i] = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
		if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])){
		    if (KeyReg2[i] != KeyReg3[i]){
		      KeyReg3[i] = KeyReg2[i];

		      if(KeyReg3[i] == PRESSED_STATE){
		    	  TimeOutForKeyPress[i] = 300;
		    	  button_flag[i] = 1;
		      }
		    }else{
		    	TimeOutForKeyPress[i]--;
		    	if (TimeOutForKeyPress[i] == 0){
		    		// press button more than 1s
		    	   if(KeyReg3[i] == PRESSED_STATE){
		    		   TimeOutForKeyPress[i] = 100;
		    		   button_flag[i] = 0;
		    		   button1s_flag[i] = 1;
		    	   }
		    	   // reset timeout
		    	   if(KeyReg3[i] == NORMAL_STATE){
			    	   TimeOutForKeyPress[i] = 300;
			    	   button1s_flag[i] = 0;
		    	   }

		    	}
		    }
		}
	}
}
