//array


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MASK 0x40

int a = 0;

struct PERSON {
    int tag;
    char date[20];
    char fee[5];
    char first_name[30];
    char last_name[30];
    int age;
    char organization[40];
    char job[15];
    struct PERSON* next;
}p[100], temp;


struct PERSON* head;

void setup()
{
    FILE* in;
    in = fopen("registraion_data.txt", "r");


    while (fscanf(in, "%d/%[^/]/%[^/]/%[^ ] %[^/]/%d/%[^/]/%s", &p[a].tag, p[a].date, p[a].fee, p[a].first_name, p[a].last_name, &p[a].age, p[a].organization, p[a].job) == 8)
    {

        printf("%2d %1s %-3s %s %s %d %s %s\n", p[a].tag, p[a].date, p[a].fee, p[a].first_name, p[a].last_name, p[a].age, p[a].organization, p[a].job);

        a++;

    }


    fclose(in);
}




void search(char* search_word)
{
    printf("search word: %s\n\n", search_word);

    for (int i = 0; i < a; i++)
    {

        if (strcmp(search_word, p[i].last_name) == 0)
        {
            printf("%2d %1s %-3s %s %s %d %s %s\n", p[i].tag, p[i].date, p[i].fee, p[i].first_name, p[i].last_name, p[i].age, p[i].organization, p[i].job);
        }
        if (strcmp(search_word, p[i].organization) == 0)
        {
            printf("%2d %1s %-3s %s %s %d %s %s\n", p[i].tag, p[i].date, p[i].fee, p[i].first_name, p[i].last_name, p[i].age, p[i].organization, p[i].job);
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

    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (p[i].tag > p[j].tag)
            {
                swap(&p[i], &p[j]);
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        printf("%2d %s %-3s %s %s %d %s %s\n", p[i].tag, p[i].date, p[i].fee, p[i].first_name, p[i].last_name, p[i].age, p[i].organization, p[i].job);
    }
}

void sort_by_tag_node()
{
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (p[i].tag > p[j].tag)
            {
                swap(&p[i], &p[j]);
            }
        }
    }
}

void create_linked_list()
{
    struct PERSON* ptr;
    ptr = p;
    for (int i = 0; i < a; i++) {
        if (i == a - 1) {
            p[i].next = NULL;
        }
        p[i].next = &p[i + 1];
    }
    while ((*ptr).next != NULL) {
        printf("%d %s %s %s %s %d %s %s\n", (*ptr).tag, (*ptr).date, (*ptr).fee, (*ptr).first_name, (*ptr).last_name, (*ptr).age, (*ptr).organization, (*ptr).job);
        ptr = ptr->next;
    }
}

void sort_by_age()
{

    int ages;

    struct PERSON temp;

    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (p[i].age > p[j].age)
            {
                swap(&p[i], &p[j]);
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        printf("%2d %s %-3s %s %s %d %s %s\n", p[i].tag, p[i].date, p[i].fee, p[i].first_name, p[i].last_name, p[i].age, p[i].organization, p[i].job);
    }

    ages = p[0].age / 10;
    printf("\n\n\n=======Age grouping =======\n\n\n");
    printf("\n===Age %d0~%d9===\n ", ages, ages);

    for (int i = 0; i < a; i++)
    {
        if (p[i].age / 10 != ages)
        {
            ages = p[i].age / 10;
            printf("\n===Age %d0~%d9===\n ", ages, ages);
            printf("%2d %s %-3s %s %s %d %s %s\n", p[i].tag, p[i].date, p[i].fee, p[i].first_name, p[i].last_name, p[i].age, p[i].organization, p[i].job);
        }
        else {
            printf("%2d %s %-3s %s %s %d %s %s\n", p[i].tag, p[i].date, p[i].fee, p[i].first_name, p[i].last_name, p[i].age, p[i].organization, p[i].job);
        }
    }




}
void write_data()
{
    FILE* out = fopen("sorted_Data.txt", "w");

    int ages;
    ages = p[0].age / 10;
    fprintf(out, "\n=======Age grouping =======\n\n\n");
    fprintf(out, "\n===Age %d0~%d9===\n ", ages, ages);

    for (int i = 0; i < a; i++)
    {
        if (p[i].age / 10 != ages)
        {
            ages = p[i].age / 10;
            fprintf(out, "\n===Age %d0~%d9===\n ", ages, ages);
            fprintf(out, "%2d %s %-3s %s %s %d %s %s\n", p[i].tag, p[i].date, p[i].fee, p[i].first_name, p[i].last_name, p[i].age, p[i].organization, p[i].job);
        }
        else {
            fprintf(out, "%2d %s %-3s %s %s %d %s %s\n", p[i].tag, p[i].date, p[i].fee, p[i].first_name, p[i].last_name, p[i].age, p[i].organization, p[i].job);
        }
    }


    fclose(out);
}

void delete_name_arr(char* name) {
    int i, j, stack = 0;
    for (i = 0; i < a; i++) {
        if (strcmp(name, p[i].last_name) == 0) {
            stack += 1;
            for (j = i; j < a; j++) {

                p[j].tag = p[j + 1].tag;
                strcpy(p[j].date, p[j + 1].date);
                strcpy(p[j].fee, p[j + 1].fee);
                strcpy(p[j].first_name, p[j + 1].first_name);
                strcpy(p[j].last_name, p[j + 1].last_name);
                p[j].age = p[j + 1].age;
                strcpy(p[j].organization, p[j + 1].organization);
                strcpy(p[j].job, p[j + 1].job);
            }
        }
    }
    a = a - stack;
    for (int i = 0; i < a; i++) {
        printf("%2d %s %-3s %s %s %d %s %s\n", p[i].tag, p[i].date, p[i].fee, p[i].first_name, p[i].last_name, p[i].age, p[i].organization, p[i].job);
    }

}

void delete_name_node(char* name) {
    for (int i = 0; i < a; i++)
    {
        if (i == a - 1)
        {
            p[i].next = NULL;
        }
        p[i].next = &p[i + 1];
    }
    struct PERSON* ptr;
    int i = 0, stack = 0;
    struct PERSON* prev_people, * curr_people;
    prev_people = p;
    curr_people = p->next;
    while (curr_people) {
        stack++;
        if (strcmp(prev_people->last_name, name) == 0 && stack == 1) {
            i++;

            printf("last name is %s\n", prev_people->last_name);
        }
        else if (strcmp(curr_people->last_name, name) == 0) {
            printf("last name is %s\n", curr_people->last_name);
            prev_people->next = curr_people->next;

        }
        prev_people = curr_people;
        curr_people = curr_people->next;
    }


    ptr = p + i;

    while (ptr->next != NULL)
    {
        printf("%2d %s %-3s %s %s %d %s %s\n", ptr->tag, ptr->date, ptr->fee, ptr->first_name, ptr->last_name, ptr->age, ptr->organization, ptr->job);
        ptr = ptr->next;
    }
}







void insert_gildong_arr()
{
    struct PERSON temp;

    int k = a + 1;

    p[a].tag = 31;
    strcpy(p[a].first_name, "Gildong");
    strcpy(p[a].last_name, "Paik");
    strcpy(p[a].date, "2020-11-30");
    strcpy(p[a].fee, "yes");
    strcpy(p[a].organization, "Gachon University");
    strcpy(p[a].job, "student");
    p[a].age = 35;


    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (p[i].age > p[j].age)
            {
                swap(&p[i], &p[j]);
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%2d %s %-3s %s %s %d %s %s\n", p[i].tag, p[i].date, p[i].fee, p[i].first_name, p[i].last_name, p[i].age, p[i].organization, p[i].job);
    }
}

void insert_gildong_node()
{
    struct PERSON* ptr;

    int i = 0;

    sort_by_tag_node();

    for (int i = 0; i <= a; i++)
    {
        if (i == a)
        {
            p[i].next = NULL;
        }
        p[i].next = &p[i + 1];
    }

    ptr = p;

    while (i!=a)
    {
        printf("%2d %s %-3s %s %s %d %s %s\n", (*ptr).tag, (*ptr).date, (*ptr).fee, (*ptr).first_name, (*ptr).last_name, (*ptr).age, (*ptr).organization, (*ptr).job);
        ptr = ptr->next;
        i++;
    }
}

void make_checksum(){
    int checksum = 0;
    char line1[5][10];  //get five recent data 
    for(int i = 0; i < 5; i++)
        strcpy(line1[i], p[a-5+i].last_name);   //copy the last name
    for(int i = 0; i < 5; i++){
        int count = strlen(line1[i]);   //get the length of line1
        for(int j = 0; j < count; j++)
            checksum += MASK ^ line1[i][j]; //bitwise operation
    }
    
    FILE* fp = fopen("compare.txt","w");    //make a new file (assume we are sending data)
    fprintf(fp,"%d\n", checksum);   // send checksum and data 
    for(int i = 0; i < 5; i++)
        fprintf(fp, "%s\n", line1[i]);
    fclose(fp);
}
void compare_checksum()
{
    char line2[5][10];
    FILE* fp = fopen("compare.txt", "r");   //read a copied data
    int checksum_compare;   //checksum of original data
    int checksum_copy=0;    //checksum of copied file
    fscanf(fp,"%d",&checksum_compare);

    for(int i = 0; i < 5; i++)
        fscanf(fp,"%s\n",line2[i]);
    for(int i = 0; i < 5;i++){
        int count = strlen(line2[i]);
        for(int j = 0; j < count; j++)
            checksum_copy+=MASK^line2[i][j];
    }

    if(checksum_copy==0){   //data haven't send
        printf("no file made"); //defensive coding
    }

    if((checksum_compare ^ checksum_copy) == 0) //check if the original data and copied data are same.
        printf("same data sent.\n");
    else
        printf("error:different data sent!\n"); //if not, print error!
    fclose(fp);
}


int main()
{
    setup();

    head = p;

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

    printf("====inserted gildong node====\n");
    insert_gildong_node();

    printf("\n====send data and check chechsum====\n");
    make_checksum();
    compare_checksum();

    return 0;
}
