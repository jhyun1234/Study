#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void SimpleFunc(int* num);
void ShowArayElem(int* param, int len);
void AddArayElem(int param[], int len, int add);
void Swap(int num1, int num2);
void Swap2(int* num1, int* num2);
void SquareByValue(int num);
void SquareByReference(int* num);
void Swap3(int* num1, int* num2, int* num3);
void ShowData(const int* ptr);
int main_Function()
{
	int arr[3] = { 1,2,3 };
	int* ptr = arr;
	SimpleFunc(arr);

	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7,8 };
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));

	int arr3[3] = { 1,2,3 };
	AddArayElem(arr3, sizeof(arr3) / sizeof(int), 1);
	ShowArayElem(arr3, sizeof(arr3) / sizeof(int));

	AddArayElem(arr3, sizeof(arr3) / sizeof(int), 1);
	ShowArayElem(arr3, sizeof(arr3) / sizeof(int));

	AddArayElem(arr3, sizeof(arr3) / sizeof(int), 1);
	ShowArayElem(arr3, sizeof(arr3) / sizeof(int));

	int num1 = 10, num2 = 20;
	printf("%d %d\n", num1, num2);
	Swap(num1, num2);
	printf("%d %d\n", num1, num2);
	// 함수 안에서는 바뀌었지만 main안에서는 바뀌지 않는다 서로 다른 메모리에 저장되어 있어서 그럼
	
	Swap2(&num1, &num2);
	printf("%d %d\n", num1, num2);
   
	// 14-1 문제 1

	int num = 20;
	
	SquareByValue(num);
	printf("%d \n", num);
	SquareByReference(&num);
	
	printf("%d \n", num);

	// 14-1 문제 2
	int num3 = 10, num4 = 20, num5 = 30;
	Swap3(&num3, &num4, &num5);
	printf("%d %d %d\n", num3, num4, num5);

	// 14-2 문제 1
	// arr 배열안에 있는 Data의 값들을 변경시키면 안되기 때문에 const를 선언했다.

	// 14-2 문제 2

	int num6 = 15;
	int* ptr1 = &num6;
	ShowData(ptr1);
	// 잘못된 부분을 설명하자면 const로 파라미터가 들어왔는데
	// 함수 안에서 새롭게 포인터 변수를 선언하여 파라미터의 주소를 가리키게 되어서 값을 변경 시키려고 하는 상황이다.
	// 하지만 const는 포인터를 이용해서
	//	num의 값을 변경 시킬 수 없게 되어야 하는데 이 경우는 값이 변경이 된다.
	//	컴파일은 가능하지만 값은 제대로 들어가지 않는다.

	return 0;
}
void SimpleFunc(int* num)
{
	printf("%d %d\n", num[0], num[1]);
}

void ShowArayElem(int *param, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", param[i]);
    }
	printf("\n");
}

void AddArayElem(int param[], int len, int add)
{

	for (int i = 0; i < len; i++)
	{
		param[i] += add;
	}

}

void Swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;

	printf("%d %d \n", num1, num2);
}

void Swap2(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void SquareByValue(int num)
{
	int result = num * num;
	printf("%d \n", result);
	
}

void SquareByReference(int *num)
{
	 // main에서도 값을 바꿀려면 함수에서 주소값을 지정해야한다.
	*num = (*num) * (*num);
	printf("%d \n", *num);

}

void Swap3(int* num1, int* num2, int* num3)
{

	int temp = 0;
	temp = *num1;
	*num1 = *num2;
	*num2 = *num3;
	*num3 = temp;

}

void ShowData(const int* ptr)
{
	printf("%d \n", *ptr);
	//int* rptr = ptr;
	//printf("%d \n", &rptr);
	//*rptr = 20;
	// 잘못된 부분을 설명하자면 const로 파라미터가 들어왔는데
	// 함수 안에서 새롭게 포인터 변수를 선언하여 파라미터의 주소를 가리키게 되어서 값을 변경 시키려고 하는 상황이다.
	// 하지만 const는 포인터를 이용해서
	//	num의 값을 변경 시킬 수 없게 되어야 하는데 이 경우는 값이 변경이 된다.
	//	컴파일은 가능하지만 값은 제대로 들어가지 않는다.
}
