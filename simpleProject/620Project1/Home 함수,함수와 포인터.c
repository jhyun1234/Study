#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float CelToFah(float num);
float FahToCel(float num);
int Max(int n1, int n2, int n3);
int Min(int n1, int n2, int n3);
int Fibonacci(int n);

int main_other()
{
	/*
	float tem = 0;
	float tem1 = 0;
	printf("섭씨 온도를 입력하세요 단위 C\n");
	scanf("%f", &tem); 
	printf("섭씨에서 화씨로 : %f\n", CelToFah(tem));
	printf("화씨 온도를 입력하세요 단위 F\n");
	scanf("%f", &tem1);
	printf("화씨에서 섭씨로 : %f\n", FahToCel(tem1));
	*/

	/*
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	printf("정수 3개를 입력하세요.\n");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("가장 큰 수 %d\n", Max(n1, n2, n3));
	printf("가장 작은 수 %d\n", Min(n1, n2, n3));
	*/
	
	/*
	int n = 0;
	printf("몇개의 피보나치 수열을 보고싶은가요?\n");
	scanf("%d", &n);
	printf("%d",Fibonacci(n));
	*/

	return 0;
}

float CelToFah(float num)
{
	return 1.8 * (num)+32;
}

float FahToCel(float num)
{	
	return ((num - 32) / 1.8);
}

int Max(int n1, int n2, int n3)
{
	int max = n1;
	if (n2 > max)max = n2;
	if (n3 > max)max = n3;
	return max;
}
int Min(int n1, int n2, int n3)
{
	int min = n1;
	if (n2 < min) min = n2;
	if (n3 < min) min = n3;
	return min;
}

int Fibonacci(int n)
{
	int a1 = 0;
	int a2 = 1;
	int a3 = 0;
	for (int i = 0; i < n; i++)
	{

		a3 = a1 + a2;
		printf("%d ",a3);
		a1 = a2;
		a2 = a3;
		
	}
	return a3;
}