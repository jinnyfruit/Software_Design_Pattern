/*
	This file is about Standard Deviation (std)

	related content: 2020-2 midterm num)5

	Get the students name and score, and sort them by calculating grades
	mean+std < A, mean-std < B < mean+std, C < mean-std  -> grade classification criteria

	author: Ji Woo, Kim
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <math.h>
#define MAX_NUM 3

typedef struct student {   //make a struct 
	char name[50];
	int score;
	char grade;
}Student;
int main()
{
	Student test[MAX_NUM];

	srand(time(NULL));

	int i;

	for (i = 0; i < MAX_NUM; i++)
	{
		test[i].score = (rand() % 71) + 20;   // 20 < score range < 90 
		gets(test[i].name);
	}

	float mean, std, sum = 0;   //mean=avg sum-> use two times

	for (i = 0; i < MAX_NUM; i++) {
		sum += test[i].score;
	}
	mean = sum / 3;

	sum = 0;

	for (i = 0; i < MAX_NUM; i++) {

		sum += pow(test[i].score, 2);

	}
	std = pow(sum / MAX_NUM,1/2);

	// randge of grades into A,B,C

	for (i = 0; i < MAX_NUM; i++) {

		if (test[i].score > mean + std) {

			test[i].grade = 'A';
		}
		else if (mean - std < test[i].score && test[i].score < mean + std) {

			test[i].grade = 'B';
		}
		else if (test[i].score < mean - std) {

			test[i].grade = 'C';
		}
		else
			return 0;
	}
	//중복값 확인

	int A = 0, B = 0, C = 0;  //save the value of each grade

	for (i = 0; i < MAX_NUM; i++) {

		switch (test[i].grade) {
		case 'A':
			A++;
			break;

		case 'B':
			B++;
			break;

		case 'C':
			C++;
			break;
		}
	}
	//학생이름,점수,등급 출력
	//최종으로 해당등급을 몇명이 받았는지 출력

	for (i = 0; i < MAX_NUM; i++) {
		printf("name: %s score:%d grade:%c \n", test[i].name, test[i].score, test[i].grade);
	}
	printf("A:%d \t B:%d \t C:%d ", A, B, C);
}