#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int x, y;
	int a, b;

	x = 1;
	y = 1;

	a = ++x;    // a는 2가 된다. 전위증가는 먼저 값을 증가한 후 변수에 값을 넣는다 선 증감 후 연산.

	b = y++;    // b는 1이 된다. 후위증가는 연산을 먼저 한 후 변수에 값을 넣는다. 선 연산 후 증감.


	printf("a=%d  b=%d\n", a, b);
	printf("x=%d  y=%d\n", x, y);

	


	return 0;
}