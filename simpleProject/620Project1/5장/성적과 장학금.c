#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;

	scanf("%d", &score);

	if (score >= 80)
	{
		printf("�հ��Դϴ�.\n ���бݵ� ���� �� �ֽ��ϴ�.");
	}
	else if (score >= 60)
	{
		printf("�հ��Դϴ�.\n ���б��� ���� �� �����ϴ�.");
	}
	else
	{
		printf("���հ��Դϴ�.\n");
	}


	return 0;
}