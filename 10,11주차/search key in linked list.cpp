/*
	file name: search key in linked list
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

int main() {

	node* ptr;
	node* nodes = (node*)malloc(3 * sizeof(node));
	int i;

	nodes[0].key = 100;	//initialize the key value
	nodes[1].key = 250;
	nodes[2].key = 467;

	nodes[0].next = &nodes[1];	//linking nodes
	nodes[1].next = &nodes[2];
	nodes[2].next = NULL;

	ptr=&nodes[0];	//start with node1

	int searchNum, found = 0;

	printf("type a integer you wanna search:");
	scanf("%d", &searchNum);

	while (ptr != NULL) {

		if (ptr->key == searchNum) {
			found = 1;
			break;
		}
		else
			ptr = ptr->next;	//move to next node
	}

	if (found) {
		printf("search key found");
	}
	else {
		printf("Search key not found");
	}

	free(nodes);
	// if you free the memory that is not allocated -> error
}