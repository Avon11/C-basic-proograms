#include<stdio.h>
#include<conio.h>
main()
{
	struct student
	{
		char *name[25];
		int id;
		float per;
	}s1,*s2;
	printf("\nEnter name :");
	scanf("%[^\n]",s1.name);
	printf("\nEnter ID:");
	scanf("%d",&s1.id);
	printf("\nEnter percentage:");
	scanf("%f",&s1.per);
	s2=&s1;
	printf("%s\t%d\t%f",s2->name,s2->id,s2->per);
}
