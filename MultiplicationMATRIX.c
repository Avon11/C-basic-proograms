#include<stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,mul;
	printf("Enter Matrix 1:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Array[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Matrix 2:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Array[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			
			}	
		}
		
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n%d",c[i][j]);
		}
	}
}
