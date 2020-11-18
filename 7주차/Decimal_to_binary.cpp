/*binary function
 detail: using recursion

 made by: Ji Woo, Kim
 modified: 10.15,2020
 */
#include <stdio.h>

void bin(int num) {
	if (num == 0 || num == 1)
		printf("%d", num);
	else {
		bin(num / 2);
		printf("%d", num % 2);
	}
}
int main() {
	int i;
	printf("type an integer");
	scanf("%d", &i);

	bin(i);
}