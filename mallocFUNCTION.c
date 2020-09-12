#include<stdio.h>
#include<stdlib.h>
int mall(int x)
{
	int i,*p;
	p=(int *)malloc(x * sizeof(int));                 // n is number of elements
	for(i=0;i<x;i++)
	{
	printf("enter number at location %d",i+1);
	scanf("%d",(p+i));
	}
	for(i=0;i<x;i++)
	{
		printf("%d\n",*(p+i));
	}
	free(p);
}
int call(int y)
{
	int j,*p;
	p=(int *)calloc(y, sizeof(int));
	for(j=0;j<y;j++)
	{
		printf("Enter number at location %d",j+1);
		scanf("%d",(p+j));
	}
	for(j=0;j<y;j++)
	{
		printf("%d\n",*(p+j));
	}
	free(p);
}
int rel(int z)
{
	int k,*p;
    p=(int*)realloc(p,z*sizeof(int));
	for(k=0;k<z;k++)
	{
		printf("Enter number at location %d",k+1);
		scanf("%d",(p+k));
	}
	for(k=0;k<z;k++)
	{
		printf("%d\n",*(p+k));
	}
	free(p);
}
main()
{
	int n,m,*p;
	printf("\nHow many integers u want to allocate the memory:");
	scanf("%d",&n);
    mall(n);
    call(n);
    printf("\nEnter reallocation size");
    scanf("%d",&m);
    rel(m);
}
