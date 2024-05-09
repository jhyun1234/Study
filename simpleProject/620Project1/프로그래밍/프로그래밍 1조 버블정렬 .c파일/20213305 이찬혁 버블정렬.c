#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15

int main(void)
{
	int i, k;
	int list[SIZE] = {0};
	

	for (int i = 0; i < SIZE; i++) {
		list[i] = (rand() % 100 + 1);
	}


	for (k = 0; k < SIZE; k++)
	{
		for (i = 0; i < SIZE - 1; i++) 
		{
			if (list[i] > list[i + 1]) 
			{
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
	}

	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");

	return 0;
}