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

	node* head = (node*)malloc(sizeof(node));
	node* nodes = (node*)malloc(3 * sizeof(node));
	int i;

	nodes[0].key = 100;	//initialize the key value
	nodes[1].key = 250;
	nodes[2].key = 467;

	nodes[0].next = &nodes[1];	//linking nodes
	nodes[1].next = &nodes[2];
	nodes[2].next = NULL;

	*head = nodes[0];	//start with node1

	int searchNum, found = 0;

	printf("type a integer you wanna search:");
	scanf("%d", &searchNum);

	while (head != NULL) {

		if (head->key == searchNum) {
			found = 1;
			printf("search key found");
			break;
		}
		else
			head = head->next;
	}

	if (found == 0) {
		printf("search key not found");
	}

	free(head);
	free(nodes);


}