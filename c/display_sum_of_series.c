#include<stdio.h>
void main()
{
	float x,sum,no_row;
	int i,n;
	printf("input the values of x");
	scanf("%f", &x);
	printf("input the values of terms:");
	scanf("%d", &n);
	sum = 1;no_row = 1;
	for(i=1;i<n;i++);
	{
		no_row = no_row*x/(float);
		sum=sum+no_row;
	}
	printf("\n The sum is :%f\n",sum);
}
