#include <stdio.h>
void calculate(int*, int*, int*, int*, int*, int*);
void calculate(int* n1, int* n2, int* r1, int* r2, int* r3, int* r4) {
	*r1 = *n1 * *n2;
	*r2 = *n1 / *n2;
	*r3 = *n1 % *n2;
	*r4 = *n1 + *n2;
}
int main()
{
	int num1, num2;
	int p1, p2, p3, p4;
	printf("type two integers:");
	scanf_s("%d %d", &num1, &num2);

	calculate(&num1, &num2, &p1, &p2, &p3, &p4);

	printf("num1:%d,num2:%d\n", num1, num2);
	printf("result:\n mul=%d\n div=%d\n mod=%d\n add=%d\n", p1, p2, p3, p4);
}