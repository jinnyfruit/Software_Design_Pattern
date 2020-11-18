/*power function
 detail: using recursion

 made by: Ji Woo, Kim
 modified: 10.12,2020
 */
#include <stdio.h>

double power(float val, int pow) {
	if (pow == 0)
		return 1.0;
	else
		return val * power(val, pow - 1);
}

int main() {
	float i;
	int j;
	scanf("%f %d", &i, &j);
	power(i, j); //function call

	printf("\n result:  %.2lf", power(i, j));
	return 0;
}