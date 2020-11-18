#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

#define BAR 0
#define BELL 1
#define CHERRY 2
#define LEMON 3

void main()
{
    int i;
    int slot[3], count[3] = { 0 };

    srand(time(NULL));
    while (1) {
        printf("Welcome to KW Land\nPlease pull the slot machine!!\n\n");

        for (i = 0; i < 3; i++) {

            slot[i] = rand() % 4; //produce random number

            if (i == 0)
                printf("First\t");
            else if (i == 1)
                printf("Second\t");
            else
                printf("Third\t");

            if (slot[i] == BAR)
                printf("BAR\n");
            else if (slot[i] == BELL)
                printf("BELL\n");
            else if (slot[i] == CHERRY)
                printf("CHERRY\n");
            else
                printf("LEMON\n");
        }

        printf("\nPaid out: ");

        if (slot[0] == CHERRY && slot[1] == CHERRY && slot[2] == CHERRY) {
            printf("Jackpot");
            count[0]++;
        }
        else if (slot[0] == CHERRY || slot[1] == CHERRY || slot[2] == CHERRY) {
            printf("Dime");
            count[1]++;
        }
        else if (slot[0] != CHERRY && (slot[0] == slot[1] && slot[1] == slot[2])) {
            printf("Nickel");
            count[2]++;
        }
        else
            printf("Nothing");

        printf("\n\nJackpot = %2d, Dime = %2d, Nickel = %2d", count[0], count[1], count[2]);

        _getch();
        system("cls");
    }
}