/*
 ============================================================================
 Name        : Lab1.c
 Author      : Cameron Tucker, Brent Schultz
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main(void) {
	printf("\nEnter the radius of the circle\n");
	int radius;
	float area;
	scanf("%d",&radius);				//using inputing radius
	area = radius * radius * PI;
	printf("\nThe area of the circle is %.3f\n", area);
return 0;
}
