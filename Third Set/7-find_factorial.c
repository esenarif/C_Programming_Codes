// The function that returns the factorial of the integer sent into it.

#include <stdio.h>

int factorial(int number){
    
    int fact;
    fact=1;
    
    for(; number>0; number--){
        
        fact=fact*number;
    }
    
    return fact;
    
}

int main() {
    
    int num;
    printf("Enter the number = ");
    scanf("%d", &num);
    printf("Factorial of entered number is = %d", factorial(num));
}
