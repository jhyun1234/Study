#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Even(int arr[], int len);
void Oddnumber(int arr[], int len);
void Binary(int num);
void Even1(int arr[], int len);
void Oddnumber1(int arr[], int len);
void Binary1(int num);
int main()
{

	// ���� 1
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
	// ���� 2
	/*
	int num = 0;
	scanf("%d", &num);
	Binary(num);
	*/

	// �絵��1
	/*
	int arr[10] = { 0, };
	int len = sizeof(arr) / sizeof(int);
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	Oddnumber1(arr,len);
	Even1(arr, len);
	*/

	// �絵��2
	/*
	int num = 0;
	scanf("%d", &num);
	Binary1(num);
	*/
	return 0;
}

void Even(int arr[],int len)
{
	
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("¦�� ��� : %d ", arr[i]);
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
			printf("Ȧ�� ��� : %d ", arr[i]);
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

void Even1(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("¦�� : %d", arr[i]);
		}
	    printf("\n");
	}

}

void Oddnumber1(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 != 0)
		{
			printf("Ȧ�� : %d", arr[i]);
		}
	    printf("\n");
	}
}

void Binary1(int num)
{
	int i = 0; int j = 0;
	int binary[32] = { 0, };
	
	while(num > 0)
	{
		binary[i++] = num % 2;
		num /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", binary[j]);
	}

}