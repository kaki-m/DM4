#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dice1,dice2,sum;

	printf("Rolling the dice...\n");

	dice1 = rand();
	dice1 = dice1 % 6 +1;
	dice2 = (rand() % 6) + 1;

	printf("Die 1:%d\nDie 2:%d\n",dice1,dice2);
	sum = dice1+dice2;

	printf("Total value: %d\n",sum);

	return 0;
}
