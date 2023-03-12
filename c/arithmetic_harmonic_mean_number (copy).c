#include<stdio.h>
void main()
{
	int a,b;
	float a_m,h_m;
	printf("enter two number A and B:\n");
	scanf("%d%d", &a,&b);
	a_m = (a+b)/2;
	h_m = (a*b)/(a+b);
	printf("arithmetic mean = %f\nHarmonic mean = %f",a_m,h_m);
}
