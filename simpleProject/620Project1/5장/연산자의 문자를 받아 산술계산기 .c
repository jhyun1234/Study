#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	int num1, num2;
	char op;
	scanf("%d %c %d", &num1, &op,&num2);

	if (op == '+')
	{
		printf("%d + %d= %d", num1, num2, num1 + num2);
	}
	else if (op == '-')
	{
		printf("%d - %d= %d", num1, num2, num1 - num2);
	}
	else if (op=='*')
	{
		printf("%d * %d= %d", num1, num2, num1 * num2);
	}
	else if (num2 == 0)
	{
		printf("0���δ� ���� �� �����ϴ�.");
	}
	else if (op=='/')
	{
		printf("%d / %d= %d", num1, num2, num1 / num2);
	}
	return 0;
}