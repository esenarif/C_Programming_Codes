// The program that prints the gender on the screen according to the entered letter.

#include <stdio.h>

int main() {

char gender;

printf("Enter the first letter of gender : \n");
scanf("%c",&gender);

switch(gender) {

case 'm':
printf("man");
break;

case 'w':
printf("woman");
break;

default:
printf("You entered wrong char.");
}
	return 0;
}
