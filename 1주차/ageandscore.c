#include <stdio.h>
int main()
{
	int student[2][3];   //100���� �� test�غ� �� ���� ������ ���������� 3������ ����//
	int max_age, min_age;
	int max_score, min_score;
	int maxAgeCount = 0, minAgeCount = 0;
	int maxScoreCount = 0, minScoreCount = 0;

	int i;//height, weidth

	//�л������� �ѹ��� �Է�
	for (i = 0; i < 3; i++) {
		printf("type student age : ");
		scanf_s("%d", &student[0][i]);
		if (student[0][i] <= 0) {       //0������ ���� ������ �ٽ� �Է��ϼ��� ���, i--�� �������ν� �ٽ� �Է�//
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

	//�л������� �м�
	max_age = student[0][0];     //���� ���� �����ؼ� �ʱ�ȭ���ֱ⺸�ٴ� ù �����͸� �������� �ʱ�ȭ//
	min_age = student[0][0];

	max_score = student[1][0];
	min_score = student[1][0];

	for (i = 0; i < 3; i++) {               //�ִ��ּҰ� ã�� ����//
		if (student[0][i] > max_age)
			max_age = student[0][i];

		if (student[0][i] < min_age)
			min_age = student[0][i];

		if (student[1][i] > max_score)
			max_score = student[1][i];

		if (student[1][i] < min_score)
			min_score = student[1][i];
	}
	for (i = 0; i < 3; i++) {   //�ִ��ּҰ��� �ش�Ǵ� ���(�ߺ�)Ȯ��//
		if (student[0][i] == max_age)
			maxAgeCount++;

		if (student[0][i] == min_age)
			minAgeCount++;

		if (student[1][i] == max_score)
			maxScoreCount++;

		if (student[1][i] == min_score)
			minScoreCount++;
	}

	printf("max age:%d total person:%d, min age:%d total person:%d\n", max_age, maxAgeCount, min_age, minAgeCount);    //��������//
	printf("max score:%d total person:%d, min score:%d total person:%d\n", max_score, maxScoreCount, min_score, minScoreCount);
}