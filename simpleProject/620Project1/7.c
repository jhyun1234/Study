#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#define STUDENTS 5
#define WORD 26
#define SIZE 5
#define SIZE2 6
#define SIZE3 10
#define SIZE4 10

int main()
{
#pragma region ���� �Է��� ���
	/*
	int arr[STUDENTS];
	int sum = 0;
	int av;
	for (int i = 0; i < STUDENTS; i++)
	{
		printf("�л� ���� �Է�");
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < STUDENTS; i++)
	{
		sum += arr[i];
	}
	av = sum / STUDENTS;
	printf("%d", av);
	*/
#pragma endregion

#pragma region ���� ���� �� ���
	/*
	char arr[WORD];
	for (int i = 0; i < WORD; i++)
	{
		arr[i] = 'a' + i;
	}
	for (int i = 0; i < WORD; i++)
	{
		printf("%c ", arr[i]);
	}
	*/

#pragma endregion

#pragma region �迭�� ��
	/*
	int a[SIZE] = { 1,2,3,4,5, };
	int b[SIZE] = { 1,2,3,4,5, };
	for (int i = 0; i < SIZE; i++)
	{
		if (a[i] != b[i])
		{
			printf("�����ʴ�.");
		}
	}
	printf("����.");
	*/
#pragma endregion

#pragma region �ֻ��� ������ ����� ���Դ��� Ȯ��
	/*
	int dice[SIZE2] = { 0 }; // 6���� ��Ҹ� ���� ��� ��Ҵ� 0���� �ʱ�ȭ
	srand(time(NULL)); // ���� �߻�
	for (int i = 0; i < 100; i++) // �ֻ����� 100�� ������
	{
		int result = rand() % SIZE2; //0���� SIZE2 -1������ ���� ����
		dice[result]++; 
	}
	for (int i = 0; i < SIZE2; i++) // �� ���� ���� Ƚ���� ���
	{
		printf("%d : %d��\n", i + 1, dice[i]); // �ֻ��� ���� ��ȣ(1~6) ,�� ���� ���� Ƚ�� dice[0]=�ֻ����� 1�� dice[5]=�ֻ����� 6��

	}
	*/
#pragma endregion

#pragma region  �ּҰ� ���ϱ�
	/*
	int arr[100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	printf("%d", min);
	*/
	/*
	int price[SIZE3];

	srand((unsigned)time(NULL)); // ������ �Ұ����� ���� ������ �߿��Ҷ�

	for (int i = 0; i < SIZE3; i++)
	{
		price[i] = (rand() % 100) + 1;
		printf("%-3d", price[i]);
	}
	int min=price[0];
	for (int i = 0; i < SIZE3; i++)
	{
		if (min > price[i])
		{
			min = price[i];
		}
	}
	*/

#pragma endregion

#pragma region ���� �¼� �����ϱ�
   /*
   int seats[SIZE4] = {0}; // ��� �¼��� �� �¼� 0 ���� �ʱ�ȭ
   char reserve; // ������ ������� ���θ� ���� ����
   int seatNumber; // �����ϰ��� �ϴ� �¼� ��ȣ

  do
  {
	  printf("�¼��� �����Ͻðڽ��ϱ�? (y or n)");
	  scanf(" %c", &reserve);

	  if (reserve == 'y')
	  {
		  printf("-------------------------\n");
		  for (int i = 1; i <= SIZE4; i++)
		  {
			  printf("%d ", i); // �¼� ��ȣ ���
		  }
		  printf("\n-----------------------\n");
		  for (int i = 0; i < SIZE4; i++)
		  {
			  printf("%d ", seats[i]); // �¼� ���� ���
		  }
		  printf("\n �� ��° �¼��� �����Ͻðڽ��ϱ�?");
		  scanf("%d", &seatNumber);

		  if (seatNumber<1 || seatNumber>SIZE4)
		  {
			  printf("�߸��� �¼���ȣ �Դϴ�.");
			  continue;
		  }
		  if (seats[seatNumber - 1] == 0)
		  {
			  seats[seatNumber - 1] = 1;
			  printf("����Ǿ����ϴ�.");
		  }
		  else
		  {
			  printf("�̹� ����Ǿ����ϴ�.");
		  }
	  }
  } while (reserve == 'y');
*/
#pragma endregion

#pragma region �Ǻ���ġ ����

int arr[10];
int i = 0;
for (int i = 0; i < 10; i++)
{
	if (i == 0)
		arr[0] = 1;
	else
	{
		int a = 0, b = 0, sum = 0;

		a = arr[i - 1];
		if (i > 1)
		{

			b = arr[i - 2];
		}
		sum = a + b;
		arr[i] = sum;
	}
	printf("%d ", arr[i]);
}





#pragma endregion
	return 0;
}

