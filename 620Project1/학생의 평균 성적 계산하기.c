#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{

	char name;
	float score1, score2, score3, score4;
	double id,average;
	// ����ڷκ��� �̸�,�й�,4���� ���� �Է� �ޱ�
	printf("�̸�");
	name = getchar();
	printf("�й�");
	scanf("%lf", &id);
	printf("����");
	scanf("%f %f %f %f", &score1, &score2, &score3, &score4);

	// ��� ����ϱ�
	
	average = (score1 + score2 + score3 + score4) / 4.0;

	printf("�л� %c (�й�%lf) �� ��ռ����� %.2lf �Դϴ�.\n",name,id,average);

	return 0;
}