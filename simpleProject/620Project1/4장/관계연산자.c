#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{

	int x, y;

	scanf("%d %d", &x, &y);

	printf("x==y %d\n", x == y); // x,y 의 값이 같다면 1 아니면 0
	printf("x!=y %d\n", x != y); // x,y 의 값이 다르다면 0 아니면 1
	printf("x>y %d\n", x > y);   // y 보다 x 의 값이 크다면 1 아니면 0
	printf("x<y %d\n", x < y);   // x 보다 y 의 값이 크다면 1 아니면 0
	printf("x>=y %d\n", x >= y); // x 가 y 보다 값이 크거나같다면 1 아니면 0
	printf("x<=y %d\n", x <= y); // y 가 x 보다 값이 크거나같다면 1 아니면 0



	return 0;
}