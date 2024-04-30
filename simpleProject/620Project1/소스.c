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
	

	/*
	// int 배열 크기는 10개 선언 --메모리 확보

	int a[SIZE]; // 지역변수 - 쓰레기 값 -> 초기화를 하지않음

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
	
	*/
		

	/*
	char a1[] = "Hello";
	char a2[] = " World!";
	char con[20];

	int a = sizeof(a1) / sizeof(char);
	printf("%d\n", a);
	int b = sizeof(a2) / sizeof(char);
	printf("%d\n", b);
	int c = a + b;
	printf("%d\n", c);
	int i = 0;
	int j = 0;
	for (i = 0; i < a-1; i++)
	{
		con[i] = a1[i];
	}
	/*for (j = a - 1; j < c - 1; j++) // c-1= 13 
	{
		con[j] = a2[j-a+1];  //  +1은 NULL문자를 넣어준것 
		
	}
	
	for (j = 0; j < b-1; j++)
	{
		con[i + j] = a2[j]; 
	}
	con[i + j] = '\0';

	printf("%s", con);
	*/


    /**
	int arr[3][5] = // 행은 적지않아도 되지만 열을 적지않으면 에러가 뜬다.
	{
		{1,2,3,4,5,},
		{6,7,8,9,10},
		{11,12,13,14,15}

	};
	
	for (int i = 0; i < 3; i++) // 행
	{
		for (int j = 0; j < 5; j++) // 열
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	*/

	return 0;
}