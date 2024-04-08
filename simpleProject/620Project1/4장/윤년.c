#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int year;
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0)
	{
		printf("윤년 입니다.");
	}
	else if(year % 400 == 0)
	{
		printf("윤년 입니다.");
	}
	else
	{
		printf("윤년이 아입니다.");

	}

	return 0;
}