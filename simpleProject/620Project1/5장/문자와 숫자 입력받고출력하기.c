#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	char ch;

	printf("���� or ���ڸ� �Է��ϼ���.\n");

	ch = getchar();

	if (ch >= 'A' && ch <= 'Z')
	{
		printf("%c�� �빮���Դϴ�.\n",ch);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("%c�� �ҹ��� �Դϴ�.\n",ch);
	}
	else if (ch >= '0' && ch <= '9')
	{
		printf("%c �� ���� �Դϴ�.\n",ch);
	}
	else
	{
		printf("�ٸ� ���ڸ� �Է��Ͽ����ϴ�.\n",ch);
	}

	return 0;
}