/* this file is about searching data, using index*/
#include <stdio.h>
#include <string.h>

#define MAX_NUM 20

typedef struct dataset {       /*struct the dataset*/
    int num;
    char name[MAX_NUM];
    int age;
    char hobby[MAX_NUM];

} Dataset;

typedef struct node {           /*struct the node*/
    char key[MAX_NUM];
    int arryIndex;
} Node;

void insert_node(Dataset* list, Node* node) {   /*put two(number and name) dataset values into the nodes*/
    int i;
    for (i = 0; i < 5; i++) {
        strcpy(node[i].key, list[i].name);
        node[i].arryIndex = list[i].num;
    }
}

int search_node(Node* node, char* name) {

    for (int i = 0; i < 5; i++) {
        if (!strcmp(name, node[i].key)) {
            return i;
        }
    }
}

int main()
{
    /*define five datasetand index array*/
    Dataset list[5] = { {0,"Kim",39,"Tennis"} ,
                   {1,"Ko",15,"Soccer"},
                   {2, "Lee", 17, "Soccer"},
                   {3, "Choi", 21, "Tennis"},
                   {4, "Park", 10, "Tennis"} };
    Node node[5];
    char name[MAX_NUM];
    int index;

    insert_node(list, node);        /*put the data into the index node*/

    for (int i = 0; i < 2; i++) {
        printf("Name : ");
        scanf("%s", name);

        index = search_node(node, name);

        printf("age:%d, hobby:%s\n", list[index].age, list[index].hobby);
    }
    return 0;
}