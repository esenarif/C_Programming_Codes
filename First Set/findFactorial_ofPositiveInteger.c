// Program calculates the factorial value of a positive integer entered from the keyboard, and displays the result

#include <stdio.h>

 int main() {

int i, number;
int factorial=1;

printf("Enter positive integer = ");
scanf("%d", &number);

for(int i=1; i<=number; i++){
    
    factorial=factorial*i;
}

printf("Factorial is = %d", factorial);

 return 0;

 }
