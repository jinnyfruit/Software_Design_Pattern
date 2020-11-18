#include <stdio.h>
void extend(double*, double*, double*);
void extend(double* price, double* quantity, double* amount) {
	for (int i = 0; i < 10; i++) {
		amount[i] = price[i] * quantity[i];
	}
}
void main()
{
	double price[10] = { 10.62,14.89,13.21,16.55,18.62,9.47,6.58,18.32,12.15,3.98 };
	double quantity[10] = { 4,8.5,6,8.35,9,15.3,3,5.4,2.9,4.8 };
	double amount[10];

	extend(price, quantity, amount);
	printf("price:");
	for (int i = 0; i < 10; i++) {
		printf("%.2lf \t", price[i]);
	}
	printf("\n");
	printf("quantity:");
	for (int i = 0; i < 10; i++) {
		printf("%.2lf \t", quantity[i]);
	}
	printf("\n");
	printf("amount:");
	for (int i = 0; i < 10; i++) {
		printf("%.2lf \t", amount[i]);
	}
}
