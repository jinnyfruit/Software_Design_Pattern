#include <stdio.h>
#include <stdlib.h>
int main(){
    char str[10];
    char ch;
    int dec,hex,oct;
    float db;

    printf("Please type a string,characher,decimal,hexa,octal,float\n");
    scanf("%9s %c %d %x %o %f",str,&ch,&dec,&hex,&oct,&db);

    printf("string:%s\n",str);
    printf("character:%c\n",ch);
    printf("decimal number:%d\n",dec);
    printf("hexadecimal number:%0x\n",hex);
    printf("octal number:%o\n",oct);
    printf("float number:%f\n",db);

    return 0;
}