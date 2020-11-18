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


    //���� : file���� �о���� -> struct�� ���� ->���ο� ���Ͽ� struct ���� ����

    //read it one by one
    for (fscanf("%d", &num != EOF, fp)) {    //������ �� ���� array ����̱� ����

        if (i == 0) { //�� ó�� ���� �������ֱ�
            fscanf("%d", list[i].num, fp);
        }
    }

    return 0;
}