#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//fabs(a - b) < 0.0001 �Ǽ��� ���ԵǾ����� ��

int main()
{

	int A, B;
	int quotient, remainder;

	scanf("%d %d", &A, &B);


	if (B == 0)
	{
		printf("0���� ���� �� �����ϴ�. �ٸ����� �Է��ϼ���.");
	}
	else
	{
		quotient = A / B;
		remainder = A % B;
		printf("A B �� �� : %d\n", quotient);
		printf("A B �� ������ : %d\n", remainder);

	}

	return 0;
}

