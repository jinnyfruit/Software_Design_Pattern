#include <stdio.h>
#include <string.h>
int my(char* str) {
	int i;
	int count = 0;
	for (i = 0; i < 100; i++) {
		if (str[i] != '\0')
			count++;
		else
			break;
	}
	return count;
}
int main() {
	char str[100];
	gets(str, sizeof(str));

	my(str);

	printf("result:%d", my(str));

}