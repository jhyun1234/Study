#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
long long square(int n)
{
	if (n == 0)
		return 1;
	else
		return 2 * square(n - 1);
}

long long square1(int n)
{
	if (n == 0)
		return 1;
	else
		return 2 * square1(n - 1);
}
int main()
{

#pragma region  도전 1


	//int a;
	//scanf("%d", &a);
	//printf("%#x", a);

#pragma endregion

#pragma region 도전 2
	/*
	int a, b;
	int max, min;
	scanf("%d %d", &a, &b);
	if (a>b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}

	for (int i=min; i <= max; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			
		}
		printf("\n");
	}
	*/
#pragma endregion

#pragma region 도전 3

	/*
	int a, b;
	int gcd,temp;
	int max, min;

	scanf("%d %d", &a, &b);

	max = (a > b) ? a : b;
	min = (a > b) ? a : b;

	while(b != 0)
	{
		temp = b;
		b = a % b;
		a=temp;

	}
	gcd = a;
	printf("%d", gcd);
	*/


#pragma endregion

#pragma region 도전 4
	/*
	int money = 3500;
	int shrimp = 700;
	int coke = 400;
	int cream = 500;

	int maxcream = money / cream;
	int maxshrimp = money / shrimp;
	int maxcoke = money / coke;

	for (int i = 1; i <= maxcoke; i++)
	{
		for (int j = 1; j <= maxcream; j++)
		{
			for (int k = 1; k <= maxshrimp; k++)
			{
				if (i * coke + j * cream + k * shrimp == money)
				{
					printf("크림빵 %d 개,콜라 %d 개,새우깡 %d 개\n", j, i, k);
				}
			}
		}
	}
	*/

#pragma endregion

#pragma region 도전 5
	/*
	int n;
	int i;
	int count=0;
	for (n = 2; count <= 10; n++)
	{
		for (i = 2; i <= n; i++)
		{
			if (i == n)
			{
			  printf("%d\n", n);
			  count++;

			}		
		    if (n % i == 0)
		     	break;
		}
	}
	*/

#pragma endregion

#pragma region 도전 6
    /*
    int h, m, s, input;

	scanf("%d", &input);

	h = input /(3600); // 시간 = 초/3600
	m = (input%3600)/ 60; // 분 = (초%3600)/ 60
	s = (input % 3600)%60; // 초 = (초%3600) % 60
	printf("%d시 %d분 %d초 \n", h, m, s);
	*/

#pragma endregion

#pragma region 도전 7
   /*
    int n;
	int k = 0;
	int num = 1;
	scanf("%d", &n);
	while (num * 2 <= n)
	{
		num *= 2;
		k++;
	}
	printf("%d", k);
	*/
#pragma endregion

#pragma region 도전 8
   /*
   int n;
   long long result;
   scanf("%d", &n);
   result = square(n);
   printf("%lld", result);
   */
#pragma endregion

#pragma region 배열
    /*
     int arr[5];
	 int max, min, sum;
	 for (int i = 0; i < 5; i++)
	 {
		 scanf("%d", &arr[i]);
	 }
	 max = min = arr[0];
	 sum = 0;
	 for (int i = 0; i < 5; i++)
	 {
		 if (max < arr[i])
			 max = arr[i];
		 if (min > arr[i])
			 min = arr[i];
		 sum += arr[i];
	 }
	 printf("%d %d %d\n", max, min, sum);
	 */
#pragma endregion

#pragma region 문자열 배열1
    /*
	char arr[] = { 'G','o','o','d',' ','t','i','m','e' };
	int len = sizeof(arr) / sizeof(char);

	for (int i = 0; i < len; i++)
	{
		printf("%c", arr[i]);
	}
	*/


#pragma endregion

#pragma region 문자열 배열2
   /*
   char arr[100];
   int n = 0;
   scanf("%s", &arr);

   while (arr[n] != 0)
	   n++;
   printf("%d", n);
   */

#pragma endregion

#pragma region 문자열 배열3
   /*
   char arr[100];
   int n = 0;
   int temp;
   scanf("%s", &arr);
   while (arr[n] != 0)
	   n++;
   for (int i = 0; i < n / 2; i++)
   {
	   temp = arr[i];
	   arr[i] = arr[(n - i) - 1];
	   arr[(n - i) - 1] = temp;
   }
   printf("%s", arr);
   */

#pragma endregion

#pragma region 문자열 배열4
/*
   char arr[100];
   int n = 0;
   char max = 0;
   scanf("%s", arr);
   while (arr[n] != 0)
	   n++;
   for (int i = 0; i < n; i++)
   {
	   if (max < arr[i])
		   max = arr[i];
   }
   printf("%d %c", max,max);
   */
#pragma endregion

#pragma region 백배열
   /*
   int arr[100];
   int a, n=0;
   int i = 0;
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
	   scanf("%d", &arr[i]);
   }

   scanf("%d", &a);
   int sum = 0;
   for (i = 0; i < n; i++)
   {
	   if (arr[i] == a)
	   {
		   sum++;
	   }

   }
   printf("%d", sum);
   */
#pragma endregion

#pragma region 백배열2
   /*
    int arr[10000];
	int n, x;
	int i = 0;
	int sum = 0;
	scanf("%d %d", &n, &x);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (arr[i] < x)
		{
	       printf("%d ", arr[i]);
			
		}
	}
   */
#pragma endregion

#pragma region 백배열3
    /*
   int arr[9];
   int i = 0;
   int n = 0;
   
   
   for (i = 0; i < 9; i++)
   {
	   scanf("%d", &arr[i]);
   }
   int max = arr[0];
   int place = 0;
   for (i = 0; i < 9; i++)
   {

	   if (max < arr[i])
	   {

		   max = arr[i];
		   place = i;
	   }
   }
   printf("%d %d", max, place+1);
   */
#pragma endregion

#pragma region 백배열4
    /*
    int n;
	scanf("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL)
	{
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = -1000001;
	int min = 1000000;

	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("%d  %d", min, max);
	free(arr);
	*/
#pragma endregion

#pragma region 도전 1
   /*
   int n;
   scanf("%d", &n);
   printf("%#x", n);   // 8진수 %o, 16진수 %x 2진수는 따로 함수를 구현해야함
   */
#pragma endregion

#pragma region 도전 2
    /*
    int n, x;
	scanf("%d %d", &n, &x);
	
	int max, min;
	if (n > x)
	{
		max = n;
		min = x;
	}
	else
	{
		max = x;
		min = n;
	}
	for (int i = min; i <= max; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	*/


#pragma endregion

#pragma region 도전 3
    /*
    int n, x;
	int temp = 0;
	int max, min;
	int gcd;
	scanf("%d %d", &n, &x);

	max = (n > x) ? n : x;
	min = (x > n) ? x : n;

	while (x != 0)
	{
		temp = x;
		x = n % x;
		n = temp;
	}
	gcd = n;
	printf("%d", gcd);
	*/

   
#pragma endregion

#pragma region 도전 4
   /*
   int money = 3500;
   int cream = 500;
   int shrimp = 700;
   int coke = 400;

   int maxcream = money / cream;
   int maxshrimp = money / shrimp;
   int maxcoke = money / coke;

   for (int i = 1; i <= maxcream; i++)
	   for (int j = 1; j <= maxshrimp; j++)
		   for (int k = 1; k <= maxcoke; k++)
			   if (i * cream + j * shrimp + k * coke == money)
				   printf("크림방 %d개 새우깡 %d개 콜라 %d개\n", i, j, k);
   */

#pragma endregion

#pragma region 도전 5
   /*
    int n,count=0,a;

	int i = 0;
	for (n = 2; count <= 10; n++)
	{
		for (i = 2; i <= n; i++)
		{
			if (i == n)
			{
				printf("%d\n", n);
				count++;
			}
			if (n % i == 0)
				break;
		}
	}
    */

#pragma endregion

#pragma region 도전 6
   /*
    int h, m, s, input;
	scanf("%d", &input);
	h = input / 3600;
	m = (input % 3600) / 60;
	s = (input % 3600) % 60;
	printf("%d 시 %d 분 %d 초\n", h, s, m);
	*/

#pragma endregion

#pragma region 도전 7
    /*
    int n;
	int a=1;
	int b = 0;
	scanf("%d", &n);
	
	while (a * 2 <= n)
	{
		a *= 2;
		b++;
	}
	printf("%d", b);
	*/
   
#pragma endregion

#pragma region 도전 8
   /*
    int n;
	long long result;
	scanf("%d", &n);
	result = square1(n);
	printf("%lld", result);
	*/


#pragma endregion

#pragma region 배열
   /*
   int arr[5];
   int i = 0;
   int max, min, sum;
   for (i = 0; i < 5; i++)
   {
	   scanf("%d", &arr[i]);
   }
   max = min = arr[0];
   sum = 0;
   for (i = 0; i < 5; i++)
   {
	   if (max < arr[i])
	   {
		   max = arr[i];
	   }
	   if (min > arr[i])
	   {
		   min = arr[i];
	   }
	   sum += arr[i];
   }
   printf("%d %d %d", max, min, sum);
   */
#pragma endregion

#pragma region 문자열
    /*
    char arr[] = { 'G','o','o','d',' ','t','i','m','e' };

	int len = sizeof(arr) / sizeof(char);

	for (int i = 0; i < len; i++)
	{
		printf("%c", arr[i]);
	}
	*/

#pragma endregion

#pragma region 문자열 1
  /*
   char arr[100];
   int n = 0;
   scanf("%s", arr);

   while (arr[n] != 0)
   {
	   n++;
   }
   printf("%d", n);
 */
#pragma endregion

#pragma region 문자열 2
  /*
  char arr[100];
  int n;
  char temp = 0;
  scanf("%s", &arr);
  while (arr[n] != 0)
  {
	  n++;
  }
  for (int i = 0; i < n/2; i++)
  {
	  temp = arr[i];
	  arr[i] = arr[(n - i) - 1];
	  arr[(n - i) - 1] = temp;
	  
  }
  printf("%s", arr);
  */
 
#pragma endregion

#pragma region 문자열 3
  /*
  char arr[100];
  int n=0;
  int max = 0;
  scanf("%s", arr);
  while (arr[n] != 0)
  {
	  n++;
  }
  for (int i = 0; i < n; i++)
  {
	  if (max < arr[i])
	  {
		  max = arr[i];
	  }
  }
  printf("%c %d", max,max);
   */

   
#pragma endregion

#pragma region 백배열
   /*
   int arr[100];
   int n;
   int i;
   int x = 0;
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
	   scanf("%d", &arr[i]);
   }
   scanf("%d", &x);
   int sum = 0;
   for (i = 0; i < n; i++)
   {
	   if (arr[i] == x)
	   {
		   sum++;
	   }
   }
   printf("%d", sum);
    */
#pragma endregion

#pragma region 백배열1
  /*
   int arr[10000];
   int a, x;
   int i = 0;
   scanf("%d %d", &a, &x);
   for (i = 0; i < a; i++)
   {
	   scanf("%d", &arr[i]);
   }
   for (i = 0; i < a; i++)
   {
	   if (arr[i] < x)
	   {
		   printf("%d ", arr[i]);
	   }
   }
   */


#pragma endregion

#pragma region 백배열2
    
    /*
    int n;
	scanf("%d", &n);

	int* arr = (int*)malloc(n* sizeof(int));
	if (arr == NULL)
	{
		return 1;
	}
	for (int i = 0; i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = -1000001;
	int min = 1000001;

	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	printf("%d %d ", min, max);
	*/
#pragma endregion

#pragma region 백배열3
    /*
    int arr[9];
	int i;
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	int place = 0;
	for (i = 0; i < 9; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			place = i;
		}
	}
	printf("%d %d ", max, place+1);
	*/
#pragma endregion


return 0;
}