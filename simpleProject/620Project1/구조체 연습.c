#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#define SIZE 10
int equal(struct student* a1, struct student* a2);
struct student
{
	int number;
	char name[20];
	int age;
	
};

int main()
{
	/*
	struct student a1 = { 2020,"최종현",24 };
	struct student a2 = { 2021,"이진재",20 };

	if (equal(&a1,&a2)==1)
	{
		printf("동갑");
	}
	else if (equal(&a1, &a2) == 2)
	{
		printf("같은 이름");
	}
	else if (equal(&a1, &a2) == 3)
	{
		printf("같은 학번");
	}
	else
	{
		printf("연상 or 연하");
	}
	*/
	int a [SIZE];
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = rand() % 100 + 1;
	}
	printf("\n");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}


	return 0;
}

int equal(struct student* a1, struct student* a2)
{

	if (a1->age == a2->age)
		return 1;
	else if (a1->name == a2->name)
		return 2;
	else if (a1->number == a2->number)
		return 3;
	else
		return 0;

}