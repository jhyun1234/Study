#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

#pragma region do while�� ��ø ������

/*
    int i = 1;
	int j;

	do
	{
		j = 1; // ���� �������� j�� �ʱ�ȭ
		do
		{
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		} while (j < 10);
		i++;

	} while (i < 10);

	return 0;
	*/
#pragma endregion

#pragma region for���� while���� �̿��� ���̰� ���ϱ�

		/*int  num1 = 0;
		int num2 = 0;

		int total = 0;

		scanf("%d %d", &num1, &num2);
		for (total = 0; num1 <= num2; num1++)
		{
			total += num1;
		}
		printf("%d", total);
		// return 0;
		// int total = 0;
		//
		// scanf("%d %d", &num1, &num2);
		// while (num1 >= num2)
		// {
		//
		//
		// 	total += num1;
		// 	num1--;
		// }
		// printf("%d", total);*/
#pragma endregion


#pragma region ���丮��

		/*int num1 = 0;
		int total = 1;
		int i = 1;
		scanf("%d", &num1);

		while (i<=num1)
		{

			total = total * i;
			i++;

		}
		printf("%d", total);*/
    /*
	int num = 0;
	int total = 1;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		total = total * i;
	}
	printf("%d", total);
	*/
#pragma endregion


#pragma region while�� for�� ��ø ������

   /*
	int i = 2;
	int j;

	while (i < 15)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, j * i);
		}
		printf("\n");
		i++;
	}
	*/
#pragma endregion


#pragma region while���� for���� �̿��� ���ձ��ϱ�
	/*
    int total=0;
    int num = 1;
	while (num != 0)
	{

	   scanf("%d", &num);
		total += num;

	}
	printf("%d", total);
	*/
    /*
    int total = 0;
    int num = 1;
	for (int i = 0; i <= num; i++)
	{
	  scanf("%d", &num);
		total += num;
	}
	printf("%d", total);
	*/



#pragma endregion



		

	
	return 0;
}