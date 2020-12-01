/*
    file name: deleting first node
    author:jinnyfruit
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
   int key;
   struct Node* next;
}node;

int main(){

    node nodes[3];
    node* first=nodes;
    
    nodes[0].key = 100;	//initialize the key value
	nodes[1].key = 250;
	nodes[2].key = 467;

	nodes[0].next = &nodes[1];	//linking nodes
	nodes[1].next = &nodes[2];
	nodes[2].next = NULL;

    node* ptr,*head;
    int delnum;
    ptr=nodes;
    head=first;

    printf("original key value\n");
    while(head){
        printf("%d\t",head->key);
        head=head->next;
    }

    printf("\ntype a integer U wannna delete\n");
    scanf("%d",&delnum);

    node* prv_ptr=NULL;

    while(ptr){
        if(ptr->key==delnum){
            if(prv_ptr==NULL){
                ptr=ptr->next;
                first=ptr;
            }        
            else{
                ptr=ptr->next;
                prv_ptr->next=ptr;
            }
        }
        else{
            prv_ptr=ptr;
            ptr=ptr->next;
        }
    }
    head=first;

    printf("deleted key value\n");
    while(head){
        printf("%d\t",head->key);
        head=head->next;
    }
    
    return 0;
}