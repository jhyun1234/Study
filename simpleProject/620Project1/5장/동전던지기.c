#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	printf("동전을 던져주세요.\n");
	int coin;

	srand(time(NULL));

	coin = rand() % 2;

	if (coin == 0)
	{
		printf("앞면입니다.\n");
	}
	else
	{
		printf("뒷면입니다.\n");
	}

	return 0;
}