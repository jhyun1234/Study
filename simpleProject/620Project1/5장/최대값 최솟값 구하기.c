#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{

	int num1, num2,num3;

	int max,min;

	printf("정수 3개를 입력하세요.");

	scanf("%d %d %d", &num1, &num2, &num3);
	max = num1;
	if (num2 > max)
	{
		max = num2;
		
	}
	if (num3 > max)
	{
		 max = num3;
	}
	printf("가장 큰 정수 %d\n", max);

	min = num2;

	if (num1 < min)
	{
		min = num1;
	}
	if (num3 < min)
	{
		min = num3;
	}
	printf("가장 작은 정수 %d\n",min);

	return 0;
}