/*
file name: Term Project
author:jinnyfruit
part1. Setup
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 35
#define NUM 50
typedef struct DATA{
    int tag; //unique number
    char resistered[MAX];
    char fee;
    char name[25];
    int age;
    char organization[MAX];
    char job[MAX]; 
}Data;
typedef struct Node_Data{
    int tag; //unique number
    char resistered[MAX];
    char fee;
    char name[25];
    int age;
    char organization[MAX];
    char job[MAX]; 
    struct Node_Data* next;   
}Node;
Data data[NUM];
Node node[NUM];
int count=0;    //counts the number of elements in data
int main(){
    
    FILE* fp_d,*fp_n;

    fp_d=fopen("registration_data.txt","r");    //for array
    fp_n=fopen("registration_data.txt","r");    //for nodes

    if(fp_d==NULL||fp_n==NULL){
        printf("Can't read file!");
        return 0;   //defensive coding
    }

    
   
    fclose(fp_d);
    fclose(fp_n);

    return 0;
}