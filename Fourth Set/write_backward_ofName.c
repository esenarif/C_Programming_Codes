/* Program that writes a name entered from the keyboard backwards to the screen.
Sample Run:
2
Enter the name: deniz
Backward : zined
*/

#include <stdio.h>
#include <stdlib.h>

int ChNum(char text[]) { 
 int i=0;
 while(text[i] != 0)
 i++;
 return i;
}

void main(){
 
 char text[100];
 int count=0;
 
 printf("Enter your name = ");
 gets(text);
 
 int numberofCh = ChNum(text); 
 printf("Backward = ");
 
 for(count=numberofCh-1; count>=0; count--){
 putchar(text[count]);
}
}
