#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter value of n:");
	scanf("%d",&n);
	for(i=n/2;i<=n;i+=2)
	{
		for(j=1;j<n-1;j+=2)
		{
		printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		printf("*");
		}
		for(j=1;j<+n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=n;i>=1;i--)
	{
		for(j=1;j<n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
