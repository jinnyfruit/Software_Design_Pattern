/*
	file name: insert key in linked list
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

	node* head;
	node* nodes = (node*)malloc(4 * sizeof(node));
	int i;

	nodes[0].key = 100;	//initialize the key value
	nodes[1].key = 250;
	nodes[2].key = 467;

	nodes[0].next = &nodes[1];	//linking nodes
	nodes[1].next = &nodes[2];
	nodes[2].next = NULL;

	head = &nodes[0];	//start with node1

	int searchNum, found = 0;

	printf("original node-key value\n");

	while (head != NULL) {
		printf("%d\t", head->key);
		head = head->next;
	}
	nodes[3].key = 300;

	nodes[3].next = &nodes[2];
	nodes[1].next = &nodes[3];

	head = &nodes[0];

	printf("\ninserted node-key value\n");
	while (head != NULL) {
		printf("%d\t", head->key);
		head = head->next;
	}

	free(head);
	free(nodes);


}