#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
=======
>>>>>>> 334708a0829de48dda3bbfdf2fef90beae9e8ba9
//fabs(a - b) < 0.0001 �Ǽ��� ���ԵǾ����� ��



int AddToTotal(int num)
{
	static int total = 0;
	total += num;
	return total;
}




int main()
{
<<<<<<< HEAD
	
	int a, b;
	int x, y;
	scanf("%d %d", &a, &b);

	if (a < b)
	{
		for (x = 2; x < b; x++)
		{
			for (y = 1; y < 10; y++)
			{
				printf("%d * %d =%d\n", x, y, x * y);
			}
		}
		printf("\n");
	}
	else
	{
		for (x = 2; x < 10; x++)
		{
			for (y = 1; y < 10; y++)
			{
				printf("%d * %d =%d\n", x, y, x * y);
			}
		}
		printf("\n");
	}

	

=======
	int num,i;
	for (i = 0; i < 3; i++)
	{
		printf("�Է� %d : ", i + 1);
		scanf("%d", &num);
		printf("���� : %d \n", AddToTotal(num));
	}
>>>>>>> 334708a0829de48dda3bbfdf2fef90beae9e8ba9
	return 0;
}

