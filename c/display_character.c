#include<stdio.h>
void main()
{
	char ch;
	printf("enter your character:\t");
	scanf("%c",&ch);
	printf("your character:%c\n",ch);
	printf("previous character:%c\n",ch-1);
	printf("next character:%c\n",ch+1);
}

