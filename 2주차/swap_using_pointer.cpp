#include <stdio.h>
//swap two integers using poiter//
void swap(int*, int*);
void swap(int* num1, int* num2) {
	int value;
	value = *num1;
	*num1 = *num2;
	*num2 = value;
}
int main()
{
	int num1, num2;
	printf("type two integer:");
	scanf_s("%d %d", &num1, &num2);

	swap(&num1, &num2);

	printf("%d %d", num1, num2);

}