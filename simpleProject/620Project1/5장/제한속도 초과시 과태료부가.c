#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int speed; // 차의 속도
    int limit_speed=100; // 제한속도
	int fine = 0; // 과태료


	printf("현재 속도을 입력하세요\n");
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
	

	printf("과태료는 %d원 입니다.\n", fine);

	return 0;
}