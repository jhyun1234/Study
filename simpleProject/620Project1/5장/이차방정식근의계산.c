#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{

	int a, b, c;
    double x,x1,x2;

	printf("��� a,b,c,�� �Է��ϼ���.");
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

		printf("ù ��° �Ǳ� =%f\n", x1);
		printf("�� ��° �Ǳ� =%f\n", x2);
		
	}
	else
	{
		printf("����� �Դϴ�.\n");
	}


	return 0;
}