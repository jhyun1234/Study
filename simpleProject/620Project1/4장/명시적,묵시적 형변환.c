#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	double j;

	j = 5 / 3;
	printf("(3/5)=%lf\n", j); // 0.000000

	j = (double)5 / 3;
	printf("(double)5 / 3=%lf\n", j); // 1.666667

	j = (double)5 / (int)3;
	printf("(double)5 / (int)3=%lf\n", j);

	i = 2.1 + 3.9;
	printf("2.1 + 3.9=%d\n", i); // 6
	
	i = (int)2.1 + 3.9;
	printf("(int)2.1 + 3.9=%d\n", i); //5

	i = (int)2.1 + (int)3.9;
	printf("(int)2.1 + (int)3.9=%d\n", i); // 5


	// �ݿø�

	double a = 3.6;
	int b = 0;
	b = (int)(a + 0.5);
	double c = (double)(a + 0.5);
	float d = (float)(a + 0.5);
	printf("�ݿø��ϱ� ���� ��: %f\n", a);
	printf("�ݿø���  ���� ��: %d\n", b);
	printf("�ݿø���  ���� ��: %f\n", c);
	printf("�ݿø���  ���� ��: %f\n", d);


	return 0;
}