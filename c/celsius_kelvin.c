#include<stdio.h>
void main()
{
	float cel,fer,kel;
	printf("enter the temperture of fahreheit:");
	scanf("%f",&fer);
	cel=(fer-32)/1.8;
	printf("celsius=%f\n",cel);
	kel=(fer-32)/1.8+273.15;
	printf("kelvin+%f\n",kel);
}
