#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	float temp;
	printf("�µ� �Է� :");
	scanf("%f", &temp);

	if (temp >= 0)
	{
		printf("���� �Դϴ�.\n");

	}
	else
	{
		printf("���� �Դϴ�.\n");
	}
	
	printf("���� �µ��� %f�� �Դϴ�.\n", temp);

	return 0;
}