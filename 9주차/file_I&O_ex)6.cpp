/*
    file name: open the file using read
    detail: File I/O
    made_by: jinnyfruit
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
int main() {

    FILE* infile, * outfile;
    char ch;

    infile = fopen("data.txt", "r");
    if (infile == NULL) {
        printf("Could not open data.txt!\n");
        exit(1);
    }
    outfile = fopen("samedata.txt", "w");
    if (outfile == NULL) {
        printf("Could not open samedata.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(infile)) != EOF)
        fputc(ch, outfile);
    fclose(infile);
    fclose(outfile);

    return 0;
}