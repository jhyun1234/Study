#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <math.h>
#define RATE 0.01

int roll_dice()
{
	return (rand() % 6 + 1); // 1���� 6������ ���� ����
}
int main()
{
#pragma region ���丮��
	/*
	int n;
	scanf("%d", &n);
	int factorial = 1;
	while (n >= 1)
	{
		factorial *= n;
		n--;
	}
	printf("%d\n", factorial);
	*/
#pragma endregion

#pragma region ��������
	/*
	double pheight = 0.001;
	const double everest = 8800.0;
	int count = 0;
	while (pheight < everest)
	{
		pheight *= 2.0;
		count++;
	}
	printf("%d\n", count);
	*/

#pragma endregion

#pragma region ������ �ð�
	/*
	int h, m, s;
	h = m = s=0;
	while (1)
	{
		system("cls");
		printf("%02d: %02d: %02d", h, m, s);
		s++;
		if (s == 60) { m++; s = 0; }
		if (m == 60) { h++; m = 0; }
		if (h == 24) { h = m = s = 0; }
		Sleep(1000);

	}
	*/
#pragma endregion

#pragma region ������ �ڸ��� �ٲ㼭 ���
	/*
	long num;
	int digit;
	scanf("%ld", &num);

	while (num > 0)
	{
		digit = num % 10;
		printf("%d", digit);
		num = num / 10;
	}
	*/
#pragma endregion

#pragma region ���� �����ϱ�
	/*
	int i = 0;
	do
	{
		printf("1-- ���Ͽ���\n");
		printf("2-- ���������ϱ�\n");
		printf("3-- ����\n");
		printf("�ϳ��� �����Ͻʽÿ�.\n");
		scanf("%d", &i);
	} while (i < 1 || i>3);
	printf("���õ� �޴� %d\n", i);
    */


#pragma endregion

#pragma region ���� ���߱� ����
	/*
	int answer; // ����
	int guess;
	int tries = 0;

	srand(time(NULL));
	answer = rand() % 100;
	do
	{
		printf("������ �����Ͽ� ���ÿ�");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("������ ������ answer���� �����ϴ�.\n");
		if (guess < answer)
			printf("������ ������ answer���� �����ϴ�.\n");

	} while (guess != answer);
	printf("�õ�Ƚ�� %d\n", tries);
	*/
#pragma endregion

#pragma region for ���丮��
   /*
   int fact = 1;
   int i, n;

   printf("���� �Է�");
   scanf("%d", &n);

   for (i = 1; i <= n; i++)
   {

	   fact = fact * i;
   }
   printf("%d!-> %d\n", n, fact);
   */

#pragma endregion

#pragma region ����
   /*
   long long money = 1;
   for (int i = 1; i <= 30; i++)
   {
	   money *= 2;
	   printf("%d�� �� �ݾ� %lld\n", i, money);
   }
   */

#pragma endregion

#pragma region ��� ���
   /*
   int num, i = 1;
   scanf("%d", &num);
   while (i <= num)
   {
	   if (num % i == 0)
		   printf("%d ", i);
	   i++;
   }
   printf("\n");
   */

#pragma endregion

#pragma region �α� ����
    /*
    double now = 8e9; //����
	int year = 2024;
	while (now < 10e9)
	{
		now *= (1 + RATE); // ���� �α��� 1.01�� ���ϸ� 101%�ȴ� �� �����α��� 1%�߰� �����Ѵٴ°��� �ǹ���
		year++;
	}
	printf("100��� ���ĳ⵵ %d\n", year);
	*/

#pragma endregion

#pragma region ��ٸ��� �� ���
/*
for (int i = 1; i < 10; i++)
{
	for (int j = 0; j < i; j++)
	{
		printf("*");
	}
	printf("\n");
}
*/


#pragma endregion

#pragma region �����ﰢ��
  /*
   int a, b, c;
   for (a = 1; a <= 100; a++)
	   for (b = 1; b <= 100; b++)
		   for (c = 1; c <= 100; c++)
			   if ((a * a + b * b) == c * c)
				   printf("%d %d %d\n", a, b, c);
				   
 int a, b, c;
   for (a = 1; a <= 100; a++)
	   for (b = a; b <= 100; b++)
		   for (c = b; c <= 100; c++)  // �� ���� ���
			   if ((a * a + b * b) == c * c)
				   printf("%d %d %d\n", a, b, c); 
   
*/

#pragma endregion

#pragma region ������ ������ ����� ��� ���ض�
  /*
  int sum = 0;
  int n;

  for (int i = 0; i <= 10; i++)
  {
	  scanf("%d", &n);
	  if (n < 0)
		  break;
	  sum += n;
  }
  printf("%d", sum);
  */

#pragma endregion

#pragma region ¦���� ����϶�  
/*
for (int i = 0; i <= 10; i++)
{
	if (i % 2 == 1)
	{
		continue;
	}
	printf("%d ", i);
	
   }
*/
#pragma endregion

#pragma region ������� �ڵ�����
    /*
   int ans;
   while (1)
   {
	   int x = rand() % 100;
	   int y = rand() % 100;
	   printf("%d + %d=", x, y);
	   scanf("%d", &ans);
	   if (x + y == ans)
	   {
		   printf("����");
		   break;

	   }
	   else
		   printf("����");
   }
   */
#pragma endregion

#pragma region �Ҽ�ã��
 /*
  int n,x;
  scanf("%d", &n);
  for (int i = 2; i <= n; i++)
  {
	  x = 1;
	  for (int j = 2; j < i; j++)
	  {
		  if (i % j == 0)
		  {
			  x = 0;
			  break;

		  }
	  }
	  if (x == 1)
		  printf("%d ", i);
  }
  */

#pragma endregion

#pragma region ���̰��
  /*
  srand(time(NULL));
  int a, n = 0; // �ݺ�Ƚ������ ,
  double x, y, z, pi;
  scanf("%d", &a);

  for (int i = 0; i < a; i++)
  {
	  x = (double)rand() / RAND_MAX;
	  y = (double)rand() / RAND_MAX;
	  z = x * x + y * y;
	  if (z <= 1)
	  {
		  n++;
	  }
  }
  pi = (double)n / a * 4;
  printf("����=%lf", pi);
  */
  
#pragma endregion

#pragma region ���ǰ� ����ϱ�
/*
int price, paid, totalpaid = 0;
printf("���� ������ �Է��ϼ���: ");
scanf("%d", &price);

while (1)
{
	// ���� �ݾ� ���
	int remaining = price - totalpaid;
	// ���� �ݾ��� ���ٸ� ����
	if (remaining <= 0)
	{
		printf("�Ž������� %d�� �Դϴ�.\n", -remaining);
		break;
	}
	// ���� �ݾ� ���
	printf("���� �ݾ� :%d\n", remaining);
	
	// ������ �ݾ� �Է�
	printf("�ݾ��� �Է��ϼ���.:");
	scanf("%d", &paid);

	// ���� �ݾ� ����
	totalpaid += paid;
	
}
*/

#pragma endregion

#pragma region �ֻ��� ����
   /*
   srand(time(NULL)); //���� �ʱ�ȭ
   int player1 = 0, player2 = 0;
   int dice1, dice2;

   // ù ��° �÷��̾� �ֻ��� ������
   do
   {

	   dice1 = roll_dice();
	   dice2 = roll_dice();
	   player1++;

   } while (dice1 != 1 || dice2 != 1);

   // �� ��° �÷��̾� �ֻ��� ������
   do
   {

	   dice1 = roll_dice();
	   dice2 = roll_dice();
	   player2++;

   } while (dice1 != 1 || dice2 != 1);

   printf("player1 ���� Ƚ�� :%d\n", player1);
   printf("player2 ���� Ƚ�� :%d\n", player2);

   if (player1 < player2)
   {
	   printf("player1 �¸�\n");
   }
   else if (player1 > player2)
   {
	   printf("player2 �¸�\n");
   }
   else
   {
	   printf("���º�");
   }
   */
#pragma endregion

	return 0;
}