#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#define STUDENTS 5
#define WORD 26
#define SIZE 5
#define SIZE2 6
#define SIZE3 10
#define SIZE4 10
#define SIZE5 10
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

#pragma region ���ڿ� ���� ���
	/*

	char a1[] = "Hello";
	char a2[] = " World!";
	char con[20];

	int a = sizeof(a1) / sizeof(char);
	printf("%d\n", a);
	int b = sizeof(a2) / sizeof(char);
	printf("%d\n", b);
	int c = a + b;
	printf("%d\n", c);
	int i = 0;
	int j = 0;
	for (i = 0; i < a-1; i++)
	{
		con[i] = a1[i];
	}
	/*for (j = a - 1; j < c - 1; j++) // c-1= 13
	{
		con[j] = a2[j-a+1];  //  +1�� NULL���ڸ� �־��ذ�

	}

	for (j = 0; j < b-1; j++)
	{
		con[i + j] = a2[j];
	}
	con[i + j] = '\0';

	printf("%s", con);
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

 /*
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
 */





#pragma endregion


#pragma region ���� ����

 /*
 int a[SIZE]; // �������� - ������ �� -> �ʱ�ȭ�� ��������

 srand(time(NULL));
 for (int i = 0; i < SIZE; i++)
 {
	 a[i] = (rand() % 100) + 1;
 }
 printf("[");

 for (int i = 0; i < SIZE; i++)
 {
	 printf("%d ", a[i]);
 }
 printf("]\n");

 int max = INT_MIN;

 for (int i = 0; i < SIZE; i++)
 {
	 for (int j = 0; j < SIZE - 1; j++)
	 {
		 if (a[j] > a[j + 1])
		 {
			 int temp = a[j];
			 a[j] = a[j + 1];
			 a[j + 1] = temp;
		 }
	 }

 }
 for (int i = 0; i < SIZE; i++)
 {
	 if (max < a[i])
		 max = a[i];

 }

 for (int i = 0; i < SIZE; i++)
 {
	 printf("%d ", a[i]);
 }
 printf("\n");
 printf("%d\n", max);
 */
#pragma endregion


#pragma region �迭���� Ư���� �� Ž���ϱ�

 /*
 int key, i = 0;

 int list[SIZE5] = { 1,2,3,4,5,6,7,8,9,10 };
 for (i = 0; i < SIZE5; i++)
 {
	 printf("%d ", list[i]);
 }

 printf("Ž���� �Է� :");
 scanf("%d", &key);
 for (i = 0; i < SIZE5; i++)
 {
	 if (list[i] == key)
	 {
		 printf("Ž�� ���� �ε��� = %d \n", i);
		 return 0;
	 }

 }
 printf("Ž������");

 */

#pragma endregion


#pragma region ������ �迭
 /*
 int i, j = 0;
 int arr[5][5] =
 {
	 {1,2,3,4,5},{6,7,8,9,10},
	 {11,12,13,14,15},{16,17,18,19,20},
	 {21,22,23,24,25}

 };
 for (i = 0; i < 5; i++)
 {
	 for (j = 0; j < 5; j++)
	 {
		 printf("arr[%d][%d]= %d ",i,j,arr[i][j]);
	 }
	 printf("\n");
 }
 */
#pragma endregion


#pragma region ������ �迭 ����
 /*
 int i, j = 0;
 int a[3][3] =
 {
	 {1,2,3},
	 {4,5,6},
	 {7,8,9}
 };
 int b[3][3] =
 {   {10,11,12},
	 {13,14,15},
	 {16,17,18}
 };
 int c[3][3] = { 0 };

 for (i = 0; i < 3; i++)
 {
	 for (j = 0; j < 3; j++)
	 {
		 c[i][j] = a[i][j] + b[i][j];
		 printf("%d ", c[i][j]);
	 }
	 printf("\n");
 }
 */

#pragma endregion

#pragma region �����ؾ� �ϴ� Ÿ���� ��
 /*
 int x, y; // �簢���� ���� ��ǥ �Է��� ���� ����
 int fix = 0; // �����ؾ� �ϴ� Ÿ���� ���� ī��Ʈ�ϴ� ����
 int arr[10][10] = { 0, }; // 10 X 10
 for (int i = 0; i < 2; i++)
 {
	 printf("%d��° �簢��", i); // ����ڿ��� �� ��° �簢�� ��ǥ�� �Է¹޴��� �Ƴ�
	 scanf("%d %d", &x, &y); // ������ġ �Է� ����
	 for (int j = x; j < x + 3; j++) // �Է¹��� ���� ��ġ�� �������� 3X3 ũ���� �簢�� ������ ���� 1�� ���� -> ĥ��
	 {
		 for (int k = y; k < y+3; k++)
		 {
			 arr[j][k] = 1; // �ش� ������ ������ �ʿ����� ��Ÿ��
		 }
	 }
 }
 // ������ �ʿ��� Ÿ���� �� ���� ���
 for (int i = 0; i < 10; i++) //
 {
	 for (int j = 0; j < 10; j++)
	 {
		 if (arr[i][j] == 1)
		 {
			 fix++; // �����ؾ� �ϴ� Ÿ���� ��
		 }
	 }
 }
 printf("�����ؾ� �ϴ� Ÿ���� ��=%d\n", fix);
 */

#pragma endregion

#pragma region ƽ���� ����

	int currentPlayer = 1;
	int x, y = 0;
	int moveCount = 0;
	int end = 0;

	char board[3][3] =
	{
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'}
	};

	while (!end)
	{
		printf("���� ������\n");
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				printf(" %c ", board[i][j]);
			}
			printf("\n");
		}

		printf("�÷��̾� %d �� �����Դϴ�. ��ǥ�� �Է��ϼ��� :", currentPlayer);
		scanf("%d %d", &x, &y);

		x--; y--; // �迭�� �ε����� ���߱� ���ؼ� 1�� ���ش�

		if (x >= 0 && x < 3 && y >= 0 && y < 3 && (board[x][y] != 'X' && board[x][y] != 'O'))
		{
			board[x][y] = (currentPlayer == 1) ? 'X' : 'O';
			
			for (int i = 0; i < 3; i++)
			{
				if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
					(board[0][i] == board[1][i] && board[1][i] == board[2][i]) ||
					(board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
					(board[0][2] == board[1][1] && board[1][1] == board[2][0]))
				{
					printf("�÷��̾� %d �� �¸��߽��ϴ�!\n", (currentPlayer == 1) ? 1 : 2);
					end = 1;
					break;
				}

			}
			if (!end && moveCount == 9)
			{
				printf("���º� �Դϴ�.");
				end = 1;
			}
			currentPlayer = (currentPlayer == 1) ? 2 : 1;

		}
		else	
		{
			printf("�߸��� �Է��Դϴ�.");
			continue;
		}
			moveCount++;

#pragma endregion

	}
		
		return 0;
}

