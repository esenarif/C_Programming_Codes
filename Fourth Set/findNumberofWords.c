/*
Program that finds the number of words in a sentence entered from the keyboard (the length of the sentence should be at most 255 characters).

Sample Run:
Please Enter the Sentence:
Ali topu tut.
This sentence contains 3 words.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
 
 char text[255];
 
 int counter=0,numberofWords=1;
 
 printf("Please enter the sentence : ");
 gets(text);
 
 while(text[counter] != '\0') {
 char character = text[counter];
 
 if(character==' ')
 numberofWords++;
 counter++;
 }
 printf("This sentence contain %d words", numberofWords);
}
