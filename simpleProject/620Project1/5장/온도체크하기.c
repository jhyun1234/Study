#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	float temp;
	printf("온도 입력 :");
	scanf("%f", &temp);

	if (temp >= 0)
	{
		printf("영상 입니다.\n");

	}
	else
	{
		printf("영하 입니다.\n");
	}
	
	printf("현재 온도는 %f도 입니다.\n", temp);

	return 0;
}