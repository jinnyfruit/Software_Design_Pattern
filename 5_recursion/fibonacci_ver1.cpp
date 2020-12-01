/*fibonacci sequence
 detail: using recursion

 made by: Ji Woo, Kim
 modified: 10.12,2020
 */
#include <stdio.h>

int fibo(int n) {

	while (1) {
		if (n < 0)
			return -1;	//defensive coding
		if (n < 2)		//termination 
			return n;
		else
			return fibo(n - 1) + fibo(n - 2);	//recursive steps
	}
}

int main() {
	int num;

	printf("Enter the number of Fibonacci sequences you want to see:\t");
	scanf("%d", &num);
	fibo(num);

	printf("%dth fibonacci sequence is %d", num + 1, fibo(num)); //print the result

}