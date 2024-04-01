#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int x=0, y=0;
	printf("두 개의 정수를 입력하세요");

	scanf("%d %d", &x, &y);

	printf("%d + %d=%d\n", x, y, x + y);
	printf("%d - %d=%d\n", x, y, x - y);
	printf("%d * %d=%d\n", x, y, x * y);
	printf("%d / %d=%d\n", x, y, x / y);
	printf("%d %% %d=%d\n", x, y, x % y);


	return 0;
}