#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define SIZE 10
int main()
{
#pragma region ���ڿ�

	/*
	int arr[20];
	printf("%d\n", sizeof(arr)); // 80
	

	char arr1[] = "Hello World";
	char arr2[] = "Hello";
	char arr3[20];

	int a = 0;

	while (arr2[a] != 0)
	{
		a++;
	}
	printf("%d\n", a);

	for (int i = 0; i < strlen(arr2); i++)
	{
		arr3[i] = arr2[i];
	}
		arr3[strlen(arr2)] = '\0';
		printf("%s\n", arr3);
		*/
#pragma endregion
	

#pragma region ��������

	/*
	// int �迭 ũ��� 10�� ���� --�޸� Ȯ��

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
	
	
#pragma region ���ڿ� �̾ ���

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
	for (j = a - 1; j < c - 1; j++) // c-1= 13 
	{
		con[j] = a2[j-a+1];  //  +1�� NULL���ڸ� �־��ذ� 
		
	}
	
	for (j = 0; j < b-1; j++)
	{
		con[i + j] = a2[j]; 
	}
	con[i + j] = '\0';

	printf("%s", con);
	/*
	
#pragma endregion


#pragma region �������迭

	/*
	int arr[3][5] = // ���� �����ʾƵ� ������ ���� ���������� ������ ���.
	{
		{1,2,3,4,5,},
		{6,7,8,9,10},
		{11,12,13,14,15}

	};
	
	for (int i = 0; i < 3; i++) // ��
	{
		for (int j = 0; j < 5; j++) // ��
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	*/
#pragma endregion

#pragma region �迭


//float arr_f[5] = { 1.0f,2.0f,3.0f };
//	for(int i = 0; i < 5; i++)
//	{
//		printf("%.2f\n", arr_f[i]);
//	}

 // char str[6] = "coding"; // NULL���ڰ� �� �ڸ��� ��� ������ ����
 /*char str_1[7] = "coding";
 printf("%s\n", str_1);*/
//
//char str[] = "coding";
//printf("%s\n", str);
//printf("%d\n", sizeof(str));
//
//for (int i = 0; i < sizeof(str); i++)
//{
//	printf("%c\n", str[i]);
//}
//
//char kor[] = "������";
//printf("%s\n", kor);
//printf("%d\n", sizeof(kor)); 
// ���� 1���� : 1byte
// �ѱ� 1���� : 2byte
//
// char c_array[6] = { 'c','o','d','i','n','g'}; -> ����
//char c_array[7] = { 'c','o','d','i','n','g','\0'};
//printf("%s\n", c_array);
  
  //char c_array[10]= { 'c','o','d','i','n','g'};
  //printf("%s\n", c_array);
  /*for (int i = 0; i < sizeof(c_array); i++)
  {
	  printf("%c\n", c_array[i]);
  }*/
  //for (int i = 0; i < sizeof(c_array); i++)
  //{
	 //printf("%d\n", c_array[i]); // �ƽ�Ű �ڵ� �� ��� NUll���ڴ� 0���� ���
  //}

//   // ���ڿ� �Է¹ޱ� 
//char name[256];
//printf("�̸��� �Է��ϼ��� :");
//scanf("%s", name, sizeof(name));
//printf("%s\n", name);
   
    
//printf("%c\n", '0'); 
//printf("%d\n", '0'); // 48
//
//printf("%c\n", '\0'); // 0
//printf("%d\n", '\0'); // 0 

  // 0~127 ������ �ƽ�Ű�ڵ� �������� �ش��ϴ� ���� Ȯ��
//
//for (int i = 0; i < 128; i++)
//{
//	printf("�ƽ�Ű�ڵ� ���� %d :%c\n",i,i);
//   }

#pragma endregion
    
#pragma region ��Ǫ �ٸ��� ����


//srand(time(NULL));
//printf("\n\n === �ƺ��� ǳ���� �Ӹ� ���� === \n\n");
//int answer; // ����� �Է°�
//int shampoo = rand() % 4; // ��Ǫ ���� (0-3)
//
//int cntShowBottle = 0; // �̹� ���ӿ� ������ �� ����
//int prevCntShowBottle = 0; // �� ���ӿ� ������ �� ����
//// ���� �����ִ� �� ������ �ٸ��� �Ͽ� ����� ��� (ó���� 2�� => ������ 3��..)
//
//// 3���� ��ȸ (3���� ��Ǫ ���� �õ�)
//
//for (int i = 1; i <= 3; i++)
//{
//	int bottle[4] = { 0,0,0,0 }; // 4���� ��
//	do {
//
//		cntShowBottle = rand() % 2 + 2; // ������ �� ���� (0-1, +2 -> 2,3)
//	} while (cntShowBottle == prevCntShowBottle);
//	prevCntShowBottle = cntShowBottle; // ù ��°�� ���� ���ؼ� �ι�°�� ���� ������ �Ѵ� ó�� 2�̸� ������ 3
//
//	int isIncluded = 0; // ������ �� �߿� ��Ǫ�� ���ԵǾ����� ����(1�̸� ����)
//	printf("> %d ��° �õ� :", i);
//
//	// ������ �� ������ ����
//	for (int j = 0; j < cntShowBottle; j++)
//	{
//		int randBottle = rand() % 4; // 0-3
//		// ���� ���õ��� ���� ���̸� , ���� ó��
//		if (bottle[randBottle] == 0)
//		{
//			bottle[randBottle] = 1;
//			if (randBottle == shampoo)
//			{
//				isIncluded = 1;
//			}
//		}
//		// �̹� ���õ� ���̸�, �ߺ��̹Ƿ� �ٽ� ����
//		else
//		{
//			j--;
//		}
//	}
//
//	// ����ڿ��� ���� ǥ��
//	for (int k = 0; k < 4; k++)
//	{
//		if (bottle[k] == 1)
//		{
//			printf("%d ", k + 1);
//		}
//	}
//	printf(" ��Ǫ�� �Ӹ��� �ٸ��ϴ�.\n\n");
//
//	if (isIncluded == 1)
//	{
//		printf(">> ����\n");
//	}
//	else
//	{
//		printf(">> ����\n");
//		
//	}
//	printf("\n .... ��� �Ϸ��� �ƹ�Ű�� �������� ... ");
//	getchar(); // Ű�� �Է��Ҷ����� ������
//}
//printf("��Ǫ�� ����ϱ��?");
//scanf("%d", &answer);
//
//if (answer == shampoo +1)
//{
//	printf("�����Դϴ�.\n");
//}
//else
//{
//	printf("Ʋ�Ƚ��ϴ�. ������ %d �Դϴ�.\n", shampoo + 1);
//}
 
#pragma endregion



    
	return 0;
}
