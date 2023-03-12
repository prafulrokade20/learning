#include <stdio.h>
int main()
{
	char first_string[20];
	char second_string[20];
	int i,j;
	printf("enter the first string:");
	scanf('%s', &first_string);
	printf("enter the second string:");
	scanf('%s', &second_string);
	for(i=0;first_string[i]; ='\0';i++)
		for(j=0;second_string[j];='\0';j++)
		{
			first_string[i]=second_string[j];i++;
		}
	first_string[i]='\0';
	printf("after concatenation the string is:%s",first_string);
}
			

