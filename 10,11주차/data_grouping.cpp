/*
    file name: stores data to a struct array
    detail: File I/O
    made_by: jinnyfruit
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 50

typedef struct PERSON {
    char name[20];
    int age;
    char hobby[20];
}person;

int main()
{
    person group[MAX];

    int count = 0, i;

    FILE* fp = fopen("personal.txt", "r");
    FILE* fAge = fopen("age.txt", "w");  //to save age data
    FILE* fHobby = fopen("hobby.txt", "w"); //to save hobby data

    if (fp == NULL) {
        printf("Could not be opened");
    }

    while (fscanf(fp, "%s %d %s", group[count].name, &group[count].age, group[count].hobby) != EOF) {


        fscanf(fp, "%s %d %s", group[count].name, &group[count].age, group[count].hobby);

        printf("%s %d %s", group[count].name, group[count].age, group[count].hobby); // struct에 잘 들어갔나 확인
        count++;

    }

    for (i = 0; i < count; i++) {
        fprintf(fAge, "%d\n", group[i].age);    //put age data into a new age file
        fprintf(fHobby, "%s\n", group[i].hobby);    //put hobby data into a new hobby file
    }

    fclose(fp);
    fclose(fAge);
    fclose(fHobby);

    return 0;
}