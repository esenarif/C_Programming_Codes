// Program that prints the number between 1to5 that entered.(For example: if user enters 1 then on the screen user will see one)

#include <stdio.h>

int main() {

int number;
	
printf("Enter any numbers 1 to 5 =  ");
scanf("%d",&number);
	
switch(number) {

case 1:
printf("One");
break;
	
case 2:
printf("Two");
break;

case 3:
printf("Three");
break;

case 4:
printf("Four");
break;

case 5:
printf("Five");
break;

default:
printf("Invalid Number!");

}
	
return 0;
}
