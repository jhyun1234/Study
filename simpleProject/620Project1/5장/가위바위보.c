#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int user;
	printf("���� ���� �� ���ӿ� ���Ű� ȯ���մϴ�.\n");
	printf("���� 1. ���� 2. �� 3. �Դϴ�.\n");
	scanf("%d", &user);

	// ��ǻ���� ���� ��
	srand(time(NULL));
	int com = rand() % (3 - 1 + 1) + 1; // 1~3 ���� ������ �߻�
	// rand() %(b-a+1)+a; // a~b������ ���� ���� ����
	printf("User : %d com : %d ", user, com);

	// User�� �̱�� ��� -> ���� ���

	if (user == com)
	{
		printf("�����ϴ�.\n");

	}
	else
	{
		if (user == 1 && com == 3)
		{
			printf("�̰���ϴ�.");
		}
		else if (user == 2 && com == 1)
		{
			printf("�̰���ϴ�.");
		}
		else if (user == 3 && com == 2)
		{
			printf("�̰���ϴ�.");
		}
		else
		{
			printf("�����ϴ�.");
		}
	}


	return 0;
}