// program that finds out whether the number entered on the keyboard is even or odd

#include<stdio.h>

int main(){
int number;

printf("Enter the number = ");

scanf("%d",&number);

if(number % 2 == 0){

printf("Number is even");
}

else{
printf("Number is odd");
}

return 0;

 }
