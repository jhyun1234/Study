#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	int a, b;

	scanf("%d %d", &a, &b);

	printf("큰 값 : %d\n", (a > b) ? a: b);
	printf("작은 값 : %d\n", (a < b) ? a: b);
	return 0;
}