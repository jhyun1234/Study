#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{

	int x = 10, y = 10;
	printf("x=%d  y=%d\n", x, y);

	x += 1;  // x�� +1�� ���� ��Ų��.
	y *= 3; // y�� x3�� �����Ѵ�.

	printf("x+=1 -> %d\n", x);
	printf("y*=3 -> %d\n", y);



	return 0;
}