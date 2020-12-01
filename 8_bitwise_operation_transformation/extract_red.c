/*
file name: extract red
author: Kim, Ji Woo
*/
#include <stdio.h>
#include <stdlib.h>
#define R 0xF800
#define G 0x07E0
#define B 0x001F
#define MASK 0x00FF0000
#define COLOR_WORD 0x113AF033
int main(){
    
    printf("%0x",(COLOR_WORD&MASK)>>16);

    return 0;
}
