/*factorial in C
 detail: using recursion fuction

 made by: Ji Woo, Kim
 modified: 10.12,2020
 */
#include <stdio.h>

int factorial(int n) {

	if (n < 2) {	//turmination condition
		return n;	//recursive ends.
	}
	else
		return n * factorial(n - 1);	//else,recursive steps
}

int main() {
	int num;
	int value;

	printf("type a integer factorial(ex-3!)");
	scanf("%d!", &num);	//get a integer

	value = factorial(num);	//put a factorial value into "value"
	printf("\n%d! is %d", num, value);	//show the value
	return 0;
}