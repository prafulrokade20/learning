#include<stdio.h>
int main(){
	int mat[3][3],i,j,max;
	printf("enter any 3*3 matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&mat[i][j]);
	}
	max=mat[0][0];
	for(j=0;j<3;j++)
	{
		for(j=0;j<3;j++)
		{
			if(max<mat[i][j])
				max=mat[i][j];
		}
		printf("largest element=%d",max);
		 return 0 ;
	}
}

