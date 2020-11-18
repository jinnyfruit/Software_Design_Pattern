#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BAR 0
#define BELL 1
#define CHERRY 2
#define LEMON 3      

void main()
{
    int i;
    int slot[3];     

    srand(time(NULL));

    printf("Welcome to KW Land\n Please pull the slot machine!!\n\n");

    for (i = 0; i < 3; i++) {

        slot[i] = rand() % 4; //produce random number

        if (i == 0)                //show the result of the random three slot
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

    printf("\nPaid out: ");     //determine the final result of rewards

    if (slot[0] == CHERRY && slot[1] == CHERRY && slot[2] == CHERRY) {    //Jackpot if all three are cherry
        printf("Jackpot");
    }
    else if (slot[0] == CHERRY || slot[1] == CHERRY || slot[2] == CHERRY) { //Dime if at least one cherry and less than 3
        printf("Dime");
    }
    else if (slot[0] != CHERRY && (slot[0] == slot[1] && slot[1] == slot[2])) {
        printf("Nickel");
        //The same thing, not cherry, is nickel when repeated 3 times
    }
    else
        printf("Nothing");
}