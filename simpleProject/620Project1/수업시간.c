#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>


// �Լ��� ���� ���� ��ȯ��, �Լ��̸�, �Ű����� parameter �� �Է��ؾ��Ѵ�. ������ int x, int y �̷��� �����

// stack -> Last In First Out  ���� �ִ°� push �����°� pop
// Queue -> Last In Last Out , First In First Out 
// �Լ����� �� ������ ������ �ִ�
// �ݺ� code ���� �����ѹ����� �ܼ�ȭ�ϴ°��� �������谡 �ִ�.
// �Լ��� ���� ������ �������� �������� �ܼ� �� ������ �� �� ���� �����ϴ�.
// main �Լ��� �� �� ��� ����������.
// �Լ��� �̸��� �������� �����̸����� ���ؾ��Ѵ�.
// libray ������ �Լ� printf scanf �ý��ۿ��� ����
// ����ڰ� �����ϴ� �Լ� ex) int add(int x,int y)
// void -> return X   return 1-> error , return O �Լ��� �����϶�¸��� ���� 
// int -> return O
// parameter�� ������ Ÿ���� ������ �־���Ѵ�.
// int max=add(d,e); �ݺ������� ȣ���� ��
// int max=add(3,4); �ѹ��� ȣ���� ��
// �Լ� ȣ�� return ���� �����Ϸ��� ���� �����ؼ� ����ؼ� ���´�.

int add(int x,int y)
{
	int result;
	result = x+y;
	return result; 
	
	 

}
int add1()
{
	int x = 5;
	return x; // X�� ��ȯ�ϴ°� �ƴ϶� x�� �޸𸮿� ����ִ� ������ ���� ��ȯ�Ѵ�.
	return 5; // �Ȱ���
}

// �ٸ� �޸��̱⶧���� �����͸� ���� �ʴ��̻� ���� �������ʴ´�.

int f(int a, int b);

int Sum(int arr[], int a);

int ff(int* a);
int main()
{
	
	// printf("%d ", add(4, 4));
	
	//int x = 10;
	//int y = 20;
	//int value=add(10,20); // int value(10,20) �����ϴ� ������ �޸𸮰� �ٸ��� �Լ��� ���� �����ؼ� �����´�.
	//printf("%d ", value);   
	
	int arr[] = { 1,2,3,4,5 }; // �迭�� �̹� �ּҸ� �������ֱ� ������ ���� �����ϸ� �״�� ���� ����ȴ�.
	int sum = 0;
	
	sum = Sum(arr, 5);
	printf("Sum %d \n", sum);
	int length = sizeof(arr) / sizeof(int);
	for (int i = 0; i < length; i++)
	{
	  printf("Sum %d %p \n",i, arr[i]);
	}
	int c=100000;
	c = ff(c);
	
	printf("%d", c);
	return 0;
}
int f(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int Sum(int arr[], int a)
{
	int sum = 0;
	
	for (int i = 0; i < a; i++)
	{
		 sum+= arr[i];
	}
	return sum;
}
int ff(int *a)
{
	int c = 10;
	
	int *b = &c;

	return c;
}