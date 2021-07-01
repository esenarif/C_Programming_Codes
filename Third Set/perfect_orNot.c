// The function that finds whether the integer sent into it is perfect or not.

#include<stdio.h>
 
 int check(int number){
   
   int sum = 0;

   for(int i=1;i<=number/2;i++){
       if(number%i==0){
           sum += i;
   }}

   if( sum == number ){
   return 0;
}
   else{
       
    return 1;
   
       
   }}

 int main(){
     int number, sum=0;

     printf("Enter Number = ");
     scanf("%d",&number);

     if(check(number) == 0){
     printf("%d is perfect number.\n",number);
     }
     
     else{
     printf("%d is not perfect number.\n",number);
         
     }
     return 0;
 }
