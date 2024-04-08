#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int user;
	printf("가위 바위 보 게임에 오신걸 환영합니다.\n");
	printf("가위 1. 바위 2. 보 3. 입니다.\n");
	scanf("%d", &user);

	// 컴퓨터의 랜덤 값
	srand(time(NULL));
	int com = rand() % (3 - 1 + 1) + 1; // 1~3 까지 랜덤값 발생
	// rand() %(b-a+1)+a; // a~b까지의 랜덤 범위 설정
	printf("User : %d com : %d ", user, com);

	// User가 이기는 경우 -> 비기는 경우

	if (user == com)
	{
		printf("비겼습니다.\n");

	}
	else
	{
		if (user == 1 && com == 3)
		{
			printf("이겼습니다.");
		}
		else if (user == 2 && com == 1)
		{
			printf("이겼습니다.");
		}
		else if (user == 3 && com == 2)
		{
			printf("이겼습니다.");
		}
		else
		{
			printf("졌습니다.");
		}
	}


	return 0;
}