#include <stdio.h>
#define MAXNUM 1000
int word_count(char arr[]);
int word_count(char arr[MAXNUM]) {
	int count = 0;
	for (int i = 0; i < MAXNUM; i++) {
		if ((arr[i] >= 65 && arr[i] <= 90) || (arr[i] >= 97 && arr[i] <= 122))
			count++;
	}
	return count;
}
int main()
{
	char str[MAXNUM];
	gets_s(str);
	word_count(str); //��� ���� �Ƚᵵ �Ǳ� �ϴ� ������� ����ҰŸ�.
	printf("%d", word_count(str));
	return 0;
}