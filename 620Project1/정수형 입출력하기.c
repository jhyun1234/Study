#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int value;

	printf("������ int�� ũ��� %zu \n", sizeof(int)); // -2,147,483,648 ~2,147,483,647
	printf("������ long�� ũ��� %zu \n", sizeof(long));//-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
	printf("������ long long�� ũ��� %zu \n", sizeof(long long));

	// int �� long �� �������� ������ �� �ִ� �������� ũ�� ǥ���� �� �ִ� ������ �����̴�.


	printf("\n ���� �Է�(10����) :\n");
	scanf("%d", &value);
	printf("%d�� 10������ %d,8������ %#o ,16������ %#x�̴�.", value, value, value, value, value);

	printf("\n ���� �Է�(16����) :\n");
	scanf("%x", &value);
	printf("%d�� 10������ %d,8������ %#o ,16������ %#x�̴�.", value, value, value, value, value);


	float fvalue = 1234567890.1234567891234567890;
	double dvalue = 1234567890.1234567891234567890;

	printf("\nfloat�� ���� =%.25f\n", fvalue); // 6�� ������ ��ȿ���ڸ� ���� �� �ִ� 8��° ���ķδ� ��Ȯ�� ���� ������ �ʴ´�.

	printf("\ndouble�� ���� =%.25lf\n", dvalue); // 15�ڸ� ������ ��ȿ���ڸ� ���� �� �ִ�. %.25lf�� 25�ڸ��� ����϶�� �ǹ��̴�.


	// �ε� �Ҽ��� ���� ���ǻ��� 

	float value1 = 0.1; // 2�������δ� ��Ȯ�ϰ� ��Ÿ�� �� ���� ������ �ֱ� ���� 0.1�� ���� �ϳ�
	printf("%.20f\n", value); // %.20f�� �Ҽ��� ���ϸ� 20�ڸ��� ����϶�� �ǹ�


	// �ε� �Ҽ��� ����

	float a = 0.1f;
	float b = 0.2f;
	float c = a + b;
	printf("%f+%f=%.10f\n", a, b, c); // ������ 0.3000000119�� ��µȴ�.

	return 0;
}