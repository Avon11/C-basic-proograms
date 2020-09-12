#include<stdio.h>
main()
{
	int loc,ele,n,arr[20],i;
	printf("Enter Size of Array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter element :");
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the location of element you want to enter:");
	scanf("%d",&loc);
	printf("\nEnter new Element:");
	scanf("%d",&ele);
	for(i=(n-1);i>=loc-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[loc-1]=ele;
	for(i=0;i<n+1;i++)
	{
		printf("%d\n",arr[i]);
	}
}
