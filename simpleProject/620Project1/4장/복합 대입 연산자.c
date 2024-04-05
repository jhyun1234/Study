#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{

	int x = 10, y = 10;
	printf("x=%d  y=%d\n", x, y);

	x += 1;  // x에 +1을 증가 시킨다.
	y *= 3; // y를 x3을 연산한다.

	printf("x+=1 -> %d\n", x);
	printf("y*=3 -> %d\n", y);



	return 0;
}