#include <stdio.h>
struct Date {
	int month;
	int day;
	int year;
};
void Days(Date* date, int* result) {
	*result = (date->month - 1) * 30 + (date->day - 1) + (date->year - 2000) * 360;
}
int main()
{
	Date birthday = { 11, 5, 2001 };
	int result;
	Days(&birthday, &result);
	printf("%d/%d/%d\n", 11, 5, 2001);
	printf("%d\n", result);
	return 0;
}