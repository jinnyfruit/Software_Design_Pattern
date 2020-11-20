/*
	file name: deletes key in linked list
	Code author:Kim Ji Woo
	Modified date: 11.9 ,2020
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node {
	int key;
	struct Node* next;
}node;

void view(node*, node*);
void del_num(int*);

int main() {

	node* ptr;
	node* nodes = (node*)malloc(3 * sizeof(node));


	nodes[0].key = 100;	//initialize the key value
	nodes[1].key = 250;
	nodes[2].key = 467;

	nodes[0].next = &nodes[1];	//linking nodes
	nodes[1].next = &nodes[2];
	nodes[2].next = NULL;

	ptr = &nodes[0];	//start with node1

	printf("original node-key value\n");

	while (ptr != NULL) {
		printf("%d\t", ptr->key);
		ptr = ptr->next;
	}

	node* nx_ptr,*prv_ptr=NULL; 
    int delnum,deleted=0;

	printf("\ntype a integer you wanna delete:");
	scanf("%d", &delnum);

	ptr = &nodes[0];

	while(ptr){  //checks if it is not NULL & if it is not a last node!
        if(ptr->key==delnum){   //if it matches

          if(prv_ptr!=NULL) //check if it is first node
            prv_ptr->next=ptr->next; 
        
        ptr->next=NULL; 
        deleted=1;  //indicator of deletion
        break;
        }
        prv_ptr=ptr; //pass to next address
        ptr=ptr->next; //move current ptr to next address
    }

    if(deleted) 
        printf("node deleted");
    else
    {
        printf("key not found");
    } 
    
    ptr = &nodes[0];	

	printf("deleted node-key value\n");

	while (ptr != NULL) {
		printf("%d\t", ptr->key);
		ptr = ptr->next;
	} 

	free(nodes); 
}