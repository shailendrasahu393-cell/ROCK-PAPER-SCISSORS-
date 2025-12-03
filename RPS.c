#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int com;
	char u,c,i='Y';
	printf("Welcome to Rock - Paper - Scissors!\n");
	printf("Instructions:-\n");
	printf("Press R for Rock!\n");
	printf("Press P for Paper!\n");
	printf("Press S for Scissors!\n");
	srand(time(NULL));
	while(i='Y')
	{
		printf("\nPlease select your move : ");
		scanf("%s",&u);
		fflush(stdin);
		com= rand()%3;
		if(com==0)
		{
			c='R';
		}
		if(com==1)
		{
			c='P';
		}
		if(com==2)
		{
			c='S';
		}
		if((u=='R')&&(c=='S')||(u=='S')&&(c=='P')||(u=='P')&&(c=='R'))
		{
			printf("Computer's move : %c",c);
			printf("\nYou Win!");
		}
		if((u=='R')&&(c=='P')||(u=='S')&&(c=='R')||(u=='P')&&(c=='S'))
		{
			printf("Computer's move : %c",c);
			printf("\nYou Lose!");
		}
		if(u==c)
		{
			printf("\nComputer's move : %c",c);
			printf("\nMatch tie!");
		}
	
		printf("\nDo you want to play again? (Y,N) : ");
		fflush(stdin);
		scanf("%s",&i);
		if(i=='N')
		{
			break;
		}
	}
	printf("\nThankyou for Playing!");
}
