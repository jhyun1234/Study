#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;

	scanf("%d", &score);

	if (score >= 80)
	{
		printf("합격입니다.\n 장학금도 받을 수 있습니다.");
	}
	else if (score >= 60)
	{
		printf("합격입니다.\n 장학금은 받을 수 없습니다.");
	}
	else
	{
		printf("불합격입니다.\n");
	}


	return 0;
}