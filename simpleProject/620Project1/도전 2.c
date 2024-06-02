#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Even(int *arr,int len);
void Oddnumber(int *arr,int len);
void Binary(int num);
int main()
{

	// 도전 1
	/*
	int arr[10] = { 0, };
	int len= sizeof(arr) / sizeof(int);
	for (int i = 0; i < 9; i++)
	{
	   scanf("%d ", &arr[i]);
	}
	Oddnumber(&arr,len);
	Even(&arr,len);
	*/
	// 도전 2
	int num = 0;
	scanf("%d", &num);
	Binary(num);

	return 0;
}

void Even(int arr[],int len)
{
	
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("짝수 출력 : %d ", arr[i]);
		}
	}
	printf("\n");
	
}

void Oddnumber(int arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 != 0)
		{
			printf("홀수 출력 : %d ", arr[i]);
		}
	}
	printf("\n");
	
}

void Binary(int num)
{
	int binary[32] = { 0, };
	int i = 0;
	while (num > 0)
	{
		binary[i++] = num % 2;
		num /= 2;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d", binary[j]);
	}
}