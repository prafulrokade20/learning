#include<stdio.h>~                                                                                             
{
	char s[1000],C;
	int i,count=0;
	printf("enter the string: ");
	
	printf("enter the character to be searched: ");
	for(i=0;s[i];i++)
	{
		if(s[i]==C)
		{
			count++;
		}
	}
	printf("character '%c' occur %d times \n",C,count);
	return 0;
}
