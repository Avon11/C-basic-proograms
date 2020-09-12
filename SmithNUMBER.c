#include<stdio.h>
#include<math.h>
int digit();
int sumofdigit();
int factor();
int sumoffactor();
main()
{
	int n,sum1,sum2;
	printf("Enter number:");
	scanf("%d",&n);
	sumofdigit(n);
//	sum1=sumofdigit();
	//sum2=sumoffactor();
//	if(sum1==sum2)
//	{
//		printf("\n%d is Smith number.",&n);
//	}
//	else
//	printf("\n%d is not Smith number.",&n);
	
}
int sumofdigit(int num)
{
	int reminder, sum;
	for(sum==0;num>0;num=num/10)
	{
		reminder=num%10;
		sum=sum+reminder;
	}
	return sum;	
}
int 

