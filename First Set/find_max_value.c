// Program that finds the maximum of the two numbers given as different from each other.

#include <stdio.h>

int main(){

int a, b;

printf("Enter two variables\n");

scanf("%d%d", &a,&b);

if(a>b){
    
   printf("%d is maximum variable", a); 
    
} else{
     printf("%d is maximum variable", b);    
}

return 0;
}
