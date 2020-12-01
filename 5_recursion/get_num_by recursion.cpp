/*get num function
 detail: using recursion

 made by: Ji Woo, Kim
 modified: 10.16,2020
 */
#include <stdio.h>

int get_num(int num, int count) {

	if (count == 0)
		return -1; //defensive coding
	if (count == 1)
		return num % 10;
	else
		return get_num(num / 10, count - 1);
}
int main() {
	int i, j;
	printf("type an integer");
	scanf("%d", &i);

	printf("\n type a number you wanna get:");
	scanf("%d", &j);

	get_num(i, j);
	printf("result:%d", get_num(i, j));

	return 0;
}