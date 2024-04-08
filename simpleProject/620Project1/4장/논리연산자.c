#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{

	
	int x, y;
	scanf("%d %d", &x, &y);

	printf("%d 와 && %d 의 값 :%d \n", x, y, x && y);
	printf("%d 와 || %d 의 값 :%d \n", x, y, x || y);
	printf("!%d 값 :%d \n", x, !x);



	return 0;
}