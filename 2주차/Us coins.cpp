#include <stdio.h>
void change(int, int*, int*, int*, int*);
void change(int num, int* penny, int* neckel, int* dime, int* quarter) {  //function definition

	*quarter = num / 25;
	num = num % 25;

	*dime = num / 10;
	num = num % 10;

	*neckel = num / 5;
	num = num % 5;

	*penny = num / 1;
}
int main() {
	int value;
	int penny, neckel, dime, quarter;
	printf("enter the amount of cash you have:");
	scanf_s("%d", &value);

	change(value, &penny, &neckel, &dime, &quarter);  //function call

	printf("%d is equal as\n", value);
	printf("Quarter:%d\n Dime:%d\n Neckel:%d\n Penny:%d ", quarter, dime, neckel, penny);

}