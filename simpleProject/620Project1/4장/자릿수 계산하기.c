#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int work = 60; // ������ ȸ������� �Ÿ�
	int moon = 383000; // �������� �ޱ����� �Ÿ�
	int wokr2 = work * 2; // ����ٰŸ� 120
	int days = 1; // ����ϼ�

	days = ((double)moon / wokr2 + 0.5); // 0.5�� ���ϰ� �Ǽ��� ����ȯ�� �ϸ� �ݿø��� �Ǳ⶧���� 0.5�� ���Ѵ�.

	int years = (int)days / 365;
	int months = (int)(days % 365) / 30;
	int remaining_days = (int)(days % 365) % 30;

	printf("%d�� %d�� %d�� �� ����� �Ÿ��� �ޱ����� �Ÿ��� �˴ϴ�.", years, months, remaining_days);



	return 0;
}