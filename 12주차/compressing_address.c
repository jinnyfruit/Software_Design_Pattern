/*
file name: compressing data - address
author: Kim, Ji Woo
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE* fp=fopen("address.txt","r");

    if(fp==NULL){
        printf("Can not read file!");
    }
    
    return 0;
}