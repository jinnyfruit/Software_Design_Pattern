/*
   file name: fcopy
   Code author:Kim Ji Woo
   Modified date: 11.9 ,2020
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20
typedef struct ElEMENT {
   char name[MAX];
   char position[MAX];
   int id;
   float salary;
   char grade[MAX];
}element;

void read_data(FILE*, element*,int*);
void make_file(FILE*, element*,int);

int main() {

   FILE* fp = fopen("employee.dat.txt", "r");
   FILE* nfp=fopen("employee.bak.txt", "w");
   element group[MAX];
   int ecount = 0;
   
   read_data(fp, group,&ecount);

   make_file(nfp, group, ecount);

   fclose(fp);
   fclose(nfp);
}

void read_data(FILE* fp, element* group, int* ecount) {
   int i = 0;
   while (fscanf(fp, "%s %s %d %f %s", group[i].name, group[i].position, &group[i].id, &group[i].salary, group[i].grade) != EOF) {
      i++;
      *ecount = i;
   }
}
void make_file(FILE*nfp, element*group,int ecount) {
   int i=0;
   while (i < ecount) {
      fprintf(nfp, "%s %s %d %f %s\n", group[i].name, group[i].position, group[i].id, group[i].salary, group[i].grade);
      i++;
   }
}