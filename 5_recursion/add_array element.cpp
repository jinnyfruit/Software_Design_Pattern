/*add array elements
 detail: using recursion

 made by: Ji Woo, Kim
 modified: 10.14,2020
 */
#include <stdio.h>

int add_array(int* arr, int n) {
	if (n < 1 || n>8) //defensive coding
		return -1;
	if (n == 1)	//termination
		return arr[0];
	else
		return arr[n - 1] + add_array(arr, n - 1);	//recursive step
}

int main() {
	int i;
	int arr[] = { 20,30,10,50,15,45,80,25 };	//initialize the integer array

	printf("array:");
	for (int j = 0; j < 8; j++) {
		printf(" %d\t", arr[j]);
	}
	printf("\n");

	printf("how much you want to add in this array? ");
	scanf("%d", &i);

	add_array(arr, i); //function call

	printf("result: %d", add_array(arr, i)); //result view
	return 0;
}