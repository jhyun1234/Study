#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int month, days;

	printf("�ϼ��� �˰���� ���� �Է��ϼ���.\n");
	scanf("%d", &month);

	switch (month)
	{
	case 2:
		days = 28;
		break;
		
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	case 0:
		printf("0���� �����ϴ�.\n");
		break;
	default:
		days = 31;
		break;
	}
	if (month >= 1 && month <= 12) {  // 1���� 12 ������ ���� ó��
		printf("%d���� �ϼ��� %d �Դϴ�.\n", month, days);
	}
	else {
		printf("1���� 12 ������ ���� �Է����ּ���.\n");
	}

	return 0;
}