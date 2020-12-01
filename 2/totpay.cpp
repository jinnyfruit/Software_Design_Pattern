#include <stdio.h>
#define MAXNUM 5
void totpay(float[], float[], float[]);
void totpay(float base[], float overtime[], float total[])
{
	int i;
	for (i = 0; i < MAXNUM; i++) {
		total[i] = base[i] + overtime[i];
	}
}
int main(void)
{
	float base[MAXNUM], overtime[MAXNUM], total[MAXNUM];
	int i;
	for (i = 0; i < MAXNUM; i++) {
		printf("%d번째 base:", i);
		scanf_s("%f", base[i]);

		printf("\n");

		printf("%d번째 overtime:", i);
		scanf_s("%f", overtime[i]);
	}
	totpay(base, overtime, total);

	for (i = 0; i < MAXNUM; i++) {
		printf("%-2d", total[i]);
	}
}


