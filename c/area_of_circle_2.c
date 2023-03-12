#include<stdio.h>
void main()
{
	int rad;
	float PI = 3.14,area,ci;
	printf("enter radius of circle:");
	scanf("%d", &rad);
	area = PI * rad;
	printf("\nArea of the circle:%f",area);
	ci = 2 * PI * rad;
	printf("\nCircumference:%f",ci);
}
