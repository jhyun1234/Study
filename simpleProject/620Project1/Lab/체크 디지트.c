#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int num1, num2, num3, num4, num5;
	int sum;

	printf("�ĺ� ��ȣ���Է��ϼ��� :\n");
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
	sum = num1 + num2 + num3 + num4 + num5;

	int check_digit = sum % 10;

	printf("üũ ����Ʈ�� %d �Դϴ�", check_digit);

	return 0;
}