#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int x, y;
	int a, b;

	x = 1;
	y = 1;

	a = ++x;    // a�� 2�� �ȴ�. ���������� ���� ���� ������ �� ������ ���� �ִ´� �� ���� �� ����.

	b = y++;    // b�� 1�� �ȴ�. ���������� ������ ���� �� �� ������ ���� �ִ´�. �� ���� �� ����.


	printf("a=%d  b=%d\n", a, b);
	printf("x=%d  y=%d\n", x, y);

	


	return 0;
}