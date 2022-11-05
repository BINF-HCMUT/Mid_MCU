#include <stdio.h>
#include <math.h>

const char* suffixWithUnit ( double number ) {
	//convert number to string
	char *str[30]; 
	
	int number_int = (int)number;
	//number is an interger	
	if(number == number_int){
		int count = 0;
		while(number_int > 0){
			count++;
			number_int = number_int / 10;
		}
		int i = count;
		while(i < count){
			str[i] = (char)number_int/pow(10,count - i -1);
		}
		if( number_int < 1000){
			//return str;
		}
		if(number_int >1000 && number_int<1000000){

			//return strcat(str, "Kilo");
		}
		
	}
	//number is a double number
	else{

	}
	return "XiDo";
}

int main()
{
    double number;
    scanf ("%lf",&number);
	suffixWithUnit(number);

    return 0; 
}

