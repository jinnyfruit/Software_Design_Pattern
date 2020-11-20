/*
	file name: insert node before first node
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
    
    node* first;
    node* head;

    node nodes[4];

    nodes[0].key=100; //initializing key value
    nodes[1].key=250; 
    nodes[2].key=467;

    nodes[0].next=&nodes[1];
    nodes[1].next=&nodes[2];
    nodes[2].next=NULL;

    first=nodes;    //connect first with first node

    head=first;

    printf("original key value\n");
    while(head){
        printf("%d\t",head->key);
        head=head->next;
    }

    nodes[3].key=50;

    node* ptr,*prv_ptr=NULL;

    ptr=&nodes[0];

   
    first=&nodes[3];    //inserting a new node before first node.
    nodes[3].next=ptr;

    head=first;

    printf("\ninserted key value\n");
    while(head){
        printf("%d\t",head->key);
        head=head->next;
    }
    printf("\n");
    return 0;
}