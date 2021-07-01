// Write the function that returns the number of digits of the integer sent to it with an appropriate main function.

#include <stdio.h>

int digitCount(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}

int main(){
    int num;
    printf("Enter the integer = ");
    scanf("%d",&num);
    int numberofDigit=digitCount(num);
    printf("Number of digits of the integer is %d",numberofDigit);
    return 0;
}
