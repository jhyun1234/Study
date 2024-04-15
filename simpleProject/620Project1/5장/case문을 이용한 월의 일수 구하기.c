#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int month, days;

	printf("일수를 알고싶은 달을 입력하세요.\n");
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
		printf("0월은 없습니다.\n");
		break;
	default:
		days = 31;
		break;
	}
	if (month >= 1 && month <= 12) {  // 1에서 12 사이의 월만 처리
		printf("%d월의 일수는 %d 입니다.\n", month, days);
	}
	else {
		printf("1에서 12 사이의 월을 입력해주세요.\n");
	}

	return 0;
}