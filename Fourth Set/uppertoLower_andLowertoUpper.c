/*

Program that converts uppercase letters to lowercase and lowercase letters to uppercase of a word with a maximum length of 25 characters entered from the keyboard. 

Sample Run:
Enter the word (Maximum 25 characters): oRnEk
Converted: OrNeK

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
  
  char string[25];
  
  int control, character, i;

	   printf("Enter the word (Maximum 25 characters): ");
       fgets(string, sizeof string, stdin);  

  i=strlen(string);

  control = i; 

  printf("Converted : ");
  
  for(i=0; i < control; i++){
    
    character = islower(string[i]) ? toupper(string[i]) : tolower(string[i]);
    putchar(character);
   }
   
}
