#include<stdio.h>
int rec(int x)
{
	int f;
	if(x==1)
	return 1;
	else
	f=x*rec(x-1);
	return(f);
}
main()
{
	int a,fact;
	printf("Enter a number");
	scanf("%d",&a);
	fact=rec(a);
	printf("Factorial=%d\n",fact);
	return 0;
}
