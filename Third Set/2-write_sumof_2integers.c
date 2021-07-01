// A function that writes the sum of 2 integers sent into it..

// Online C compiler to run C program online
#include <stdio.h>

int sum(int,int);

int main() {
  int a,b;
    
    printf("Enter two integers = \n");
    scanf("%d%d", &a, &b);
    
    printf("%d + %d = %d", a,b, sum(a,b));
    
    return 0;
}

int sum(int x, int y){
return(x+y);
}
