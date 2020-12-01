/*
file name: 카이사르 암호화 복호화
author: Kim, Ji Woo
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int main(){

    char line[MAX];
    printf("type a string\n");
    gets(line);
    int temp=strlen(line);
    
    for(int i=0;i<temp;i++){    
        if(line[i]<='Z'|| 'a'<=line[i]) 
        {
            if(('X'<=line[i]&&line[i]<='Z')||('x'<=line[i]&&line[i]<='z')){
                line[i]-='X';
                line[i]+='A'; 
            }   
            else if(('a'<=line[i]&&line[i]<='z')||('A'<=line[i]&&line[i]<='Z')){
                line[i]+=3;
            }    
        }  
        printf("%c",line[i]); 
    }
    printf("\n");
    return 0;
} 
//암호화->완료 