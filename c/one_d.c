#include<stdio.h>
void main()
{
	int
		a[3],b[3],c[3],d[3],e[3],f[3],i;
	printf("enter element of A:\n\n");
	for(i=0;i<3;i++)
		scanf("%d",&a[i]);
	printf("enter element of b:\n\n");
	scanf("%d",&b[i]);
	printf("\nAddtion of two arrays:");
	for(i=0;i<3;i++)
	{
		c[i]=a[i]+b[i];
		printf("\t%d",c[i]);
	}
	printf("\nSubtraction of two arrays:");
	for(i=0;i<3;i++)
	{
	d[i]=a[i]-b[i];
		printf("\t%d",d[i]);
	}
	printf("\nMultiplication of two arrays:");
	for(i=0;i<3;i++)
	{
		e[i]=a[i]*b[i];
		printf("\t%d",e[i]);
	}
	printf("\nDivision of two arrays:");
	for(i=0;i<3;i++)
	{
		f[i]=a[i]/b[i];
		printf("\t%d",f[i]);
	}
}
		
