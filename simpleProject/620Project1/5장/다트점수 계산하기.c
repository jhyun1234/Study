#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int total=0; // ��������
	for (int i = 0; i < 3; i++)
	{
	    int x, y;
	    int score;
		printf("��Ʈ�� ��������.\n");
		scanf("%d %d", &x, &y);

		int distance = sqrt(x * x + y * y); // �߾Ӻ����� �Ÿ�


		if (distance > 10)
		{
			score = 0;
		}
		else if (distance > 5)
		{
			score = 1;
		}
		else if (distance > 1)
		{
			score = 5;
		}
		else
		{
			score = 10;
		}

		total += score; // ���� ������ 1ȸ 2ȸ 3ȸ ������ ����.
	}
	

	printf("�������� %d\n", total);

	return 0;
}