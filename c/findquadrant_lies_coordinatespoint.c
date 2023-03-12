#include<stdio.h>
void main()
{
	int co1,co2;
	printf("input the values x and y coordinates:");
	scanf("%d%d",&co1, &co2);
	if( co1 > 0 && co2 > 0)
		printf("the coordinates point (%d,%d) lies on the first quadrant:\n",co1,co2);
	else if( co1 < 0 && co2 > 0)
		printf("the coordinates point (%d,%d) lies on the second quadrant:\n",co1,co2);
	else if( co1 < 0 && co2 < 0)
		printf("the coordinates point (%d,%d) lies on the third quadrant:\n",co1,co2);
	else if ( co1  > 0 && co2 < 0)
		printf("the coordinates point (%d,%d) lieson the fourth quadrant:\n",co1,co2);
	else if ( co1 == 0 && co2 == 0 )
		printf("the coordinates point (%d,%d) lies on the origin quadrant:\n",co1,co2);
}
