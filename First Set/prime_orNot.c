#include<stdio.h>

main() {
    
    int i,number,count=0;
    
    printf("Enter any number = ");
    scanf("%d",&number);
    
    for(i=2;i<number;i++) {
       if(number%i==0) {
           count++;
      }
        
    } 
      
    if(count==0) {
        printf("Number is prime");                    
    }
    else {
        printf("Number is not prime"); 
    }
    return 0;
}