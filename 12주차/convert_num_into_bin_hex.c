/*
file name: converting decimal number to binary string and hezadecimal string
author: Kim, Ji Woo
*/
#include <stdio.h>
#define MASK 0x08

void bin(int);
void hex(int*);

int i=0,arr[100];

int main(){
    int num=254;
    printf("%d\n",num);
    bin(num);
    printf("\n");
    printf("0x%x\n");

    return 0;
}
void bin(int num) {
	
    if (num == 0 || num == 1){
		printf("%d", num);
        arr[i]=num;
    }

	else {
		bin(num / 2);
		printf("%d", num % 2);
        i++;
        arr[i]=num%2;
	}
}
