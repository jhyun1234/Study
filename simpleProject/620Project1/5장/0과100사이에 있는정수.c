#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int num;
	scanf("%d", &num);

	if (100 >= num && num >=0)
	{
		printf("입력한 정수가 0과 100사이에 있습니다.");
	}
	else
	{
		printf("입력한 정수가 0과 100사이에 없습니다.");
	}

	return 0;
}