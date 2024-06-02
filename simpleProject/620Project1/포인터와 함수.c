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
	// �Լ� �ȿ����� �ٲ������ main�ȿ����� �ٲ��� �ʴ´� ���� �ٸ� �޸𸮿� ����Ǿ� �־ �׷�
	
	Swap2(&num1, &num2);
	printf("%d %d\n", num1, num2);
   
	// 14-1 ���� 1

	int num = 20;
	
	SquareByValue(num);
	printf("%d \n", num);
	SquareByReference(&num);
	
	printf("%d \n", num);

	// 14-1 ���� 2
	int num3 = 10, num4 = 20, num5 = 30;
	Swap3(&num3, &num4, &num5);
	printf("%d %d %d\n", num3, num4, num5);

	// 14-2 ���� 1
	// arr �迭�ȿ� �ִ� Data�� ������ �����Ű�� �ȵǱ� ������ const�� �����ߴ�.

	// 14-2 ���� 2

	int num6 = 15;
	int* ptr1 = &num6;
	ShowData(ptr1);
	// �߸��� �κ��� �������ڸ� const�� �Ķ���Ͱ� ���Դµ�
	// �Լ� �ȿ��� ���Ӱ� ������ ������ �����Ͽ� �Ķ������ �ּҸ� ����Ű�� �Ǿ ���� ���� ��Ű���� �ϴ� ��Ȳ�̴�.
	// ������ const�� �����͸� �̿��ؼ�
	//	num�� ���� ���� ��ų �� ���� �Ǿ�� �ϴµ� �� ���� ���� ������ �ȴ�.
	//	�������� ���������� ���� ����� ���� �ʴ´�.

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
	 // main������ ���� �ٲܷ��� �Լ����� �ּҰ��� �����ؾ��Ѵ�.
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
	// �߸��� �κ��� �������ڸ� const�� �Ķ���Ͱ� ���Դµ�
	// �Լ� �ȿ��� ���Ӱ� ������ ������ �����Ͽ� �Ķ������ �ּҸ� ����Ű�� �Ǿ ���� ���� ��Ű���� �ϴ� ��Ȳ�̴�.
	// ������ const�� �����͸� �̿��ؼ�
	//	num�� ���� ���� ��ų �� ���� �Ǿ�� �ϴµ� �� ���� ���� ������ �ȴ�.
	//	�������� ���������� ���� ����� ���� �ʴ´�.
}
