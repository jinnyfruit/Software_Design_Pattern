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

    FILE* infile;
    char line[100];
    int lcount = 0;

    if ((infile = fopen("charstream.txt", "r")) == NULL) {
        printf("Line %d: %s", lcount, line);
        exit(1);
    }

    while (*fgets(line, sizeof(line), infile) != EOF) {
        lcount++;
        printf("Line %d:%s", lcount, line);
    }

    fclose(infile);
}