#include<stdio.h>
main()
{
	int i,n,loc,arr[20];
	printf("Enter size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter element:");
		scanf("%d",&arr[i]);
	}
	printf("Enter location of element you want to delete:");
	scanf("%d",&loc);
	for(i=loc-1;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d\n",arr[i]);
	}
}
