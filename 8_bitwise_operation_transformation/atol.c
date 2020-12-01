/*
file name: using atol //문자열->정수 - atoi함수와 사용법이 동일하다.
author: Kim, Ji Woo
*/
#include <stdio.h>
#include <stdlib.h>
int main(){

    char*string1="2는 1보다 큽니다";
    char*string2="1004는 천사입니다";
    char*string3="2020년도 입니다";
    char*string4="오늘은 12월 1일입니다.";
    long t1,t2,t3,t4;

    puts(string1);
    puts(string2);
    puts(string3);
    puts(string4);

    t1=atol(string1);
    t2=atol(string2);
    t3=atol(string3);
    t4=atol(string4);

    printf("문자열을 숫자로 변환한 값:%ld %ld %ld %ld \n",t1,t2,t3,t4);
    printf("총 합은 %d입니다.\n",t1+t2+t3+t4);

    return 0;

}