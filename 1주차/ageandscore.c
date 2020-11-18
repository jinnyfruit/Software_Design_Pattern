#include <stdio.h>
int main()
{
	int student[2][3];   //100번을 다 test해볼 수 없기 때문에 임의적으로 3명으로 가정//
	int max_age, min_age;
	int max_score, min_score;
	int maxAgeCount = 0, minAgeCount = 0;
	int maxScoreCount = 0, minScoreCount = 0;

	int i;//height, weidth

	//학생데이터 한번에 입력
	for (i = 0; i < 3; i++) {
		printf("type student age : ");
		scanf_s("%d", &student[0][i]);
		if (student[0][i] <= 0) {       //0이하의 값이 나오면 다시 입력하세요 출력, i--를 해줌으로써 다시 입력//
			printf("type again\n");
			i--;
		}
	}

	for (i = 0; i < 3; i++) {
		printf("type student score : ");
		scanf_s("%d", &student[1][i]);
		if (student[0][i] <= 0) {
			printf("type again\n");
			i--;
		}
	}

	//학생데이터 분석
	max_age = student[0][0];     //값을 따로 지정해서 초기화해주기보다는 첫 데이터를 기준으로 초기화//
	min_age = student[0][0];

	max_score = student[1][0];
	min_score = student[1][0];

	for (i = 0; i < 3; i++) {               //최대최소값 찾고 저장//
		if (student[0][i] > max_age)
			max_age = student[0][i];

		if (student[0][i] < min_age)
			min_age = student[0][i];

		if (student[1][i] > max_score)
			max_score = student[1][i];

		if (student[1][i] < min_score)
			min_score = student[1][i];
	}
	for (i = 0; i < 3; i++) {   //최대최소값에 해당되는 사람(중복)확인//
		if (student[0][i] == max_age)
			maxAgeCount++;

		if (student[0][i] == min_age)
			minAgeCount++;

		if (student[1][i] == max_score)
			maxScoreCount++;

		if (student[1][i] == min_score)
			minScoreCount++;
	}

	printf("max age:%d total person:%d, min age:%d total person:%d\n", max_age, maxAgeCount, min_age, minAgeCount);    //결과값출력//
	printf("max score:%d total person:%d, min score:%d total person:%d\n", max_score, maxScoreCount, min_score, minScoreCount);
}