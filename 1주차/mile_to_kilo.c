#include <stdio.h>
#define MAXNUM 5
void main()
{ // �����Լ� �˾ƺ���//
  // main �Լ� �ȿ��� �Լ��� ���� ����� �� �ִ�. //
  //���⼭ �ٽ��� �Լ��� ���� ����� �� �迭[]�ȿ� ���ڸ� ���� �ʾƵ� �ȴٴ� ���̴�.//
  // �Լ� ������ �迭 ù��°�� �ּҰ� �ڵ����� ���� �ȴ�//
	
	void mile2km(float[MAXNUM]);
	float miles[MAXNUM];
	for (int i = 0; i < 5; i++)
		scanf_s("%f", &miles[i]);
	mile2km(miles);
}
void mile2km(float local_array[]) {
	int i;
	for (i = 1; i < MAXNUM; i++)
		printf("%f", local_array[i] * 1.6093);
}