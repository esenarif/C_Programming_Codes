/* Program that prints the number of letters of a city name entered from the keyboard.
Sample Run:
Please enter the city: Ankara
This city has 6 characters
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
 char text[100];
 int counter=0;
 printf("Enter the name of city = ");
 gets(text);
 while(text[counter] != '\0')
 counter++;
 printf("This city has %d characters", counter);
}
