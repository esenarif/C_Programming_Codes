// Write the function named print_sm-bg that printes the largest and smallest of the 3 decimal values sent into it .

#include <stdio.h>
int print_sm_bg(int a[],int n){
    
    int i,min,max;
    
    min=max=a[0];
    for(i=1; i<n; i++){
        if(min>a[i]){
            min=a[i];
        }
        if(max<a[i]){
            max=a[i];       
    }}
    
    printf("Smallest Number is = %d",min);
    printf("\nBiggest Number is = %d",max);
 }

int main(){
    int a[9999],i,n=3,sum;

    printf("Enter 3 numbers = ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    print_sm_bg(a,n);
    
}
