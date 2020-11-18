/*
	file name: make file and write information using struct
	detail: File I/O
	made_by: jinnyfruit
*/
#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
	char name[20];
	int year;
	double price;
}car;

int main()
{
	car list[4] = { {"Avante",2007,13000.00},
					{"Sonata",2008,18000.00},
					{"SM7",2009,22000.00},
					{"Equus",2010,35000.00}
	};

	fprintf(fp, "------------------------------------------\n");
	fprintf(fp, "|Name\t|Year\t|Price\n");
	fprintf(fp, "------------------------------------------\n");
	return 0;
}