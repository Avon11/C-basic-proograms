#include<stdio.h>
int rec(int);
main()
{
	int a,i;
	printf("Enter range :");
	scanf("%d",&a);
	int x=1,y;
	for(i=1;i<=a;i++)
	{
		printf("%d,",rec(x));
		x++;	
	}
	return 0;
}
int rec(int b)
{
	if(b==0||b==1)
	return b;
	else
	return (rec(b-1)+rec(b-2));
	
}
