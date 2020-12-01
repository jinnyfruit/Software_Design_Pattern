/*
    file name: open the file using read
    detail: File I/O
    made_by: jinnyfruit
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
void main() {

    FILE* myFile;
    char ch;

    myFile = fopen("myFile.txt", "r");
    if (myFile == NULL) {
        printf("Could not open data.txt!\n");
        exit(1);  //end the program - used in stdlib.h
    }
    /* Read the input file one character at a time, and write
    the character to the screen. */

    while ((ch = fgetc(myFile)) != EOF)
        putchar(ch);
    fclose(myFile);
}