/*
file name: integer array-> linked list
author:jinnyfruit
*/
#include <stdlib.h>
#include <stdio.h>

typedef struct NUM
{
    int key;
    struct  NUM* next;
}num;
num* prv_ptr,*cur_ptr;

int main(){

    int nums[10]={17,39,11,9,42,12,15,8,13,41};
    int i;
    num* new_num;
    num* first=NULL; // pointer that is pointing first node
    
    for(i=0;i<10;i++){
        make_node(nums[i],&new_num);
        linking_nodes(&first,&new_num);
    }

    return 0;
}
void make_node(int num, struct NUM** new_num)
{
    *new_num=malloc(sizeof(num));
    (*new_num)->key=num;
    (*new_num)->next=NULL;
}
void linking_nodes(num** first,num** new_num){
     
     num* ptr;
     if(*first==NULL){  //first node
         *first=*new_num;
     }
     else{
         ptr=*first;
        
                
     }
}
