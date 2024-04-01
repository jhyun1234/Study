#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	

	int x, y;
	scanf("%d %d", &x, &y);

	if (x < y)
	{
		for (int a = x; a <= y; a++)
		{
			for (int b = 1; b <= 9; b++)
			{
				printf("%d * %d =%d\n", a,b, a*b);
			}
		}
		printf("\n");
	}
	else
	{
		for (int a = x; a <= y; a++)
		{
			for (int b = 1; b <= 9; b++)
			{
				printf("%d * %d =%d\n", a,b,a*b);
			}
		}
		printf("\n");
	}
	

	


	return 0;


	
}