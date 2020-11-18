/*
  this file name is "search string"

  detail:exact version_search the exact string using siliding window method

  made by Ji Woo Kim, modified in 10.06,2020
*/
#include <stdio.h>
#include <string.h>
#define MAX 100
void exact_search(char* getStr, char* searchStr)
{
    int i = 0;
    int cursor = 0, count = 0;

    for (cursor = 0; cursor < MAX; cursor++) {
        if (getStr[cursor] == searchStr[0]) {      /*Check if the first char of the document is the same as the first char of the string.*/
            for (i = 0; i < strlen(searchStr); i++) {         /*Checks whether the number of chars in the line match.*/

                if (getStr[cursor + i] != searchStr[i]) {
                    break;
                }
            }

            if (i == strlen(searchStr)) {
                count++;
            }
        }

    }

    printf("%s is %d used in this text\n", searchStr, count);/*show the result*/
}
int main()
{
    char getStr[MAX];
    char searchStr[MAX];
    int i = 0;
    int cursor = 0, count = 0;    /*cursor is starting point count is the total frequency value determine the correctness of teo strings.*/

    for (i = 0; i < 5; i++) {

        printf("type string:\t");           /*get the string*/
        gets_s(getStr, sizeof(getStr));

        printf("tyep search-string:\t");         /*get the string that user wants to search*/
        gets_s(searchStr, sizeof(searchStr));

        exact_search(getStr, searchStr);

    }
}
