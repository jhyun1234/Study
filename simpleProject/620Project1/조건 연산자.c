#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	int a, b;

	scanf("%d %d", &a, &b);

	printf("ū �� : %d\n", (a > b) ? a: b);
	printf("���� �� : %d\n", (a < b) ? a: b);
	return 0;
}