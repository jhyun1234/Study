#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int get_integer();
int compare(int x, int y);
int power(int x, int y);
int main()
{

	int a = get_integer();
	int b = get_integer();

	int result = a + b;
	printf("�μ��� ��: %d\n", result);

	int c = compare(5,4);

	printf("�� ū ����: %d", c);

	int d = power(3, 10);
	printf("");

	return 0;
}
int get_integer()
{
	int value;
	printf("������ �Է��ϼ���.");
	scanf("%d", &value);
	return value;

}

int compare(int x, int y)
{

	int value,value2;
	printf("������ �Է��ϼ���.");
	scanf("%d %d", &value,&value2);
	
	if (value > value2)
		return value;
	else
		return value2;
        

}

int power(int x,int y)
{
	int value, value2;
	printf("������ �Է��ϼ���.");
	scanf("%d %d", &value, &value2);
	int result=1;
	for (int i = 0; i < y; i++)
	{
		result *= x;
	}
	return result;


}