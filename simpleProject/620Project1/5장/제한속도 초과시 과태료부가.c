#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int speed; // ���� �ӵ�
    int limit_speed=100; // ���Ѽӵ�
	int fine = 0; // ���·�


	printf("���� �ӵ��� �Է��ϼ���\n");
	scanf("%d", &speed);

	if (speed > limit_speed)
	{
		
		if (speed <= limit_speed + 20)
		{
			fine = 40000;
		}
		else if (speed <= limit_speed + 40)
		{
			fine = 70000;
		}
		else if (speed <= limit_speed + 60)
		{
			fine = 100000;
		}
		else
		{
			fine = 130000;
		}
	}
	

	printf("���·�� %d�� �Դϴ�.\n", fine);

	return 0;
}