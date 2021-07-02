#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dice1,dice2,sum;
	
	char name[20];
	printf("What is your name?\n");
	scanf("%s",name);
	printf("Hello,%s\n",name);
	printf("Rolling the dice...\n");

	printf("Rolling the dice...\n");

	dice1 = rand();
	dice1 = dice1 % 6 +1;
	dice2 = (rand() % 6) + 1;

	printf("Die 1:%d\nDie 2:%d\n",dice1,dice2);
	sum = dice1+dice2;

	printf("Total value: %d\n",sum);
	if(sum > 7){
		printf("You won\n");
	}
	else
	{
		printf("%s lost\n",name);
	}


	return 0;
}
