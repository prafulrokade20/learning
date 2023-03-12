#include<stdio.h>
void main()
{
	int w, x, y, z;
	printf("enter the withdraw amount: ");
	scanf("%d", &w);
	x = w/10;
	w = w%10;
	y = w/5;
	w = w%5;
	z = w;
	printf("notes of 10 :%d\n",x);
	printf("notes of 5 :%d\n",y);
	printf("notes of 1 :%d\n",z);
}
