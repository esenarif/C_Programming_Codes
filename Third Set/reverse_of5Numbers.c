// Code the C program that writes 5 integers entered on the keyboard in the reverse order.

#include<stdio.h>

int main() {

 int n=5;
 int numbers[n];
 int i;
 
  printf("Enter 5 numbers = ");

 
 for (i=0; i<n;i++){
  scanf("%d",&numbers[i]);
 }

 printf("Reverse of the numbers = \n");
 for (i=n-1; i>=0;i--) {
  printf("%d\n",numbers[i]);
 }
 return 0;
}
