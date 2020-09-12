#include<stdio.h>
int array(int);
main()
{
	int i,j,k,n,arr[200],temp;
	printf("Enter size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter array[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(k=0;k<n-1-i;k++)
		{
			if(arr[k]>arr[k+1])
			{
				temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
			
		}

	}
		printf("\nShorted array is:%d",n);

}
int array(int a)
{
	int b,arr[20];
	for(b=0;b<a;b++)
	{
		printf("\nArray[%d]=%d",b,arr[b]);
	}
}
