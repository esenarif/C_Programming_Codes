// Write the function that produces the largest and smallest elements of an integer array sent to it, in accordance with the main function below. 
// (Access to array elements should be done according to offset-address increment notation.)

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
 
 int bigSmallFind(int a[],int n)
 {
 	int smallest,biggest,i;
 	smallest=biggest=a[0];
    for(i=1; i<n; i++)
    {
         if(smallest>a[i])
		  smallest=a[i];   
		   if(biggest<a[i])
		    biggest=a[i];       
    }
    
    printf("Smallest is  = %d",smallest);
    printf("\nBiggest is = %d",biggest);
 }


int main(){
    int a[1000],i,n,sum;
   
    printf("Enter size of the array = ");
    scanf("%d", &n);
 
    printf("Enter the elements in array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    bigSmallFind(a,n);
 
 
    
}
