#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_printf()
{
	
	// ������Ʈ
	// �������� �������� ������ �Լ� (�����ۼ�)
	// �̸� ���� ������ Ű ���˸�

	char name[256];
	printf("�̸��� ���ϱ�");
	scanf("%s", name, sizeof(name));

	int age;
	printf("����Դϱ�");
	scanf("%d", &age);

	float weight;
	printf("�����Դ� �� kg �Դϱ�");
	scanf("%f", &weight);

	double height;
	printf("Ű�� �� cm �Դϱ�");
	scanf("%lf", &height);

	char what[256];
	printf("���� ���˸� ���������ϱ�");
	scanf("%s", what, sizeof(what));

	// ���� ���� ���
	printf("\n\n --- ������ ���� --- \n\n");
	printf(" �̸�      : %s\n", name);
	printf(" ����      : %d\n", age);
	printf(" ������    : %f\n", weight);
	printf(" Ű        : %lf\n", height);
	printf(" ���˸�    : %s\n", what);


	return 0;
}