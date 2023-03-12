#include<stdio.h>
void main()
{
	int n;
	float sum=0,x,i;
	printf("enter the values of x:");
	scanf("%f", &x);
	printf("\nenter the values of n:");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(power(x,i)/fact(i));
	}
	printf("sum of series is:%f",sum);
