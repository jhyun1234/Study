#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	printf("������ �����ּ���.\n");
	int coin;

	srand(time(NULL));

	coin = rand() % 2;

	if (coin == 0)
	{
		printf("�ո��Դϴ�.\n");
	}
	else
	{
		printf("�޸��Դϴ�.\n");
	}

	return 0;
}