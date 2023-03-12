#include<stdio.h>
void main()
{
	int
		a[10],i,sum=0,mul=1;
		printf("enter element:\n\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
		else
		{
			mul=mul*a[i];
		}
	}
	printf("\nsummation of even number=%dn",sum);
	printf("multiplication of odd number=%d",mul);
}

