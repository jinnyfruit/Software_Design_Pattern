#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WILD_CARD "*"

void seperate_word(char* str, char* first, char* second) {

    int i, j;

    for (i = 0; str[i] != *WILD_CARD; i++) {//"*" -> WILD_CARD[0] -> *(WILD_CARD+0) -> *WILD_CARD
        first[i] = str[i];
    }

    i += strlen(WILD_CARD);
    for (j = 0; j + i < strlen(str); j++) {
        second[j] = str[i + j];
    }

}

int count_blank(char* start, char* finish) {

    int returnValue = 0;

    for (char* i = start; i < finish; i++) {
        if (i[0] == ' ') {
            returnValue++;
        }
    }

    return returnValue;
}

int search_str(char* sentence, char* first, char* second) {//hong, dong

    int result = 0, blank;
    char* first_ptr;
    char* second_ptr;

    first_ptr = strstr(sentence, first);//첫번째 hong을 찾음

    while (first_ptr != NULL) {
        //strstr(시작 주소, 찾을 문자열) -> 찾은 문자열의 시작 주소(Error = NULL)
        second_ptr = strstr(first_ptr, second);

        if (second_ptr != NULL) {//dong이 있어! 

            blank = count_blank(first_ptr + strlen(first), second_ptr);//시작 주소와 끝 주소를 기준으로 띄어쓰기

            if (blank == 0 || blank == 2) {
                result++;
            }
        }

        first_ptr = strstr(first_ptr + 1, first);
    }

    return result;

}
int main() {
    char sentence[120] = "hong gil dong is brother of hong ja dong", search_string[20] = "hong * dong";
    char firstStr[20] = "", secondStr[20] = "";

    for (int i = 0; i < 5; i++) {
        printf("Type a sentence : ");
        //gets_s(sentence, sizeof(sentence)); //accept sentence

        printf("Type a sentence want to search [wildcard(*) must be used once and only in the middle of string]  : ");
        //gets_s(search_string, sizeof(search_string));   //accept what you want to search

        seperate_word(search_string, firstStr, secondStr);
        //printf("\'%s\' and \'%s\'\n", firstStr, secondStr);

        int res = search_str(sentence, firstStr, secondStr);
        printf("Count of searching '%s' is %d\n\n", search_string, res);
    }
}