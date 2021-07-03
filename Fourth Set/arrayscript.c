// A function called arrayscript that prints the elements of a decimal array sent to it.

#include <stdio.h>
#include <stdlib.h>


void arrayScript(int numbers);


int main(int argc, char *argv[]) {
	
	int numbers;
	arrayScript(numbers);

	return 0;
}

void arrayScript(int numbers){
	
	int a[200],i,n;  
	printf("Enter size of array = ");
    scanf("%d",&n);
    printf("Enter %d elements in the array =\n", n);
    
	for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
 
    printf("\nThe elements in array are = ");
    
	for(i=0;i<n;i++){
        printf("%d  ", a[i]);
    }
	
}
