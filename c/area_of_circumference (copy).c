#include<stdio.h>
void main()
{
	int rad;
	float pi = 3.14,area,ci;
	printf("enter the radius of circle:");
	scanf("%d", &rad);
	area = pi * rad * rad;
	printf("\n area of circle:%f",area);
	ci=2 * pi * rad;
	printf("circumference:/%f",ci);
}

