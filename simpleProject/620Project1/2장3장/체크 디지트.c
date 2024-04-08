#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int num1, num2, num3, num4, num5;
	int sum;

	printf("식별 번호를입력하세요 :\n");
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
	sum = num1 + num2 + num3 + num4 + num5;

	int check_digit = sum % 10;

	printf("체크 디지트는 %d 입니다", check_digit);

	return 0;
}