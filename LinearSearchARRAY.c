#include<stdio.h>
main()
{
	int n,i,ele,arr[100],loc=0;
	printf("Enter size of Array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Array[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter elemnet you want to Search:");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(arr[i]==ele)
		{
			printf("\nElement found at %d location",i+1);
			loc=loc+1;
			break;
		}

	}
		if(loc==0)
		{
			printf("Element not found");
		}
	
	
}
