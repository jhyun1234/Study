#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int money=0;
	int price=0;

	

	printf("������ �� :\n", money);

	scanf("%d", &money);

	printf("���ǰ� :\n", price);

	scanf("%d", &price);

	int change = money-price;

	printf("�Ž����� :%d\n", change);


	int coin100 = change / 100; // �Ž��������� 100��¥���� ���� ���
	change = change % 100; // �Ž��������� 100��¥���� ������ �� �������� ���Ѵ�.
	int coin10 = change / 10; // ���������� 10��¥���� ������ ���
	change = change % 10; // 10��¥���� ������ �� �������� ���Ѵ�. ->1��¥��

	printf("100�� ������ ���� :%d\n", coin100);
	printf("10�� ������ ���� :%d\n", coin10);
	printf("1�� ������ ���� :%d\n", change);


	return 0;
}