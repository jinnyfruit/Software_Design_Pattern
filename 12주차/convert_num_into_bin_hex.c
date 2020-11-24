/*
file name: converting decimal number to binary string and hezadecimal string
author: Kim, Ji Woo
*/
#include <stdio.h>

void bin(int);
void hex(int*);
#define MAX 10000
int i=0,arr[MAX];

int main(){
    int i;

    for(i=1;i<=500;i++){
        printf("DEC %d\t",i);
        printf("BIN ");
        bin(i);
        printf("\tHEX %x\n",i);
    }

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
void hex(int* arr){ //커찮

}
