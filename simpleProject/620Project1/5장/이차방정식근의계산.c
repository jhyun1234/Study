#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{

	int a, b, c;
    double x,x1,x2;

	printf("계수 a,b,c,를 입력하세요.");
	scanf("%d %d %d", &a, &b, &c);

	x = b * b - 4 * a * c;
	if (x == 0)
	{
		x = -b / 2.0 * a;
	}
	else if (x > 0)
	{
		x1 = (-b + sqrt(x) / 2.0 * a);
		x2 = (-b - sqrt(x) / 2.0 * a);

		printf("첫 번째 실근 =%f\n", x1);
		printf("두 번째 실근 =%f\n", x2);
		
	}
	else
	{
		printf("허수근 입니다.\n");
	}


	return 0;
}