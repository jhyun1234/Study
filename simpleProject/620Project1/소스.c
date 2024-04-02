#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
=======
>>>>>>> 334708a0829de48dda3bbfdf2fef90beae9e8ba9
//fabs(a - b) < 0.0001 실수가 포함되었을때 비교



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
		printf("입력 %d : ", i + 1);
		scanf("%d", &num);
		printf("누적 : %d \n", AddToTotal(num));
	}
>>>>>>> 334708a0829de48dda3bbfdf2fef90beae9e8ba9
	return 0;
}

