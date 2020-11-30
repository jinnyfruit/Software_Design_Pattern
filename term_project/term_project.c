#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MASK 0x40

int N = 0;

int checksum=0;
char line1[5][10],line2[5][10];
int i,j,count;

struct PERSON {
    int tag;
    char date[20];
    char fee_paid[5];
    char first_name[30];
    char last_name[30];
    int age;
    char orga[40];
    char job[15];
    struct PERSON* next;
}people[100], temp;


struct PERSON* head;

void setup()
{
    FILE* in;
    in = fopen("registraion_data.txt", "r");


    while (fscanf(in, "%d/%[^/]/%[^/]/%[^ ] %[^/]/%d/%[^/]/%s", &people[N].tag, people[N].date, people[N].fee_paid, people[N].first_name, people[N].last_name, &people[N].age, people[N].orga, people[N].job) == 8)
    {

        printf("%2d %1s %-3s %s %s %d %s %s\n", people[N].tag, people[N].date, people[N].fee_paid, people[N].first_name, people[N].last_name, people[N].age, people[N].orga, people[N].job);

        N++;

    }
    

    fclose(in);
}


void search(char *search_word)
{
    printf("search word: %s\n\n", search_word);

    for (int i = 0; i < N; i++)
    {

        if (strcmp(search_word, people[i].last_name) == 0)
        {
            printf("%2d %1s %-3s %s %s %d %s %s\n", people[i].tag, people[i].date, people[i].fee_paid, people[i].first_name, people[i].last_name, people[i].age, people[i].orga, people[i].job);
        }
        if (strcmp(search_word, people[i].orga) == 0)
        {
            printf("%2d %1s %-3s %s %s %d %s %s\n", people[i].tag, people[i].date, people[i].fee_paid, people[i].first_name, people[i].last_name, people[i].age, people[i].orga, people[i].job);
        }

    }
}

void swap(struct PERSON* p1, struct PERSON* p2)
{
    struct PERSON temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}
void sort_by_tag()
{
    struct PERSON temp;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (people[i].tag > people[j].tag)
            {
                swap(&people[i], &people[j]);
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%2d %s %-3s %s %s %d %s %s\n", people[i].tag, people[i].date, people[i].fee_paid, people[i].first_name, people[i].last_name, people[i].age, people[i].orga, people[i].job);
    }
}

void create_linked_list()
{
    struct PERSON* ptr;


    for (int i = 0; i < N; i++)
    {
        if (i == N - 1)
        {
            people[i].next = NULL;
        }
        people[i].next = &people[i + 1];
    }

    ptr = people;

    while ((*ptr).next != NULL)
    {
        printf("%2d %s %-3s %s %s %d %s %s\n", (*ptr).tag, (*ptr).date, (*ptr).fee_paid, (*ptr).first_name, (*ptr).last_name, (*ptr).age, (*ptr).orga, (*ptr).job);
        ptr = ptr->next;
    }
}

void sort_by_age()
{

    int ages;

    struct PERSON temp;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (people[i].age > people[j].age)
            {
                swap(&people[i], &people[j]);
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%2d %s %-3s %s %s %d %s %s\n", people[i].tag, people[i].date, people[i].fee_paid, people[i].first_name, people[i].last_name, people[i].age, people[i].orga, people[i].job);
    }

    ages = people[0].age / 10;
    printf("\n\n\n=======Age grouping =======\n\n\n");
    printf("\n===Age %d0~%d9===\n ", ages, ages);

    for (int i = 0; i < N; i++)
    {
        if (people[i].age / 10 != ages)
        {
            ages = people[i].age / 10;
            printf("\n===Age %d0~%d9===\n ", ages, ages);
            printf("%2d %s %-3s %s %s %d %s %s\n", people[i].tag, people[i].date, people[i].fee_paid, people[i].first_name, people[i].last_name, people[i].age, people[i].orga, people[i].job);
        }
        else {
            printf("%2d %s %-3s %s %s %d %s %s\n", people[i].tag, people[i].date, people[i].fee_paid, people[i].first_name, people[i].last_name, people[i].age, people[i].orga, people[i].job);
        }
    }




}
void write_data()
{
    FILE* out = fopen("sorted_Data.txt", "w");

    int ages;
    ages = people[0].age / 10;
    fprintf(out, "\n=======Age grouping =======\n\n\n");
    fprintf(out, "\n===Age %d0~%d9===\n ", ages, ages);

    for (int i = 0; i < N; i++)
    {
        if (people[i].age / 10 != ages)
        {
            ages = people[i].age / 10;
            fprintf(out, "\n===Age %d0~%d9===\n ", ages, ages);
            fprintf(out, "%2d %s %-3s %s %s %d %s %s\n", people[i].tag, people[i].date, people[i].fee_paid, people[i].first_name, people[i].last_name, people[i].age, people[i].orga, people[i].job);
        }
        else {
            fprintf(out, "%2d %s %-3s %s %s %d %s %s\n", people[i].tag, people[i].date, people[i].fee_paid, people[i].first_name, people[i].last_name, people[i].age, people[i].orga, people[i].job);
        }
    }


    fclose(out);
}

void delete_name_arr(char* name) {
    int i, j, stack = 0;
    for (i = 0; i < N; i++) {
        if (strcmp(name, people[i].last_name)==0) {
            stack += 1;
            for (j = i ; j < N; j++) {
                
                people[j].tag = people[j + 1].tag;
                strcpy(people[j].date, people[j + 1].date);
                strcpy(people[j].fee_paid, people[j + 1].fee_paid);
                strcpy(people[j].first_name, people[j + 1].first_name);
                strcpy(people[j].last_name, people[j + 1].last_name);
                people[j].age = people[j + 1].age;
                strcpy(people[j].orga, people[j + 1].orga);
                strcpy(people[j].job, people[j + 1].job);
            }
        }
    }
    N = N - stack;
    for (int i = 0; i < N; i++) {
        printf("%2d %s %-3s %s %s %d %s %s\n", people[i].tag, people[i].date, people[i].fee_paid, people[i].first_name, people[i].last_name, people[i].age, people[i].orga, people[i].job);
    }
    
}

void delete_name_node(char* name) {
    for (int i = 0; i < N; i++)
    {
        if (i == N - 1)
        {
            people[i].next = NULL;
        }
        people[i].next = &people[i + 1];
    }
    struct PERSON* ptr;
    int i = 0, stack=0;
    struct PERSON* prev_people, * curr_people;
    prev_people = people;
    curr_people = people->next;
    while (curr_people) {
        stack++;
        if (strcmp(prev_people->last_name, name) == 0&&stack==1) {
            i++;
            
            printf("last name is %s\n", prev_people->last_name);
        }
        else if (strcmp(curr_people->last_name, name)==0) {
            printf("last name is %s\n", curr_people->last_name);
            prev_people->next = curr_people->next;
            
        }
        prev_people = curr_people;
        curr_people = curr_people->next;
    }
    
   
    ptr = people+i;

    while (ptr->next != NULL)
    {
        printf("%2d %s %-3s %s %s %d %s %s\n", ptr->tag, ptr->date, ptr->fee_paid, ptr->first_name, ptr->last_name, ptr->age, ptr->orga, ptr->job);
        ptr = ptr->next;
    }
}







void insert_gildong_arr()
{
    struct PERSON temp;
    
    int k = N + 1;

    people[N].tag = 20;
    strcpy(people[N].first_name,"Gildong");
    strcpy(people[N].last_name, "Paik");
    strcpy(people[N].date, "2020-11-30");
    strcpy(people[N].fee_paid, "yes");
    strcpy(people[N].orga, "Gachon University");
    strcpy(people[N].job, "student");
    people[N].age = 35;


    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (people[i].tag > people[j].tag)
            {
                swap(&people[i], &people[j]);
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%2d %s %-3s %s %s %d %s %s\n", people[i].tag, people[i].date, people[i].fee_paid, people[i].first_name, people[i].last_name, people[i].age, people[i].orga, people[i].job);
    }
}

void insert_gildong_node()
{
    struct PERSON* ptr;


    for (int i = 0; i <= N; i++)
    {
        if (i == N )
        {
            people[i].next = NULL;
        }
        people[i].next = &people[i + 1];
    }

    ptr = people;

    while ((*ptr).next != NULL)
    {
        printf("%2d %s %-3s %s %s %d %s %s\n", (*ptr).tag, (*ptr).date, (*ptr).fee_paid, (*ptr).first_name, (*ptr).last_name, (*ptr).age, (*ptr).orga, (*ptr).job);
        ptr = ptr->next;
    }
}

void get_data(){
    for(i=0;i<5;i++)
        strcpy(line1[i],people[N-5+i].last_name);
    
    for(i=0;i<5;i++){
        count=strlen(line1[i]);
        for(j=0;j<count;j++){
            checksum+=MASK^line1[i][j];
        }
    }
}
void copy_compare_data(){
    FILE* fp=fopen("compare.txt","w");

    fprintf(fp,"%d\n",checksum);
    for(i=0;i<5;i++){
        fprintf(fp,"%s\n",line1[i]);
    }
    fclose(fp);

    fp=fopen("compare.txt","r");

    int checksum_compare;
    int checksum_copy=0;
    fscanf(fp,"%d",&checksum_compare);
    for(i=0;i<5;i++){
        fscanf(fp,"%s\n",line2[i]);
    }
    
    for(i=0;i<5;i++){
        count=strlen(line2[i]);
        for(j=0;j<count;j++){
            checksum_copy+=MASK^line2[i][j];
        }
    }

    int result=-1;

    result=checksum_compare^checksum_copy; 

    if(result==0){
        printf("same data sent.\n");
    }
    else
    {
        printf("error:different data sent!\n");
    }
    fclose(fp);
}

int main()
{
    setup();
   
    head = people;
    
    char name[5] = "Choi";
    char university[18] = "Gachon University";

    printf("\n=====Search for Choi=====\n");
    search(name);

    printf("\n====Search for Gachon University====\n");
    search(university);

    printf("\n====Sort by tag====\n");
    sort_by_tag();

    printf("\n ====Create Linked List=====\n");
    create_linked_list();

    printf("\n====Sort by age====\n");
    sort_by_age();

    printf("====Write Sorted Data====\n");
    write_data();

    printf("====Write deleted Node====\n");
    delete_name_node(name);

    printf("====Write deleted choi====\n");
    delete_name_arr(name);

    printf("====inserted gildong====\n");
    insert_gildong_arr();

    printf("\n====send data and check chechsum====\n");
    get_data();
    copy_compare_data();

    return 0;
}