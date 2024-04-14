#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int now_time_H = 0; int now_time_M = 0;
	int free_time;
	

	printf("현재 시각을 입력하세요.(24시기준)\n");
	scanf("%d %d", &now_time_H,&now_time_M);
	printf("자유시간을 입력하세요.(분)\n");
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
	
	printf("돌아올 시간은 %02d시 %02d분 입니다.",now_time_H,now_time_M);




	return 0;
}