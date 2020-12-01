#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int i;
	int slot[3];
	int luck = 0;   //Weight for result

	srand(time(NULL));

	printf("Welcome to KW Land\n Please pull the slot machine!!\n\n");

	for (i = 0; i < 3; i++) {

		slot[i] = rand() % 4; //produce random number

		if (i == 0)
			printf("FIrst \t");
		else if (i == 1)
			printf("Second\t");
		else
			printf("Third\t");

		if (slot[i] == 0)
			printf("BAR \n");
		else if (slot[i] == 1)
			printf("BELL \n");
		else if (slot[i] == 2)
			printf("CHERRY \n");
		else
			printf("LEMON \n");
	}

	for (i = 0; i < 3; i++) {
		if (slot[i] == 2)
			luck++;
	}
	printf("Paid out: ");

	if (luck == 3)
		printf("Jackpot");
	else if (luck == 2 || luck == 1)
		printf("Dime");
	else if (luck == 0 && (slot[0] == slot[1] && slot[1] == slot[2]))
		printf("Nickel");
	else
		printf("Nothing");
}
