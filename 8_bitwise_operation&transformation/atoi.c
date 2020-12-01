/*
file name: using atoi //문자열->정수
author: Kim, Ji Woo
*/
#include <stdio.h>
#include <stdlib.h>
int main(){

    int count;
    int total=0;
    char string[100];

    for(count=1;count<=3;count++){
        
        printf("%d번째 문자열을 입력한 후 Enter키를 누르세요\n",count);

        gets(string);

        total+=atoi(string);    //숫자로 바뀐 문자열이 total값에 누적되어 더해진다.

        printf("입력값 = %d, 총합 = %d\n",atoi(string),total);
    }
    printf("읽은 문자열의 총 합은 %d입니다.\n",total);  //총합출력

    return 0;
}