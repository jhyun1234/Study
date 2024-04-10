#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int work = 60; // 집에서 회사까지의 거리
	int moon = 383000; // 지구에서 달까지의 거리
	int wokr2 = work * 2; // 출퇴근거리 120
	int days = 1; // 출근일수

	days = ((double)moon / wokr2 + 0.5); // 0.5를 더하고 실수형 형변환을 하면 반올림이 되기때문에 0.5를 더한다.

	int years = (int)days / 365;
	int months = (int)(days % 365) / 30;
	int remaining_days = (int)(days % 365) % 30;

	printf("%d년 %d월 %d일 후 출퇴근 거리가 달까지의 거리가 됩니다.", years, months, remaining_days);



	return 0;
}