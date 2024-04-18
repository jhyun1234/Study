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

#pragma region 구구단 사이단 까지 출력
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
	//printf("출력할 단수를 입력하세요");
	//scanf("%d %d", &a, &b);
	//
	//if ((a > 0 && a < 10) && (b > 0 && b < 10))
	//{
	//	max = (a > b) ? a : b;
	//	min = (a > b) ? b : a;
	//	printf("큰 값 %d , 작은 값 %d\n", max, min);
	//	printf("\n");
	//	gugudan(max,min);
	//}
	

#pragma endregion


#pragma region 최대 공약수
	
	//int num1, num2;
	//int gcd=0, temp;
	//int max,min;
	//printf("정수 입력");
	//scanf("%d %d", &num1, &num2);  // 큰수를 num1 작은수를 num2 라고 정했을시 
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
	//printf("최대 공약수 : %d", gcd);
	
	//int a, b;
	//int max, min, gcd;  // 큰수 작은수 최대 공약수
	//int i; // 반복문 변수
	//printf("정수 입력");
	//scanf("%d %d", &a, &b);
	//
	//max = (a > b) ? a : b;
	//min = (a > b) ? b : a;  // 큰수 작은수 구분
	//for (i = 1; i < min; i++)
	//{
	//	a = max % i; // 변수들을 나머지 저장용으로 재활용
	//	b = min % i;
	//	if (a == 0 && b == 0)
	//		gcd = i;
	//}
	//printf("최대 공약수 %d \n", gcd);


	//int a, b;
	//int max, min, temp = 1; // 큰값 작은값 나머지
	//
	//printf("정수 입력 :");
	//scanf("%d %d", &a, &b);
	//max = (a > b) ? a : b; 
	//min = (a > b) ? b : a; // 큰수 작은수 구분
	//
	//while (temp != 0) // 0이면 값이 그대로 출력
	//{
	//	temp = max % min; // 큰수에서 작은수로 나눈 나머지
	//	max = min; // 작은수가 큰수가 되고
	//	min = temp; // 나머지가 작은수가 됨
	//
	//}
	//printf("최대 공약수 :%d", max);

#pragma endregion


#pragma region 물건 구매
	/*
	int money = 3500;
	int cream = 500;
	int shrimp = 700;
	int coke = 400;

	// 최대 수량을 계산한다.
	int maxcream = money / cream;
	int maxshrimp = money / shrimp;
	int maxcoke = money / coke;

	for (int i = 1; i <= maxcream; i++)
		for (int j = 1; j <= maxshrimp; j++)
			for (int k = 1; k <= maxcoke; k++)
				if (i * cream + j * shrimp + k * coke == money)
					printf("크림빵 %d개 새우깡 %d개 콜라 %d개\n", i, j, k);
*/


#pragma endregion

#pragma region 소수 출력하기
/*
int num;
// 2부터 30까지 반복
for (int num = 2; num < 30; num++)
{
	bool isPrime = true; // 소수 판별 플래그
	 // 2부터 num의 제곱근까지 반복
	for (int i = 2; i * i<=num; i++)
	{
		if (num % i == 0)
		{
		   isPrime = false; // 소수가 아니므로 플래그를 false로 설정
		   break; // 더이상 반복은 불필요하니 반복문 탈출

		}

	}
	if (isPrime) // 소수일 경우 출력
	{
		printf("%d\n", num);
	}
}
*/

    //int n; // 1씩 증가시킬 수
	//int i; // 반복문용 변수
	//int count = 0; // 소수 갯수 카운터
	//
	//for (n = 2; count <= 10; n++) // n은 갯수가 10개 될때까지 계속 증가
	//{
	//	for (i = 2; i <= n; i++) // i는 n까지 증가
	//	{
	//		if (i == n)
	//		{
	//			printf("%d ", n); // 소수 출력
	//			count++;
	//		}
	//		if (n % i == 0) // 한번이라도 0으로 나누어 떨어지면
	//			break; // 검사종료
	//	}
	//}
	//printf("\n");


#pragma endregion


#pragma region 시 분 초 나타내기
/*
int totalsecond,day,hours,minutes,second;
scanf("%d", &totalsecond);

day = totalsecond / (3600*24); // 총 초를 일 단위로 변환(1일=24시간*3600초)
totalsecond = totalsecond % (24 * 3600); // 일 단위로 변환한 후 남은 초 계산
hours = totalsecond / 3600; // 남은 초를 시간 단위로 변환
totalsecond %= 3600; // 시간 단위로 변환한 후 남은 초 계산
minutes = totalsecond / 60; // 남은 초를 분 단위로 계산
second =totalsecond % 60;  // 분 단위로 변환한 후 남은 초 계산


printf("%d 일 %d 시 %d 분 %d 초",day, hours, minutes, second);
*/

#pragma endregion


#pragma region 공식이 성립하는 k의 최댓값 

//int n, k = 0;
//int num = 1; // n값이 엄청 커질 경우 long long으로 사용 ,num에는 2의 k승 값을 저장한다.
//scanf("%d", &n);
//while (num * 2 <= n)
//{
//	 num *= 2; // 매 반복마다 2배씩 증가하는 값을 num에 넣는다. 조건이 만족하면 반복이 끝나며
//	 k++;  // k의 최댓값을 구할 수 있다.
 //}
 //printf("%d", k);


	//int num = 1; // 2의 계승을 저장하는 변수
	//int input;
	//int i=0;
	//
	//printf("n 입력 :");
	//scanf("%d", &input);
	//for (i = 0; ; i++)
	//{
	//	num *= 2;
	//	if (num > input)
	//		break;
	//}
	//printf("k 값 %d \n", i);


#pragma endregion



#pragma region 둘의 n승 재귀적으로 구현

	//int num;
	//long long result;
	// printf("정수 입력 :");
	//scanf("%d", &num);
	//result = square(num);
	//printf("2의 %d승은 %lld\n",num,result);



#pragma endregion


	return 0;
}
