#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <math.h>
#define RATE 0.01

int roll_dice()
{
	return (rand() % 6 + 1); // 1에서 6까지의 난수 생성
}
int main()
{
#pragma region 팩토리얼
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

#pragma region 종이접기
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

#pragma region 디지털 시계
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

#pragma region 정수의 자리수 바꿔서 출력
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

#pragma region 파일 선택하기
	/*
	int i = 0;
	do
	{
		printf("1-- 파일열기\n");
		printf("2-- 파일저장하기\n");
		printf("3-- 종료\n");
		printf("하나를 선택하십시오.\n");
		scanf("%d", &i);
	} while (i < 1 || i>3);
	printf("선택된 메뉴 %d\n", i);
    */


#pragma endregion

#pragma region 숫자 맞추기 게임
	/*
	int answer; // 정답
	int guess;
	int tries = 0;

	srand(time(NULL));
	answer = rand() % 100;
	do
	{
		printf("정답을 추측하여 보시오");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("제시한 정수가 answer보다 높습니다.\n");
		if (guess < answer)
			printf("제시한 정수가 answer보다 낮습니다.\n");

	} while (guess != answer);
	printf("시도횟수 %d\n", tries);
	*/
#pragma endregion

#pragma region for 팩토리얼
   /*
   int fact = 1;
   int i, n;

   printf("정수 입력");
   scanf("%d", &n);

   for (i = 1; i <= n; i++)
   {

	   fact = fact * i;
   }
   printf("%d!-> %d\n", n, fact);
   */

#pragma endregion

#pragma region 복리
   /*
   long long money = 1;
   for (int i = 1; i <= 30; i++)
   {
	   money *= 2;
	   printf("%d일 후 금액 %lld\n", i, money);
   }
   */

#pragma endregion

#pragma region 약수 계산
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

#pragma region 인구 증가
    /*
    double now = 8e9; //현재
	int year = 2024;
	while (now < 10e9)
	{
		now *= (1 + RATE); // 현재 인구에 1.01를 더하면 101%된다 즉 현재인구에 1%추가 증가한다는것을 의미함
		year++;
	}
	printf("100억명 돌파년도 %d\n", year);
	*/

#pragma endregion

#pragma region 사다리꼴 별 출력
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

#pragma region 직각삼각형
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
		   for (c = b; c <= 100; c++)  // 한 번만 출력
			   if ((a * a + b * b) == c * c)
				   printf("%d %d %d\n", a, b, c); 
   
*/

#pragma endregion

#pragma region 음수가 나오면 양수를 모두 더해라
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

#pragma region 짝수를 출력하라  
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

#pragma region 산수문제 자동출제
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
		   printf("정답");
		   break;

	   }
	   else
		   printf("오답");
   }
   */
#pragma endregion

#pragma region 소수찾기
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

#pragma region 파이계산
  /*
  srand(time(NULL));
  int a, n = 0; // 반복횟수변수 ,
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
  printf("파이=%lf", pi);
  */
  
#pragma endregion

#pragma region 물건값 계산하기
/*
int price, paid, totalpaid = 0;
printf("물건 가격을 입력하세요: ");
scanf("%d", &price);

while (1)
{
	// 남은 금액 계산
	int remaining = price - totalpaid;
	// 남은 금액이 없다면 종료
	if (remaining <= 0)
	{
		printf("거스름돈은 %d원 입니다.\n", -remaining);
		break;
	}
	// 남은 금액 출력
	printf("남은 금액 :%d\n", remaining);
	
	// 지불할 금액 입력
	printf("금액을 입력하세요.:");
	scanf("%d", &paid);

	// 지불 금액 누적
	totalpaid += paid;
	
}
*/

#pragma endregion

#pragma region 주사위 게임
   /*
   srand(time(NULL)); //난수 초기화
   int player1 = 0, player2 = 0;
   int dice1, dice2;

   // 첫 번째 플레이어 주사위 던지기
   do
   {

	   dice1 = roll_dice();
	   dice2 = roll_dice();
	   player1++;

   } while (dice1 != 1 || dice2 != 1);

   // 두 번째 플레이어 주사위 던지기
   do
   {

	   dice1 = roll_dice();
	   dice2 = roll_dice();
	   player2++;

   } while (dice1 != 1 || dice2 != 1);

   printf("player1 던진 횟수 :%d\n", player1);
   printf("player2 던진 횟수 :%d\n", player2);

   if (player1 < player2)
   {
	   printf("player1 승리\n");
   }
   else if (player1 > player2)
   {
	   printf("player2 승리\n");
   }
   else
   {
	   printf("무승부");
   }
   */
#pragma endregion

	return 0;
}