/*
* Copyright 2020 Ji Youngin <jyi0106@gc.gachon.ac.kr>.
*
* This code is lab of lecture "Software Design Patterns"
*
* Its object is practice "index based search".
* Index based search is very important because it is often more efficient than
* "sequential data processing"
*
* This code is modified 2020.10.5.
*/

#include<stdio.h>
#include<string.h>
#define MAX 3
struct BOOK { // make data structure
	char first_name[50];
	char last_name[50];
	char email[50];
};

struct { //make index structure
	char key_firstName[50];
	char key_lastName[50];
	struct BOOK* key_ptr;
} index[MAX];

//function prototype
void search_info(char*, struct BOOK*);

int main()
{
	int i;
	char input_name[50];
	struct BOOK b[MAX] = { //Store the dataset
	{"Ji", "youngin", "yeong010601@gmail.com"},
	{"Kim", "JiWoo", "jinnyfruit0527@gmail.com"},
	{"Lim", "sangtaek", "im917799@naver.com"},
	};

	for (i = 0; i < MAX; i++) {
		strcpy(index[i].key_firstName, b[i].first_name); //copy the name to key
		strcpy(index[i].key_lastName, b[i].last_name);
		index[i].key_ptr = &b[i]; //store address of dataset
	}

	printf("Please type the name: ");
	gets_s(input_name, sizeof(input_name)); //input name

	search_info(input_name, b); //function call by reference

	return 0;
}

void search_info(char* input, struct BOOK* b) //function definition
{
	int flag = 0;
	for (int i = 0; i < MAX; i++) { //find name..
		if (!strcmp(input, index[i].key_firstName) || !strcmp(input, index[i].key_lastName)) { //if found then print the age, hobby
			printf("%s %s, %s\n", (b + i)->first_name, (b + i)->last_name, (b + i)->email);
			flag++;
		}
	}
	if (!flag) //else then print "match not found"
		printf("match not found\n");
	return;
}
