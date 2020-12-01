#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 6

struct EMPRECORD { // structure for an employee
	int ID;
	char last_name[20];
	float pay_rate;
	float hours;
};
void main() {

	float gross_pay[MAX]; // employee's personal pay
	double total_pay = 0.0; // Pay of all employees
	struct EMPRECORD emp[MAX]; // Make 6 Struct

	for (int i = 0; i < MAX; i++)
	{
		printf("type ID, Last Name, Pay Rate, Hours Worked: ");
		scanf("%d %s %f %f", &emp[i].ID, emp[i].last_name, &emp[i].pay_rate, &emp[i].hours);

		gross_pay[i] = emp[i].pay_rate * emp[i].hours; // Employee's pay calcuate
		total_pay = total_pay + gross_pay[i]; // Store pay of all employees
	}

	// print Result
	printf("\n============================== PAYROLL REPORT ==============================\n");
	printf("Name ID Number Gross pay\n");
	for (int i = 0; i < MAX; i++) {
		printf("%.7s %d %.3f\n", emp[i].last_name, emp[i].ID, gross_pay[i]);
	}
	printf("\nTotal Gross Pay of all employees: %.3lf", total_pay);
	printf("\n============================================================================\n");
}