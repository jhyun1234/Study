#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int num;
	scanf("%d", &num);

	if (100 >= num && num >=0)
	{
		printf("�Է��� ������ 0�� 100���̿� �ֽ��ϴ�.");
	}
	else
	{
		printf("�Է��� ������ 0�� 100���̿� �����ϴ�.");
	}

	return 0;
}