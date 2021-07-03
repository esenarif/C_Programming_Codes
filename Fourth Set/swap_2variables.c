// Function called swap that transfers the values of two variables sent to it with using pointer based function. Example: x=1 y=2 after calling the swap x=2 y=1

#include <stdio.h>

int main()
{
    int x, y;
    printf(" Enter the value of x = ");
    scanf("%d", &x);
    
    printf("\n Enter the value of y = ");
    scanf("%d", &y);
  
    int temp = x;
    x = y;
    y = temp;
  
    printf("\n After Swapping:  x = %d, y = %d", x, y);
    return 0;
}
