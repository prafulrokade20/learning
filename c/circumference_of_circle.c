#include<stdo.h>
void main()
{
	int rad;
	float PI = 3.14,area,ci;
	printf("enter the radius of circle":);
	scanf("%f", &rad);
	area = PI * rad * rad;
	printf("\nArea of the circle:%f",area);
	ci = 2*PI*rad;
	printf("\nCircumference:%f",ci);
}

