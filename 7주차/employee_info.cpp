/*inserting a new element into a struct array with constraints.
 detail: constraint

 made by: Ji Woo, Kim
 modified: 10.12,2020
 */
#include <stdio.h>
#include <string.h>

typedef struct employee {
	char RRN[13];	//주민등록번호 constraint: unique
	char name[20];
	float salary;
	float bonus;	//constraint: bonus < salary
	struct employee* ptr;
}Employee;

Employee* head;
void save_data(Employee* emp, int i, char* num, char* string, float sal, float bon) {

	head = emp;

	if (i == 0) {	//first node should be saved
		strcpy(emp[i].RRN, num);
		strcpy(emp[i].name, string);	//at first, rrn and name don't matter.

		while (1) {
			if (sal > bon) {
				emp[i].salary = sal;	//also save salary and bonus, carefully considering the constraint
				emp[i].bonus = bon;

				break;
			}
			else {
				printf("\n salary: ");
				scanf("%f", sal);

				printf("\n bonus: ");
				scanf("%f", bon);
			}
		}
	}
	else {
		if (strcmp(emp[i].RRN))
	}
}
void get_data(Employee* emp) {

	int i;
	char* num = "", string = "";
	float sal, bon;

	for (i = 0; i < sizeof(emp); i++) {

		printf("\n RRN: ");
		scanf("%s", num);

		printf("\n name: ");
		scanf("%s", string);

		printf("\n salary: ");
		scanf("%f", sal);

		printf("\n bonus: ");
		scanf("%f", bon);

	}

}

int main() {

	Employee emp[1000];



	return 0;
}