#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void SwapIntPtr(int* p1, int* p2);
int MaxAndMin(int* arr, int** p1, int** p2, int size);

int main_pointer()
{
	/*
	int num = 3;
	int* ptr = &num;
	int** dptr = &ptr;
	int*** tptr = &dptr;
	int* ptr2=NULL;

	printf("%9p %9p\n", ptr, *dptr);
	printf("%d %d\n", num, **dptr);
	printf("%d %d\n", num, ***tptr);
	ptr2 = *dptr; // ptr2 = ptr �� ����
	ptr2 = **tptr;
	*ptr2 = 10;
	printf("%d %d \n", num, **dptr);
	printf("%d %d\n", num, ***tptr);
	*/

	/*
	int num1 = 10;
	int num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	printf("%d %d\n", num1, num2);
	SwapIntPtr(&num1, &num2);
	printf("%d %d\n", num1, num2);
	*/

	/*
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	int* arr[3] = { ptr1,ptr2,ptr3 };
	int** dptr = arr;
	printf("%d %d %d\n", *(arr[0]), *(arr[1]), *(arr[2]));
	printf("%d %d %d\n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
	*/

	// 17-1
	int* maxPtr=NULL;
	int* minPtr=NULL;
	int arr[5];

	for (int i = 0; i < 5; i++)
	{

		scanf("%d", &arr[i]);

	}
	MaxAndMin(arr, &maxPtr, &minPtr,sizeof(arr) / sizeof(int));
	printf("%d %d", *maxPtr, *minPtr);



	return 0;
}

void SwapIntPtr(int* p1, int* p2)
{
	int* temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}

int MaxAndMin(int *arr,int **p1,int **p2,int size)
{

	int* max = NULL; int* min = NULL;


	max = min = &arr[0]; // max�� min�� �ּҰ��� arr�迭�� 0��° �ּҷ� �ʱ�ȭ �Ѵ�.
	for (int i = 0; i < size; i++)
	{
		if (arr[i]>*max)  // arr[i]�� ���� max�� ����Ű�� ������ ũ�ٸ�  
		{
			max = &arr[i]; // max�� �ּҴ� arr[i]�� �ּҸ� �ִ´�.
		}
		if (arr[i] < *min)  // arr[i]�� ���� min�� ����Ű�� ������ �۴ٸ�
		{
			min = &arr[i]; // min�� �ּҴ� arr[i]�� �ּҸ� �ִ´�.
		}
	}
	*p1 = max; // max�� �ּ�(�ִ밪�� �ּ�)�� *p1�� ����Ű�� �� main �Լ��� �ִ� maxPtr�� ����Ű�� ���� ���� �ּҸ� �����ϴ� ���̴�. 
	*p2 = min;

}



