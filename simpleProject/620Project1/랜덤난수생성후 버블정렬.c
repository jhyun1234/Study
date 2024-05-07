#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 20
int main()
{
	int arr[SIZE];
	int i, j, temp;
	srand(time(NULL));
	printf("랜덤 난수 생성을 SIZE만큼 생성하였습니다.\n");
	printf("\n");
	printf("[");
	for (i = 0; i < SIZE; i++)
	{
		arr[i]=rand() % 100 + 1;
		printf("%d ", arr[i]);
	}

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp=arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("]");
	printf("\n\n");
	printf("랜덤 난수 정렬\n");
	printf("[");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("]");
	printf("\n\n");
	printf("난수의 최대값 : %d\n", arr[SIZE - 1]);
	printf("난수의 최소값 : %d\n", arr[0]);
	return 0;
}