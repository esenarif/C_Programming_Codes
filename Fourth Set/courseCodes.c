/*
Program that displays the 5 course codes that start with T on the screen.

Sample Run:

Please enter the course codes:
MAT152
TURK102
BÝL102
TEKN231
MUH351

Course codes starts with T:
TURK102
TEKN231
*/


#include <stdio.h>

int main() {
    
int noc; //noc=numberofcourse
  printf("Enter the number of courses (Max 5) : ");
  scanf("%d", &noc);
   
   char cc [noc][10];
   printf("Enter the course codes = ");
   
   for(int i=0; i<noc; i++){
 scanf("%s", cc[i]);
}
 
printf("\n");
printf("Course codes start with T or t : \n");

for(int i=0; i<noc; i++){

if(cc[i][0] == 'T' || cc[i][0] == 't'){
printf("%s \n", cc[i]);

} }   

    return 0;
}
