#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//long long square(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return 2 * square(n-1);
//}

void gugudan(int max, int min)
{
	int i, j;
	for (i = min; i <= max; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d * %d =%d \n", i, j, i * j);
			
		}
		printf("\n");
	} 
	
}

int main()
{

#pragma region ������ ���̴� ���� ���
	/*
	int i, j;
	int num1, num2;
	int start, end;
	scanf("%d %d", &num1, &num2);

	if (num1 < num2)
	{
		start = num1;
		end = num2;
	}
	else
	{
		start = num2;
		end = num1;
	}

	for (i = start; i <= end; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d * %d =%d\n", i, j, i * j);
		}
		printf("\n");
	}
	*/
	//int max, min;
	//int a, b;
	//printf("����� �ܼ��� �Է��ϼ���");
	//scanf("%d %d", &a, &b);
	//
	//if ((a > 0 && a < 10) && (b > 0 && b < 10))
	//{
	//	max = (a > b) ? a : b;
	//	min = (a > b) ? b : a;
	//	printf("ū �� %d , ���� �� %d\n", max, min);
	//	printf("\n");
	//	gugudan(max,min);
	//}
	

#pragma endregion


#pragma region �ִ� �����
	
	//int num1, num2;
	//int gcd=0, temp;
	//int max,min;
	//printf("���� �Է�");
	//scanf("%d %d", &num1, &num2);  // ū���� num1 �������� num2 ��� �������� 
	//
	//max=(num1>num2) ? num1:num2;
	//min=(num1>num2) ? num2:num1;
	//
	//while (num2 != 0)
	//{
	//
	//	temp = num2;
	//	num2 = num1 % num2;
	//	num1 = temp;
	//
	//}
	//gcd= num1;
	//printf("�ִ� ����� : %d", gcd);
	
	//int a, b;
	//int max, min, gcd;  // ū�� ������ �ִ� �����
	//int i; // �ݺ��� ����
	//printf("���� �Է�");
	//scanf("%d %d", &a, &b);
	//
	//max = (a > b) ? a : b;
	//min = (a > b) ? b : a;  // ū�� ������ ����
	//for (i = 1; i < min; i++)
	//{
	//	a = max % i; // �������� ������ ��������� ��Ȱ��
	//	b = min % i;
	//	if (a == 0 && b == 0)
	//		gcd = i;
	//}
	//printf("�ִ� ����� %d \n", gcd);


	//int a, b;
	//int max, min, temp = 1; // ū�� ������ ������
	//
	//printf("���� �Է� :");
	//scanf("%d %d", &a, &b);
	//max = (a > b) ? a : b; 
	//min = (a > b) ? b : a; // ū�� ������ ����
	//
	//while (temp != 0) // 0�̸� ���� �״�� ���
	//{
	//	temp = max % min; // ū������ �������� ���� ������
	//	max = min; // �������� ū���� �ǰ�
	//	min = temp; // �������� �������� ��
	//
	//}
	//printf("�ִ� ����� :%d", max);

#pragma endregion


#pragma region ���� ����
	/*
	int money = 3500;
	int cream = 500;
	int shrimp = 700;
	int coke = 400;

	// �ִ� ������ ����Ѵ�.
	int maxcream = money / cream;
	int maxshrimp = money / shrimp;
	int maxcoke = money / coke;

	for (int i = 1; i <= maxcream; i++)
		for (int j = 1; j <= maxshrimp; j++)
			for (int k = 1; k <= maxcoke; k++)
				if (i * cream + j * shrimp + k * coke == money)
					printf("ũ���� %d�� ����� %d�� �ݶ� %d��\n", i, j, k);
*/


#pragma endregion

#pragma region �Ҽ� ����ϱ�
/*
int num;
// 2���� 30���� �ݺ�
for (int num = 2; num < 30; num++)
{
	bool isPrime = true; // �Ҽ� �Ǻ� �÷���
	 // 2���� num�� �����ٱ��� �ݺ�
	for (int i = 2; i * i<=num; i++)
	{
		if (num % i == 0)
		{
		   isPrime = false; // �Ҽ��� �ƴϹǷ� �÷��׸� false�� ����
		   break; // ���̻� �ݺ��� ���ʿ��ϴ� �ݺ��� Ż��

		}

	}
	if (isPrime) // �Ҽ��� ��� ���
	{
		printf("%d\n", num);
	}
}
*/

    //int n; // 1�� ������ų ��
	//int i; // �ݺ����� ����
	//int count = 0; // �Ҽ� ���� ī����
	//
	//for (n = 2; count <= 10; n++) // n�� ������ 10�� �ɶ����� ��� ����
	//{
	//	for (i = 2; i <= n; i++) // i�� n���� ����
	//	{
	//		if (i == n)
	//		{
	//			printf("%d ", n); // �Ҽ� ���
	//			count++;
	//		}
	//		if (n % i == 0) // �ѹ��̶� 0���� ������ ��������
	//			break; // �˻�����
	//	}
	//}
	//printf("\n");


#pragma endregion


#pragma region �� �� �� ��Ÿ����
/*
int totalsecond,day,hours,minutes,second;
scanf("%d", &totalsecond);

day = totalsecond / (3600*24); // �� �ʸ� �� ������ ��ȯ(1��=24�ð�*3600��)
totalsecond = totalsecond % (24 * 3600); // �� ������ ��ȯ�� �� ���� �� ���
hours = totalsecond / 3600; // ���� �ʸ� �ð� ������ ��ȯ
totalsecond %= 3600; // �ð� ������ ��ȯ�� �� ���� �� ���
minutes = totalsecond / 60; // ���� �ʸ� �� ������ ���
second =totalsecond % 60;  // �� ������ ��ȯ�� �� ���� �� ���


printf("%d �� %d �� %d �� %d ��",day, hours, minutes, second);
*/

#pragma endregion


#pragma region ������ �����ϴ� k�� �ִ� 

//int n, k = 0;
//int num = 1; // n���� ��û Ŀ�� ��� long long���� ��� ,num���� 2�� k�� ���� �����Ѵ�.
//scanf("%d", &n);
//while (num * 2 <= n)
//{
//	 num *= 2; // �� �ݺ����� 2�辿 �����ϴ� ���� num�� �ִ´�. ������ �����ϸ� �ݺ��� ������
//	 k++;  // k�� �ִ��� ���� �� �ִ�.
 //}
 //printf("%d", k);


	//int num = 1; // 2�� ����� �����ϴ� ����
	//int input;
	//int i=0;
	//
	//printf("n �Է� :");
	//scanf("%d", &input);
	//for (i = 0; ; i++)
	//{
	//	num *= 2;
	//	if (num > input)
	//		break;
	//}
	//printf("k �� %d \n", i);


#pragma endregion



#pragma region ���� n�� ��������� ����

	//int num;
	//long long result;
	// printf("���� �Է� :");
	//scanf("%d", &num);
	//result = square(num);
	//printf("2�� %d���� %lld\n",num,result);



#pragma endregion


	return 0;
}
