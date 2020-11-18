/*word_back
 detail: using recursion

 made by: Ji Woo, Kim
 modified: 10.12,2020
 */
#include <stdio.h>

void word_back(void) {
	int c;	//get a letter by getchar until \n is typed
	if ((c = getchar()) != '\n')	//termination is \n
		word_back();	//recursive steps- save letters in all different 'c'
	putchar(c);	//when termination happens, print letter by letter via putchar
}

int main() {

	printf("type a string:  ");

	word_back();
	printf("\n");

	return 0;
}