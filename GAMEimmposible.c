#include<stdio.h>
 main()
{
	int ui=0,num=21,i,j=0,k;
	printf("----------------------------WELCOME TO MATCHSTICKS GAME-----------------------------\n");
	printf("-----------------------Created & Designed By ABHINAV JAT RANA-----------------------\n");
	printf("Rules of game are as follows:\n1.There are 21 Matchsticks.\n2.You have to pick 1,2,3 or 4 matchsticks.\n3.After you pick cpu does its picking.\n4.Whoever is forced to pick up the last matchsticks loses the game.\n5.YOU CANNOT LEFT THE GAME UNTIL ALL THE MATCHSTICKS GET FINISHED AND YOU ARE NOT ALLOWED TO PICK 0 MATCHSTICKS.\n6.WINNER WILL GET 1000RS CASH PRICE.");
	printf("\n-------------------------------------------Lets START-------------------------------------------------------------------");
	for(i=1;i<=10;i++)
	{
		printf("\nEnter no. of matchsticks you want to pick:");
		scanf("%d",&ui);
		if(ui<=4&&ui>0)
		{
			j=5-ui;
			printf("\nCPU picks up: %d",j);
			num=num-(ui+j);
			printf("\nNO. of matchsticks left=%d",num);
			if(ui=1&&num==1)
			{
				printf("\nYou ARE A LOOOOOSER. BETTER LUCK NEXT TIME.");
				break;
			}
	    }
		if(ui<0||ui>4)
		{
		
		printf("WRONG INPUT.PLEASE START FROM BEGNINING.");
		break;
	}
		
	}
}
