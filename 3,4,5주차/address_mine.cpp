/* this file is about making a  addressbook and searching index*/
#include <stdio.h>
#include <string.h>

#define MAX_NUM 50

typedef struct adress {        /*struct address elements*/
    char firstname[MAX_NUM];
    char lastname[MAX_NUM];
    char email[MAX_NUM];

} Adress;

int index_search(char word[MAX_NUM], Adress list[3]) {   /*index search and it */
    int i = 0;
    int index;     /*만약에 kim이라는 성을 가진 사람이 두명 있는데 kim을 치면 여기서는 한명만 나온다.*/
    for (i = 0; i < 3; i++) {
        if ((!strcmp(word, list[i].firstname))|| (!strcmp(word, list[i].lastname))
            index++;
    }
    
   
}
void view_index(char word[MAX_NUM], Adress* list) {
    int value;

    value = index_search(word, list);

    printf("%s %s %s", list[value].lastname, list[value].firstname, list[value].email);

}

int main()
{
    Adress teamA[3] = { {"youngin","Ji","yeong010601@gmail.com"},
                        {"JiWoo","Kim","jinnyfruit0527@gmail.com"},
                        {"sangtaek","Lim","im917799@naver.com"}
    };
    char str[MAX_NUM];
    printf("name:");
    char name[MAX_NUM];
    scanf_s("%s", name, sizeof(name));

    view_index(str, teamA);

    return 0;
}
