#include<stdio.h>
main()
{
	int arr[4][4];
	int i,j;
	printf("Enter Array:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\narr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nTranpose of Matrix is:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nArr[%d][%d]=%d",i,j,arr[j][i]);
		}
	}
	
}
