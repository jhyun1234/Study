#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	double x = 0, y = 0;

	printf("두개의 실수를 입력하세요");

	scanf("%lf %lf", &x, &y);

	printf("%.2lf + %.2lf =%.2lf\n", x, y, x+y);
	printf("%.2lf - %.2lf =%.2lf\n", x, y, x-y);
	printf("%.2lf * %.2lf =%.2lf\n", x, y, x*y);
	printf("%.2lf / %.2lf =%.2lf\n", x, y, x/y);
	

	return 0;
}