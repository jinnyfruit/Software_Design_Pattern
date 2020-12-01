/* this file is about searching string in the given string. */
#include <stdio.h>
#define MAXNUM 20
void string_search(char str1[MAXNUM], char str2[MAXNUM], char str3[MAXNUM], char word[MAXNUM]) {
	int i = 0, j;
	int count = 0;
	int value = 0;
	while (word[i] != '\0') {    //count the number of alphabet of the word
		count++;
		i++;
	}
	for (i = 0; i < MAXNUM; i++) {
		if (str1[i] == word[0]) {
			for (j = 0; j < count; j++) {
				if (str1[i + j] == word[j])
					value++;
				else
					break;
			}
		}
	}
	if (value == count)
		printf("string 1:found\n");
	else
		printf("string 1:not found\n");

	value = 0;

	for (i = 0; i < MAXNUM; i++) {
		if (str2[i] == word[0]) {
			for (j = 0; j < count; j++) {
				if (str2[i + j] == word[j])
					value++;
				else
					break;
			}
		}
	}
	if (value == count)
		printf("string 2:found\n");
	else
		printf("string 2:not found\n");

	value = 0;

	for (i = 0; i < MAXNUM; i++) {
		if (str3[i] == word[0]) {
			for (j = 0; j < count; j++) {
				if (str3[i + j] == word[j])
					value++;
				else
					break;
			}
		}
	}
	if (value == count)
		printf("string 3:found\n");
	else
		printf("string 3:not found\n");

}
int main() {
	char str[MAXNUM];

	char given1[MAXNUM] = "Is your name Bob?";
	char given2[MAXNUM] = "No, my name is Bob.";
	char given3[MAXNUM] = "Hello, Rob.";

	printf("1.Is your name Bob?\n"); //show the given strings
	printf("2.No, my name is Bob.\n");
	printf("3. Hello, Rob.\n");

	printf("type a string you wanna search in the given strings:");
	scanf_s("%s", str, sizeof(str)); //get the string you wanna search

	string_search(given1, given2, given3, str);

	return 0;
}
