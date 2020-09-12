#include<stdio.h>
main()
{
	int arr[5]={2,2}, sum,squre,*ptr,i;
	ptr=arr;
	for(i=0;i<5;i++)
	{
		squre=(*(ptr+i))*(*(ptr+i));
		sum+=squre;
		
	}
	printf("Sum is %d",sum);
}
