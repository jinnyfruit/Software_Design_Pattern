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

    int i;
    FILE* myFile;
    myFile = fopen("myFile.txt", "r");

    /*read the input file one character at a time, and write the
    character to the screen.*/

    if (myFile == NULL)
        printf("\nFile could not be opened");
    else {
        char ch = fgetc(myFile);

        while (ch != EOF) { //EOF is under 0, so if ch returns any number that bigger or same as 0 it is not EOF
            putchar(ch);
            ch = fgetc(myFile); //return value changes everytime
        }
        printf("\nFinished printing the file\n");
        fclose(myFile);
    }
}