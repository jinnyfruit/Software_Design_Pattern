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

	node* head, * old_ptr = NULL;
	node* nodes = (node*)malloc(3 * sizeof(node));


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

	int delnum;
	printf("\ntype a integer you wanna delete:");
	scanf("%d", &delnum);

	head = &nodes[0];

	while (head != NULL) {

		if (head->key == delnum) {
			head = head->next;
			old_ptr->next = head;
		}
		else {
			old_ptr = head;
			head = head->next;
		}


	}

	head = &nodes[0];

	printf("\ndeleted node-key value\n");
	while (head != NULL) {
		printf("%d\t", head->key);
		head = head->next;
	}

	free(head);
	free(nodes);


}