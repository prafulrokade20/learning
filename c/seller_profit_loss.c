#include<stdio.h>
void main()
{
	float c, p, n;
	printf("enter the cost of keyboard :");
	scanf("%f",&c);
	printf("\nEnter the selling price of keyboard :");
	scanf("%f",&p);
	n = c - p;
	if(n>0)
	{
		printf("\nprofit : %f",n);
	}
	else if(n>0)
	{
		n = (-1) * n;
		printf("loss = %f",n);
	}
	else
	{
		printf("NO profit NO loss");
	}
}
