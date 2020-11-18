#include <stdio.h>
void liquid(int, float*, float*, float*);  // function definition
void liquid(int cup, float* pint, float* quart, float* gallon) {  //fuction definition

	*pint = (float)cup / 2.0;        //2cups==pint
	*quart = (float)cup / 4.0;		//4cups==quart
	*gallon = (float)cup / 16.0;	//16cups==gallon
}
int main()
{
	int cupNum;
	float pint, quart, gallon;
	printf("type the number of cup:");
	scanf_s("%d", &cupNum);

	liquid(cupNum, &pint, &quart, &gallon);    //function call

	printf("%d cup\n", cupNum);
	printf("is equal as \n %.2f pint\n %.2f quart\n%.2f gallon", pint, quart, gallon);  // print the result
}
