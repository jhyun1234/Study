#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{

	int x, y;

	scanf("%d %d", &x, &y);

	printf("x==y %d\n", x == y); // x,y �� ���� ���ٸ� 1 �ƴϸ� 0
	printf("x!=y %d\n", x != y); // x,y �� ���� �ٸ��ٸ� 0 �ƴϸ� 1
	printf("x>y %d\n", x > y);   // y ���� x �� ���� ũ�ٸ� 1 �ƴϸ� 0
	printf("x<y %d\n", x < y);   // x ���� y �� ���� ũ�ٸ� 1 �ƴϸ� 0
	printf("x>=y %d\n", x >= y); // x �� y ���� ���� ũ�ų����ٸ� 1 �ƴϸ� 0
	printf("x<=y %d\n", x <= y); // y �� x ���� ���� ũ�ų����ٸ� 1 �ƴϸ� 0



	return 0;
}