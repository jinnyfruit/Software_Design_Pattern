/*
file name: LAB4
author: Kim, Ji Woo
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int main(){

    FILE* fp_ori,*fp_cyp;

    fp_ori=fopen("original.txt","r");
    fp_cyp=fopen("cypher.txt","w");
    
    int num;
    char line[MAX];
    int temp;
    printf("type a encryption key:");
    scanf("%d",&num);


    while(fgets(line,sizeof(line),fp_ori)!=NULL){  //fgets는 실패시 NULL pointer를 반환한다. ->EOF로 하면 안걸러짐. 
        
        temp=strlen(line);

        for(int i=0;i<temp;i++){    
            if(line[i]<='Z'|| 'a'<=line[i]) 
         {
                if((('Z'-num)<=line[i]&&line[i]<='Z')||(('z'-num)<=line[i]&&line[i]<='z')){
                line[i]-=('Z'-num);
                line[i]+='A'; 
                }   
                else if(('a'<=line[i]&&line[i]<='z')||('A'<=line[i]&&line[i]<='Z')){
                line[i]+=num;
                }    
        }  
        fprintf(fp_cyp,"%c",line[i]); 
    }
    }

    fclose(fp_ori);
    fclose(fp_cyp);

    return 0;
} 
//암호화->완료 