/*
	file name: Insert nodes in ascending order
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

	node* nodes = (node*)malloc(4 * sizeof(node));
	int i;

	nodes[0].key = 100;	//initialize the key value
	nodes[1].key = 250;
	nodes[2].key = 467;

	nodes[0].next = &nodes[1];	//linking nodes
	nodes[1].next = &nodes[2];
	nodes[2].next = NULL;

	node* ptr, * oldPtr = NULL;

	int newkey, fail = -1;
	nodes[3].key = newkey = 300;
	nodes[3].next = NULL;

	//search linked list

	ptr = &nodes[0];

	while (ptr) {
		if (ptr->key == newkey) {
			printf("key already exists");
			break;
		}
		if (ptr->key < newkey) {
			oldPtr = ptr;
			ptr = ptr->next;
		}
		else {
			oldPtr->next = &nodes[3];
			nodes[3].next = ptr;
			printf("key inserted");
			break;
		}
	}
	node* head;
	head = &nodes[0];

	printf("\ninserted node-key value\n");
	while (head != NULL) {
		printf("%d\t", head->key);
		head = head->next;
	}
}