/* This file is about index search.*/
#include <stdio.h>
#include <string.h>
#define MAXNUM 20
typedef struct dataset {
	int num;
	char name[MAXNUM];
	int age;
	char hobby[MAXNUM];
}Dataset;

typedef struct index {
	char key[MAXNUM];
	int arryIndex;
}Index;

int main()
{
	char line[MAXNUM];
	char line2[MAXNUM];
	int i = 0, j = 0;
	int count = 0, value = 0, find = 0;

	Dataset list[5];       //define five dataset and index array
	Index link[5];

	printf("please type a dataset:\n");
	printf("number\tname\tage\thobby\n");    //show the index of dataset

	for (i; i < 5; i++) {
		scanf_s("%d %s %d %s", &list[i].num, list[i].name, sizeof(list[i].name), &list[i].age, list[i].hobby, sizeof(list[i].hobby));    //get the dataset
	}

	for (i = 0; i < 5; i++) {
		strcpy(link[i].key, list[i].name);        //move the data from dataset to index
		link[i].arryIndex = list[i].num;
	}


	printf("type a name you want to search:\n");    //get the string to search
	scanf_s("%s", line, sizeof(line));

	while (line[j] != '\0') {    //count the number of alphabet of the word
		count++;
		j++;
	}
	for (i = 0; i < 5; i++) {						//search the string from the index (I tried to define and use the function but it was not available)
		if (line[0] == link[i].key[0]) {
			for (j = 0; j < 5; j++) {
				if (line[j] == link[i].key[j])
				{
					value++;
					if (value == count)
						find = i;
				}
				else
					break;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		if (find == list[i].num)
			printf("%d\t%s\t%d\t%s", list[find].num, list[find].name, list[find].age, list[find].hobby);
	}

	i = 0, j = 0;
	count = 0, value = 0, find = 0;

	printf("\ntype a name you want to search:\n");
	scanf_s("%s", line2, sizeof(line2));

	while (line2[j] != '\0') {    //count the number of alphabet of the word
		count++;
		j++;
	}
	for (i = 0; i < 5; i++) {
		if (line2[0] == link[i].key[0]) {
			for (j = 0; j < 5; j++) {
				if (line2[j] == link[i].key[j])
				{
					value++;
					if (value == count)
						find = i;
				}
				else
					break;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		if (find == list[i].num)
			printf("%d\t%s\t%d\t%s", list[find].num, list[find].name, list[find].age, list[find].hobby);   //print out the result
	}

	return 0;
}

