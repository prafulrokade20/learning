#include<stdio.h>
void main()
{
	float l,b,h;
	float SA,V;
	printf("enter the lenght,breadth,height:\n");
	scanf("%f%f%f",&l,&b,&h);
	SA =2*(l*b+l*h+b*h);
	V=l*b*h;
	printf("\nsurface area of the cuboid: %f\n",SA);
	printf("\nvolume of the cuboid: %f\n",V);
}
