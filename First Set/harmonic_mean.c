// Program that finds the harmonic mean of the 2 numbers entered

#include <stdio.h>

int main(void) {
	
	double x,y,z;
	
	double HarmonicMean;
        
printf("Enter first number = ");
	scanf("%lf",&x);
	
printf("Enter second number =");
	scanf("%lf",&y);
	
printf("Enter third number = ");
	scanf("%lf",&z);
	
HarmonicMean = 3 / ((1/x)+(1/y)+(1/z));
	
printf("HarmonicMean=%2.2f", HarmonicMean);
	return 0;
}
