// Program to find out if the number entered is negative, positive or zero

#include<stdio.h>

int main(){
int number;

printf("Enter the number = ");

scanf("%d",&number);

if(number == 0){

printf("Number is zero");
}

else if(number>0){
 	printf("Number is positive");
}
 
else{
    printf("Number is negative");
}
 
 
 return 0;

 }
