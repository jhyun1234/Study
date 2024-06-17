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
	ptr2 = *dptr; // ptr2 = ptr 과 같다
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


	max = min = &arr[0]; // max와 min의 주소값을 arr배열의 0번째 주소로 초기화 한다.
	for (int i = 0; i < size; i++)
	{
		if (arr[i]>*max)  // arr[i]의 값이 max가 가리키는 값보다 크다면  
		{
			max = &arr[i]; // max의 주소는 arr[i]의 주소를 넣는다.
		}
		if (arr[i] < *min)  // arr[i]의 값이 min이 가리키는 값보다 작다면
		{
			min = &arr[i]; // min의 주소는 arr[i]의 주소를 넣는다.
		}
	}
	*p1 = max; // max의 주소(최대값의 주소)는 *p1이 가리키는 곳 main 함수에 있는 maxPtr이 가리키는 곳의 값의 주소를 저장하는 것이다. 
	*p2 = min;

}



