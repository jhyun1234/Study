#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	char ch;

	printf("문자 or 숫자를 입력하세요.\n");

	ch = getchar();

	if (ch >= 'A' && ch <= 'Z')
	{
		printf("%c는 대문자입니다.\n",ch);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("%c는 소문자 입니다.\n",ch);
	}
	else if (ch >= '0' && ch <= '9')
	{
		printf("%c 는 숫자 입니다.\n",ch);
	}
	else
	{
		printf("다른 문자를 입력하였습니다.\n",ch);
	}

	return 0;
}