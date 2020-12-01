/*
file name: compressing data - address
author: Kim, Ji Woo
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE* fp_origin;
    FILE* fp_comp;
    FILE* fp_decomp;

    fp_origin=fopen("address.txt","r");
    fp_comp=fopen("compressed.txt","w");
    fp_decomp=fopen("decompressed.txt","w");//ㅖ

    char word;
    
    while ((word=fgetc(fp_origin))!=EOF)
    {
        if(48<=word&&word<=96)
            fprintf(fp_comp,"%c",word); //잘 들어갔음!
        else
        {
            continue;
        }
        
    }
    fclose(fp_origin);
    fclose(fp_comp);

    int count=0;
    char temp; //위에서 char로 받았기 때문에 읽어올 때도 int가 아닌 char로 받아야 한다.
    
    fp_comp=fopen("compressed.txt","r");
    
    while(fscanf(fp_comp,"%c",&temp)!=EOF){   
        
        if(count==3){   //3글자 쓰고 - 써주기
            fprintf(fp_decomp," - %c",temp);   
            count++;
        }
        else if(count==7){  //7글자 써주고 띄어쓰기
            fprintf(fp_decomp,"\t%c",temp);
            count=1;
        }
        else{   //나머지는 숫자출력
            fprintf(fp_decomp,"%c",temp);
            count++;
        }
    }

    fclose(fp_comp);
    fclose(fp_decomp); 
    return 0;
}
