/*
file name: converting decimal number to binary string and hezadecimal string
author: Kim, Ji Woo
*/
#include <stdio.h>
#define MASK 0x08

void bin(int);
void hex(int);

int main(){
    int num=1000;
    printf("%d\n",num);
    bin(num);
    printf("\n");
    printf("0x%x",num);

    return 0;
}
void bin(int num) {
	if (num == 0 || num == 1)
		printf("%d", num);
	else {
		bin(num / 2);
		printf("%d", num % 2);
	}
}
void hex()