#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // pow() �Լ��� sqrt() �Լ��� ����ϱ� ���� �ʿ�
#define KMH_TO_MS (1000/3600.0) // km/h �� m/s�� ��ȯ�ϱ� ���� ��� 
int main()
{

	double distance = 18.4; // ���� m
	double speed = 160 * KMH_TO_MS;// km/h �� m/s�� ��ȯ�Ͽ� �ӵ� ���
	double time = distance / speed; // �ð� ���

	printf("Ȩ�÷���Ʈ�� �����ϴµ� �ɸ��� �ð� : %f\n", time);


	// �Ǽ� 3���� ��հ� ǥ������

	double num1, num2, num3;
	double sum = 0.0;
	double mean, variance, std_deviation; // ���, �л�, ǥ�������� ������ ����

	printf("3���� �Ǽ��� �Է��ϼ��� :");
	scanf("%lf %lf %lf", &num1, &num2, &num3);

	sum = num1 + num2 + num3;
	mean = sum / 3;
	// �� �Ǽ����� ����� �� ���� ������ ��� ���� ��, ������ ������ �л��� ���
	variance = (pow(num1 - mean, 2) + pow(num2 - mean, 2) + pow(num3 - mean, 2)) / 3;
	// �л��� �������� ���Ͽ� ǥ�������� ���
	std_deviation = sqrt(variance);


	// pow() �Լ�(�ŵ������� ���)�� sqrt() �Լ�(�������� ���)
	printf("��� : %.2lf\n", mean);
	printf("ǥ������ : %.2lf\n", std_deviation);
	


	return 0;

}