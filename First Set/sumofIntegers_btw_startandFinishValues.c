// program that prints the sum of all integers between start and finish values that entered.

#include <stdio.h>

int main() {
    
    int start, end, sum;
    
    printf("Enter start and end value : \n");
    scanf("%d %d", &start, &end);
    
    while(start<end){
	
    sum=sum + start;
	
    start++;
    }
	
    printf("Sum of the numbers = %d", sum);
    
    return 0;
}
