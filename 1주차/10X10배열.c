#include <stdio.h>
int main()
{
	int num1[10][10], num2[10][10], num3[10][10];

	int value = 0;
	int i, j;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {

			num1[i][j] = value;
			value++;
		}
	}

	value = 0;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {

			num2[i][j] = value;
			value += 2;
		}
	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("%2d ", num1[i][j]);

		}
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("%3d ", num2[i][j]);

		}
		printf("\n");
	}
	printf("\n");

	//행렬의 곱 공식 그냥 외우자^^//
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				num3[i][j] += num1[i][k] * num2[k][j];
			}
		}
	}
	printf("\n");

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("%6d", num3[i][j]);

		}
		printf("\n");
	}
	printf("\n");
}
