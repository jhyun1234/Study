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
	printf("���� ���� ������ SIZE��ŭ �����Ͽ����ϴ�.\n");
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
	printf("���� ���� ����\n");
	printf("[");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("]");
	printf("\n\n");
	printf("������ �ִ밪 : %d\n", arr[SIZE - 1]);
	printf("������ �ּҰ� : %d\n", arr[0]);
	return 0;
}