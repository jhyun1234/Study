#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int year;
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0)
	{
		printf("���� �Դϴ�.");
	}
	else if(year % 400 == 0)
	{
		printf("���� �Դϴ�.");
	}
	else
	{
		printf("������ ���Դϴ�.");

	}

	return 0;
}