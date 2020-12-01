/*bs function
 detail: using recursion

 made by: Ji Woo, Kim
 modified: 10.15,2020
 */
#include <stdio.h>

int bs(int list[], int lo, int hi, int key) {
	int mid;

	if (lo > hi)
		return -1;
	mid = (lo + hi) / 2;

	if (list[mid] == key)
		return 0;
	else if (list[mid] > key)
		bs(list, lo, mid - 1, key);
	else if (list[mid] < key)
		bs(list, mid + 1, hi, key);
}

int main() {

	int arr[] = { 5,10,15,25,45 };

	int lo = 1, hi = 3, key = 25;
	bs(arr, lo, hi, key);

	printf("\n result:%d", bs(arr, lo, hi, key));

	return 0;
}
