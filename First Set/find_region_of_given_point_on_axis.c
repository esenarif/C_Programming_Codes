// program that finds the region of the given point on the coordinate axis

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x,y;
	printf("Enter the x and y variables = \n");
	scanf("%d %d", &x, &y);
	
	if(x>0 && y>0){
		printf("Region A");
	} 
	
	else if(x<0 && y>0){
		printf("Region B");
	} 
	
	else if(x<0 && y<0){
		printf("Region C");
	} 
	
	else if(x>0 && y<0){
		printf("Region D");
	} 
	
	else{
		printf("Origin");
	}
	
	return 0;
}
