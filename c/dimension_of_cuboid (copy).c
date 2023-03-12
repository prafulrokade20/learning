#include<stdio.h>
void main()
{
	float l,w,h;
	float SA, V;
	printf("enter the length,width and height of a cuboid:\n");
	scanf("%f%f%f",&l, &w, &h);
	SA = 2 * (1 * w+l * h+w * h);
	V = 1 * w * h;
	printf("\n the surface area of cuboid: %f\n",SA);
	printf("\n the volume of cuboid:%f\n",V);
}
