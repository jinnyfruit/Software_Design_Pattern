#include <stdio.h>
#define MAXNUM 5
void main()
{ // 지역함수 알아보기//
  // main 함수 안에서 함수를 만들어서 사용할 수 있다. //
  //여기서 핵심은 함수를 만들어서 사용할 때 배열[]안에 숫자를 넣지 않아도 된다는 것이다.//
  // 함수 안으로 배열 첫번째의 주소가 자동으로 들어가게 된다//
	
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