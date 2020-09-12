#include<stdio.h>
#include<string.h>
main()
{
	char sen[50],small[50],large[50];
	int l;
	printf("Enter sentance:");
	gets(sen);
	l=strlen(sen);
	printf("\nString=%s, Length=%d ,  %s ",sen,l,strupr(sen));
}
