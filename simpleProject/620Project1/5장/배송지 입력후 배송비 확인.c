#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{

	char location;
	int price,price_fee;
	printf("��ǰ�� ������ �Է��ϼ���.\n ������� �Է��ϼ���.(A,B)\n");
	scanf("%d %c", &price,&location);

	if(location=='A')
		if (price >= 50000)
		{
			printf("��ۺ� ����");
		}
		else
		{
			printf("��ۺ� 5õ��");
		}
	if(location =='B')
		if (price >= 30000)
		{
			printf("��ۺ� ����");
		}
		else
		{
			printf("��ۺ� 3õ��");
		}


	return 0;
}