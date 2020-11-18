/*
    file name: stores data to a struct array
    detail: File I/O
    made_by: jinnyfruit
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct GROUP {
    int num;
    int arr[100];
}group;

int main()
{
    FILE* fp;
    FILE* data_save;
    fp = fopen("nums.txt", "r"); //open the data file
    data_save = fopen("data.txt", "w"); //save data to a new file

    group list[3];
    int i, j, num, countnum = 0;

    if (fp == NULL) {
        printf("Can't found the file");     //if the file isn't exist, error message
    }


    //순서 : file에서 읽어오기 -> struct에 저장 ->새로운 파일에 struct 내용 저장

    //read it one by one
    for (fscanf("%d", &num != EOF, fp)) {    //어차피 맨 끝은 array 요소이기 때문

        if (i == 0) { //맨 처음 값은 저장해주기
            fscanf("%d", list[i].num, fp);
        }
    }

    return 0;
}