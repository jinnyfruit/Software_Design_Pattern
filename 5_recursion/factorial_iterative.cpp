/*factorial in C
 detail: using iterative fuction

 made by: Ji Woo, Kim
 modified: 10.12,2020
 */
#include <stdio.h>

int main() {
	int i, num;
	int value = 1;

	printf("type a integer factorial(ex-3!)");
	scanf("%d!", &num);	//get a integer

	for (i = 1; i <= num; i++) {
		value = value * i;		//get a factorial using iterative steps
	}
	printf("%d! is %d", num, value); //show the result
}