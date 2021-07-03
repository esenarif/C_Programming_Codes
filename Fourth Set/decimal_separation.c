// A function called decimal_separation that takes the decimal number entered from the keyboard as the input argument and obtains the sign (+ or -) of the number, the whole part, the decimal part as the output argument. 

#include <stdio.h>
#include <stdlib.h>


float decimal_separation(float number){
	
	printf("Analysis of the number %0.4f \n", number);
	
	if(number < 0){
	printf("Sign of the number:  - ");
}

else{
	printf("Sign of the number:  + ");
}
	
	printf("The full part of the number: %d \n", (int)number);
	
	int ip = (int)number; //ip: integer part
	float dp = number - ip; //dp: decimal part
	printf("The decimal part of the number: %0.4f \n", dp);	
}


int main(int argc, char *argv[]) {
	
	float number;
	printf("Enter the decimal number to split:");
	scanf("%f", &number);
	decimal_separation(number);
	
	return 0;
}
