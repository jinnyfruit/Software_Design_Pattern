/*
file name: Term Project
author:jinnyfruit
part1. Setup
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 35
typedef struct Data{
    int tag; //unique number
    int resistered[MAX];
    char fee;
    char name[25];
    int age;
    char organization[MAX];
    char job[MAX]; 
}data;
int main(){
    
    FILE* fps=fopen("registeration_data.txt","r");

    if(fps==NULL){
        printf("error: file can not read!");
    }
    else{
        //first save it in the struct array, next save it in the linked list

        data person[MAX];
        int i=0;
        while(fscnaf(fps,"%d/%d-%d-%d/%s/%s/%d/%s/%s",&person[i].tag,&person[i].resistered,person,person[i].fee,person[i].name,&person[i].age,))
    }

    return 0;
}