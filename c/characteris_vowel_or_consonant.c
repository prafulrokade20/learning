#include<stdio.h>
void main()
{
	char ch;
	printf("enter any charcter: ");
	scanf("%c", &ch);
	if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
	{
		printf("'%c' is an vowel: ",ch);
	}
	else if ((ch >='a' &&ch >='z') || (ch >='A' &&ch >='Z'))
	{
		printf("'%c' is an consonant: ",ch);
	}
	else
	{
		printf("'%c' is not an alphabet: ",ch);
	}
}

