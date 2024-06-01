#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Pointer(int *arr,int size);
int main()
{
	int arr[] = { 1,2,3,4,5};

	int* ptr = arr;
	int size = sizeof(arr) / sizeof(arr[0]);
	Pointer(*ptr,size);

	return 0;
}
void Pointer(int *arr,int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);

	}

}