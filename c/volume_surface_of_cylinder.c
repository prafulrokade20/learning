#include<stdio.h>
void main()
{
	float radius,height;
	float surface_area,volume;
	printf("enter the values of radius & height of cylinder:\n");
	scanf("%f%f",&radius ,&height);
	surface_area=2*(22/7)*radius*(radius+height);
	volume=(22/7)*radius*height;
	printf("surface area of cylinder:%3f", surface_area);
	printf("\n volume of the cylinder:%3f",volume);
}

	

