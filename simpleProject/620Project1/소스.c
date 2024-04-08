#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*",j);
		}

		printf("\n");
	}

	return 0;
}