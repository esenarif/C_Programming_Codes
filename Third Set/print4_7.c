// Write the function named print4_7 that writes the numbers that can be divided into 4 and 7 in the range according to the starting and ending values sent into it.

#include <stdio.h>

void print4_7(int low,int high){
    
    printf("The Numbers divided by 4 from %d to %d are = ",low,high);
    for(int i=low;i<=high;i++){
        if(i%4==0){
            printf("%d",i);
            printf(" ");
        }
    }
    
	printf("\nThe Numbers divided by 7 from %d to %d are = ",low,high);
    for(int i=low;i<=high;i++){
        if(i%7==0){
            printf("%d",i);
            printf(" ");
        }
    }
}

int main() {
    int four[20],seven[20],low,high;
    printf("Enter starting value = ");
    scanf("%d",&low);
    printf("Enter ending value = ");
    scanf("%d",&high);
    
    print4_7(low,high);

    return 0;
}
