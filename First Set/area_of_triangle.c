// Program that calculates the area of the triangle whose base and height values are given as integers.

#include <stdio.h>

int main() {
	int height;
	int base;
	int area;
	
	height=5;
	base=12;

	area=(height*base)/2;
	printf("Area of triangle= %d", area);
	return 0;
}
