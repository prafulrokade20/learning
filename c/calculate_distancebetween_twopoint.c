#include<stdio.h>
void main()
{
	int num1, num2, x1, x2, y1, y2;
	float distance;
	printf("enter the x and y coordinates of first point: ");
	scanf("%d%d", &x1, &y1);
	printf("enter the x and y coordinates of second point: ");
	scanf("%d%d", &x2, &y2);
	num1 = x2 - x1;
	num2 = y2 - y1;
	distance = ((num1 * num1) + (num2 * num2));
	printf("distance: %.2f",distance);
}

