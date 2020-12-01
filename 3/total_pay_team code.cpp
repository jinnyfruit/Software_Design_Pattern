/*
내코드
#include <stdio.h>
typedef struct totalpay {
	int id;
	char name[20];
	float payRate;
	float wHours;
	float pay;
}TP;
void main()
{
	TP pay[6];
	int i;
	for (i = 0; i < 6; i++) {
		printf("type ID:");
		scanf("%d", &pay[i].id);
		printf("type last name:");
		scanf("%s", pay[i].name, sizeof(pay[i].name));
		printf("type payRate:");
		scanf("%f", &pay[i].payRate);
		printf("type wHours:");
		scanf("%f", &pay[i].wHours);
		pay[i].pay = pay[i].payRate * pay[i].wHours;
	}
	printf("ID\tname\tpay rate\twork hour\t total pay\n");
	for (i = 0; i < 6; i++) {
		printf("%d \t%s \t%.2f \t\t%.2f \t\t%.2f", pay[i].id, pay[i].name, pay[i].payRate, pay[i].wHours, pay[i].pay);
		printf("\n");
	}
}
/*  지영인님 코드
#include<stdio.h>

struct EMPLOYEE {
char last_name[20];
int id;
float pay_rate;
float number_of_hours_worked;
float gross_pay;
};

int main()
{
struct EMPLOYEE e[6];

for (int i = 0; i < 6; i++)
{
scanf_s("%s", e[i].last_name, sizeof(e[i].last_name));
scanf_s("%d %f %f", &e[i].id, &e[i].pay_rate, &e[i].number_of_hours_worked);

e[i].gross_pay = e[i].pay_rate * e[i].number_of_hours_worked;
}
puts("");

printf("ID Number\tName\tPay Rate\tHours Worked\n");
for (int i = 0; i < 6; i++) {
printf("%d\t%s\t%.3f\t%.3f\t%.3f\n", e[i].id, e[i].last_name, e[i].pay_rate, e[i].number_of_hours_worked, e[i].gross_pay);
}
}
*/

/* 임상택님코드(제출)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 6

struct Employee {
int ID;
char name[20];
double pay_rate;
double hours_worked;
};

void main()
{
struct Employee People[MAX];
for (int i = 0; i < MAX; i++) {
printf("Please enter your ID : ");
scanf_s("%d", &People[i].ID);
printf("Please enter your name : ");
scanf_s("%s", People[i].name,sizeof(People[i].name));
printf("Please enter your pay rate : ");
scanf_s("%lf", &People[i].pay_rate);
printf("Please enter your hours worked : ");
scanf_s("%lf", &People[i].hours_worked);
printf("\n");
}
for (int i = 0; i < MAX; i++) {
if (!i) {
printf("%11s%6s%10s%14s%11s\n", "ID Number", "Name", "Pay Rate", "Hours Worked", "Gross Pay");
}
printf("%11d%6s%10.f%14.f%11.f\n", People[i].ID, People[i].name, People[i].pay_rate, People[i].hours_worked, People[i].pay_rate* People[i].hours_worked);
}
}
*/