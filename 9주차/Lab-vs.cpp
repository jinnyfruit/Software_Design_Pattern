/*
	file name: Lab-vs
	Code author:Kim Ji Woo
	Modified date: 11.7 ,2020
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define DEBUG
#define MAX 50
typedef struct PERSON {

	char name[MAX];
	int age;
	float salary;
}person;

void Wage_increase(int, person*, float, FILE*, int, int);

int main() {

	person group[MAX];

	FILE* v1ptr = fopen("salary_v1.txt", "r");	//original data
	FILE* v2ptr = fopen("salary_v2", "w");	//version_2 file
	FILE* v3ptr = fopen("salary_v3", "w");	//version_3 file

	int i = 0, ecount = 0; //ecount counts the elements

	while (fscanf(v1ptr, "%s %d %f", group[ecount].name, &group[ecount].age, &group[ecount].salary) != EOF) {
		ecount++;
	}

	Wage_increase(ecount, group, 1.1, v2ptr, 40, 50);

	Wage_increase(ecount, group, 1.2, v3ptr, 30, 40);

	i = 0;
	person compare1[MAX], compare2[MAX];

	fclose(v1ptr);
	fclose(v2ptr);
	fclose(v3ptr);

	FILE* v1 = fopen("salary_v1.txt", "r");	//original data
	FILE* v3 = fopen("salary_v3", "r");	//version_3 file

	while (fscanf(v1, "%s %d %f", compare1[i].name, &compare1[i].age, &compare1[i].salary) != EOF) {
		fscanf(v3, "%s %d %f", compare2[i].name, &compare2[i].age, &compare2[i].salary);

		if (compare1[i].salary != compare2[i].salary)
			printf("%s\t%d\t%f -> %f\n", compare1[i].name, compare1[i].age, compare1[i].salary, compare2[i].salary);
	}


	fclose(v1);
	fclose(v3);

	return 0;
}
void Wage_increase(int ecount, person* group, float per, FILE* ptr, int frange, int lrange) {

	int i;
	for (i = 0; i < ecount; i++) {
		if (frange <= group[i].age && group[i].age < lrange) {
			group[i].salary *= per;
		}
		fprintf(ptr, "%s %d %f", group[i].name, group[i].age, group[i].salary);

	}
}
