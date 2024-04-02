#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{


	int x = 0;
	int y = 0;

	int sum =0;

	printf("첫 번째 숫자를 입력하시오.\n");
	scanf("%d", &x);
	printf("두 번째 숫자를 입력하시오.\n");
	scanf("%d", &y);

	
	printf("%d 와 %d 의 합은 %d 입니다.\n", x, y, x+y);

	return 0;
}