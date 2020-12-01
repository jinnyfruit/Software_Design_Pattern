#include <stdio.h>

void change(float, int*, int*, int*, int*);

void main()
{
	float dollar;
	int quarters, dimes, nickels, pennies;
	scanf_s("%f", &dollar);		//input the dollar
	change(dollar, &quarters, &dimes, &nickels, &pennies);
	printf("quarters : %d\ndimes : %d\nnickels : %d\npennies : %d\n", quarters, dimes, nickels, pennies);	//print the number of coins
}

void change(float dollar, int* q, int* d, int* n, int* p)
{
	int cents = dollar * 100;	//exchange dollars for cents
	*q = cents / 25;	//calculate the number of quarters
	cents %= 25;		//calculate the change
	*d = cents / 10;	//calculate the number of dimes
	cents %= 10;
	*n = cents / 5;		//calculate the number of nickels
	cents %= 5;
	*p = cents;			//get the ramaining cents
}
