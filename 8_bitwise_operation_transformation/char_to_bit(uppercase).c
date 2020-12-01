/*
file name: char to bit (uppercase)
author: Kim, Ji Woo
*/
#include <stdio.h>
#include <stdlib.h>
#define MASK 0x80   // 1000 0000
void get_word(char);
void bit_print(char);

int main(){
   
   char word;
   scanf("%c",&word);
   bit_print(word);

   return 0;
}
void bit_print(char word){
   
    //checks with mask and shifts it one by one
    printf("%d",(word&MASK)>>7);
    printf("%d",(word&(MASK>>1))>>6);
    printf("%d",(word&(MASK>>2))>>5);
    printf("%d",(word&(MASK>>3))>>4);
    printf("%d",(word&(MASK>>4))>>3);
    printf("%d",(word&(MASK>>5))>>2);
    printf("%d",(word&(MASK>>6))>>1);
    printf("%d",word&(MASK>>7));
    
}