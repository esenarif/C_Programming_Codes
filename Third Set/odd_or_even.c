// The function named odd_ even to find out whether the integer sent into it is odd or even and prints to the screen.

#include <stdio.h>  
#include <stdlib.h>

void number(int num){
    
    printf("Enter the number = \n");
    scanf("%d",&num);
    
}


int main() {
    int a;
    number(a);
    
    if(a%2 == 0)
    {
        printf("Number is even");
    }
    else if (a<0){
        printf("Enter the number that greater than zero");
    }
    
    else{
        printf("Number is odd");
    }
    return 0;
}
