#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int now_time_H = 0; int now_time_M = 0;
	int free_time;
	

	printf("���� �ð��� �Է��ϼ���.(24�ñ���)\n");
	scanf("%d %d", &now_time_H,&now_time_M);
	printf("�����ð��� �Է��ϼ���.(��)\n");
	scanf("%d", &free_time);

	now_time_M += free_time;

	if (now_time_M >= 60)
	{
		now_time_H += now_time_M / 60;
		now_time_M = now_time_M % 60;
	}
	if (now_time_H >= 24)
	{
		now_time_H = now_time_H % 24;
	}
	
	printf("���ƿ� �ð��� %02d�� %02d�� �Դϴ�.",now_time_H,now_time_M);




	return 0;
}