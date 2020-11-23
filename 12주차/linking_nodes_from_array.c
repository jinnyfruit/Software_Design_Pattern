/*
file name: linking nodes from array
author: Kim, Ji Woo
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
   int key;
   struct NODE* next;
}Node;

void make_node(int*, Node*);

int main(){

    int arr[10]={17,39,11,9,42,12,15,8,13,41};
    Node node[10]; 
    Node* first=NULL, *ptr=NULL,*prv_ptr=NULL;

    int i=0,found=0;
    
    make_node(arr,node);

   //printf("\n2\n");

    for(i=0;i<10;i++){
        ptr=first;
        found=0;

        if(first==NULL){ //no nodes exist
            first=&node[0]; //make a first node
        }
        else{
            
            if(ptr->key<=node[i].key){   //if it is bigger than the first node...
                
                if(ptr->next==NULL){    //if there is only one node, link it at the last
                    ptr->next=&node[i];
                }
                else{   //if nodes are more than one...
                   
                    while(ptr){ //check with ptr
                        
                        if(ptr->key>node[i].key){   //if the key value of ptr is bigger than the new node key value, link it and make found 1.
                            prv_ptr->next=&node[i];
                            node[i].next=ptr;
                            found=1;    //Indicator that the insertion has been completed in here
                            break;
                        }
                        else{   //if ptr's key value is small than new node value
                            prv_ptr=ptr;    //save the current ptr value
                            ptr=ptr->next;  //move ptr to next node
                        }
                    }
                    if(found==0){   //If the new node value is the largest even though the while statement is finished and compared, found remains at 0.
                        prv_ptr->next=&node[i]; //make last node ->it has the biggest value in linked list
                    }
                }
            }

            else{   //if the new node's key value is samller than first node, change the first node.
               node[i].next=first;  //put prv first node's address to new first node's next
               first=&node[i];  //first node change
            }
        }
    }
  
    printf("\nAscended linked-list\n");
    ptr=first;
    while(ptr){
        printf("%d\t",ptr->key);
        ptr=ptr->next;
    }
    printf("\n");

    return 0;
}
void make_node(int* arr, Node* node){
     //printf("1\n");
    int i;
    printf("original array\n");
   for(i=0;i<10;i++){   //Initialize only the address value and save it in the struct (exactly saved in the node)
       node[i].key=arr[i];
        printf("%d\t",node[i].key);
       node[i].next=NULL;
   }
}