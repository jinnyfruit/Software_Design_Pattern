/*
	file name: make file and write information using struct
	detail: File I/O
	made_by: jinnyfruit
*/
typedef struct {
	char name[20];
	int year;
}car;
#include <stdio.h>
int main()
{
	car company[2] = { {"Avante",2007},
					   {"Sonata",2008}
	};

	FILE* fp = fopen("cars.txt", "w");
	
	if (fp == NULL) {
		printf("파일 오픈 실패!");
		return -1;
	}
	fprintf(fp,"------------------------------------------\n");
	fprintf(fp,"|Name\t|Year\t|Price\n");
	fprintf(fp,"------------------------------------------\n");

	for (int i = 0; i < 54; i++) {
		fprintf(fp, "%s %d\n", company[i].name, company[i].year,company[i].);

	}

	return 0;
}