#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20  // SIZE�� ��� ����
int main()
{
	int arr[SIZE];
	int i, j,temp;
	srand(time(NULL)); // ���� ���� ����
	printf("������ SIZE����ŭ �������� �޽��ϴ�.\n\n");
	printf("[");
	for (i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100 + 1; // 0~100 ������ ������ ����
		printf("%d ", arr[i]);
  	  
	}
	printf("]");
	printf("\n\n");
	
	for (i = 0; i < SIZE; i++)
	{
		
		for (j = 0; j < SIZE - i-1; j++) // SIZE-i-1 �� ������ ������ SIZE-i�� �ϸ� j�� SIZE-1�� �Ǹ�
			                             // arr[SIZE]�� �����Ϸ��� �õ��� �־ �̴� �迭�� ������ ��� ���̴�.
		{
			if (arr[j] > arr[j + 1]) // �������� ����
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		
		
	}
	/*
	int max = INT_MIN;     // max , min ������ �����ؼ� ���ϴ� ���
	int min = INT_MAX;
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	*/
	printf("������ �迭 :\n");
	printf("[");
	for (i = 0; i < SIZE; i++)  // ���ĵ� �迭�� ���
	{
		printf("%d ", arr[i]);
	}
	printf("]");
	printf("\n");

	printf("�ִ밪 : %d ", arr[SIZE-1]); // ���ĵ� �迭�� �ִ밪�� SIZE���� -1 �� �� �ڸ��� ���̴�.
	printf("�ּҰ� : %d ", arr[0]); // ���ĵ� �迭�� �ּҰ��� ������ 0��°�̱� �����̴�.
	//printf("�ִ밪 : %d ", max);
	//printf("�ּҰ� : %d ", min);

	return 0;
}