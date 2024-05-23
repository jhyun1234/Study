#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 100, num1 = 200;
	int* ptr=&num;
	ptr = &num;
	(*ptr) += 30;
	ptr = &num1;
	(*ptr) -= 30;
	printf("%d %d\n", num, num1);

	return 0;
}