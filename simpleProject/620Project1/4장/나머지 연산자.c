#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//fabs(a - b) < 0.0001 실수가 포함되었을때 비교

int main()
{

	int A, B;
	int quotient, remainder;

	scanf("%d %d", &A, &B);


	if (B == 0)
	{
		printf("0으로 나눌 수 없습니다. 다른값을 입력하세요.");
	}
	else
	{
		quotient = A / B;
		remainder = A % B;
		printf("A B 의 몫 : %d\n", quotient);
		printf("A B 의 나머지 : %d\n", remainder);

	}

	return 0;
}

