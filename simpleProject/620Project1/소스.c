#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define SIZE 10
int main()
{
	/*
	int arr[20];
	printf("%d\n", sizeof(arr)); // 80
	

	char arr1[] = "Hello World";
	char arr2[] = "Hello";
	char arr3[20];

	int a = 0;

	while (arr2[a] != 0)
	{
		a++;
	}
	printf("%d\n", a);

	for (int i = 0; i < strlen(arr2); i++)
	{
		arr3[i] = arr2[i];
	}
		arr3[strlen(arr2)] = '\0';
		printf("%s\n", arr3);*/
	


	// int �迭 ũ��� 10�� ���� --�޸� Ȯ��

	int a[SIZE]; // �������� - ������ �� -> �ʱ�ȭ�� ��������

	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = (rand() % 100) + 1;
	}
	printf("[");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	printf("]\n");

	int max = INT_MIN;
	
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (max < a[i])
			max = a[i];

	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("%d\n", max);
	

		

	


	

	return 0;
}