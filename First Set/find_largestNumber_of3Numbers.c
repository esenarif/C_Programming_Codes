// Program that finds the largest of the 3 numbers entered

#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int a,b,c, LargestNumber;
  
  c = LargestNumber;
  
  printf("Enter 3 numbers= \n");
  scanf("%d %d %d", &a,&b,&c);
  
  
  if(a>c){
      LargestNumber=a;
  }
  
  if(b>c){
      LargestNumber=b;
  }

printf("Largest number is = %d" , LargestNumber);
       return 0;
       
 }
