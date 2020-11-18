#include <stdio.h>
int main()
{
	int student[2][5];   //Since it is impossible to test all 100 times, it is assumed to be 5 randomly//
	int max_age, min_age;
	int max_score, min_score;
	int maxAgeCount = 0, minAgeCount = 0;
	int maxScoreCount = 0, minScoreCount = 0;

	int i;//height, weidth

	//Enter student data at once//
	for (i = 0; i < 5; i++) {
		printf("type student age : ");
		scanf_s("%d", &student[0][i]);
		if (student[0][i] <= 0) {       //If a value less than 0 appears, re-enter it. Output, re-enter by doing i--//
			printf("type again\n");     //so when you enter -1 for example, you should enter again//
			i--;
		}
	}

	for (i = 0; i < 5; i++) {
		printf("type student score : ");
		scanf_s("%d", &student[1][i]);
		if (student[0][i] <= 0) {
			printf("type again\n");
			i--;
		}
	}

	//Student data analysis//
	
	 //Rather than specifying a value and initializing it, it is initialized based on the first data.//
	max_age = student[0][0];     
	min_age = student[0][0];

	max_score = student[1][0];
	min_score = student[1][0];

	//Find and save the maximum and minimum values //
	for (i = 0; i < 5; i++) {               
		if (student[0][i] > max_age)
			max_age = student[0][i];

		if (student[0][i] < min_age)
			min_age = student[0][i];

		if (student[1][i] > max_score)
			max_score = student[1][i];

		if (student[1][i] < min_score)
			min_score = student[1][i];
	}

	// Check who corresponds to the maximum and minimum value(overlapping) //
	for (i = 0; i < 5; i++) {   
		if (student[0][i] == max_age)
			maxAgeCount++;

		if (student[0][i] == min_age)
			minAgeCount++;

		if (student[1][i] == max_score)
			maxScoreCount++;

		if (student[1][i] == min_score)
			minScoreCount++;
	}
	//print the final max,min value and overlapping number of people//
	printf("max age:%d total person:%d, min age:%d total person:%d\n", max_age, maxAgeCount, min_age, minAgeCount);    
	printf("max score:%d total person:%d, min score:%d total person:%d\n", max_score, maxScoreCount, min_score, minScoreCount);
}