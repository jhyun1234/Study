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

long long square2(int n)
{
	if (n == 0)
		return 1;
	else
		return 2 * square2(n - 1);
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

#pragma region 도전 1
   /*
   int n;
   scanf("%d", &n);
   printf("%o,%x,%d", n, n, n);
   */


#pragma endregion

#pragma region 도전 2
   /*
   int start, end;
   int n, x;
   scanf("%d %d", &n, &x);
   start = (n > x) ? n : x;
   end = (x > n) ? x : n;

   if (start < n)
   {
	   start = n;
	   end = x;
   }
   else
   {
	   start = x;
	   end = n;
   }
   for (int i = start; i <= end; i++)
   {
	   for (int j = 1; j < 10; j++)
	   {
		   printf("%d * %d =%d\n", i, j, i * j);
	   }
	   printf("\n");
   }
   */
 
#pragma endregion

#pragma region 도전 3
   /*
   int n, x;
   int temp, gcd;
   scanf("%d %d", &n, &x);



   while (x != 0)
   {
	   temp = x;
	   x = n % x;
	   n = temp;
   }
   gcd = n;
   printf("%d", n);
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

   for (int i = 1; i < maxcream; i++)
   {
	   for (int j = 1; j < maxshrimp; j++)
	   {
		   for (int k = 1; k < maxcoke; k++)
		   {
			   if (i * cream + j * shrimp + k * coke == money)
			   {
				   printf("크림빵 %d 개,새우깡 %d 개,콜라 %d 개\n", i, j, k);
			   }
		   }
	   }
   }
   */
#pragma endregion

#pragma region 도전 5
  /*
   int n; // 소수를 출력할 변수
   int i; // 소수를 판별하는 변수
   int count=0; // 소수의 갯수를 세는 변수
   for (n = 2; count <= 10; n++) // n은 소수를 찾을때마다 1씩 증가
   {
	   for (i= 2; i <= n; i++) 
	   {
		   if (i == n) // n이 i로 나누어진 경우가 자기 자신일 때만 발생
		   {
		      printf("%d\n", n);
		      count++;
		   }
	       if (n % i == 0) // n이 소수가 아니라는것
		       break;
	   }
   }
   */

#pragma endregion

#pragma region 도전 6
    /*
    int h, m, s, n;
	scanf("%d", &n);

	h = n / 3600;
	m = (n / 3600) / 60;
	s = (n / 3600) % 60;
	printf("%d 시 %d 분 %d 초", h, m, s);
	*/


#pragma endregion

#pragma region 도전 7
  /*
   int n,x=2;   // n은 정수를 입력받을 변수 ,x=2 2의 k승
   int k=1;  // 2의 k승    
   scanf("%d", &n);

   while (x * 2 <= n)
   {
	   k++;
	   x*=2;
	   
   }
   printf("%d", k);
   */
  
#pragma endregion

#pragma region 도전 8
   /*
   int n;
   long long result;
   scanf("%d", &n);
   result = square2(n);
   printf("%lld", result);
   */


#pragma endregion

#pragma region 배열
  /*
  int arr[5];
  int max, min, sum;
  int n,i;
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

#pragma region 문자열 배열
  /*
  char arr[] = { 'a','p','p','l','e','\0'};
  int len = sizeof(arr) / sizeof(char);

  for (int i = 0; i < len; i++)
  {
	  printf("%c", arr[i]); // 문자열으 요소를 출력할때는 %c ,arr[i]를 써야한다.
	                        // 문자열을 출력할때는 %s,arr 를 써야한다.
  }
  */

#pragma endregion

#pragma region 문자열 배열 1
  /*
  char arr[100];
  int n=0;
  scanf("%s", arr); // 배열이므로 &연산자를 사용하지않아도 된다.
  while (arr[n] != 0)
  {
	  n++;
  }
  printf("%d", n);
   */


#pragma endregion

#pragma region 문자열 배열 2
  /*
  char arr[100];
  scanf("%s", arr); // 문자열을 배열에 저장
  int n = 0;  // 문자열의 길이를 저장할 변수
  int i, temp; // for문을 돌리기위한 변수, 문자열을 임시로 저장할 변수
  while (arr[n] != 0) // 문자열의 길이를 알아낸다. \0를 만날때까지 반복
	  n++;   
  for (i = 0; i < n / 2; i++) // 단어를 뒤집는건 문자열의 중간까지만 하면 되기때문에 n/2를 한다.
  {
	  temp = arr[i]; // 임시로 문자를 저장  
	  arr[i] = arr[(n - i) - 1]; // 첫 문자와 끝문자를 교환한다. n=5일때 arr[0]=arr[(5-0)-1] 0번째인덱스를 4번째 인덱스와 교환한다. 
	  arr[(n - i) - 1] = temp; // temp에 저장했던 문자를 arr[(5-0)-1] 위치에 복사한다.문자의 위치를 서로 교환한다.
  }
  printf("%s", arr);
  */


#pragma endregion

#pragma region 문자열 배열 3
   /*
   char arr[100];
   int n = 0;
   scanf("%s", arr);
   while (arr[n] != 0)
   {
	   n++;
   }
   int max = 0; // 문자열의 아스키 코드 값 중 최댓값을 찾기 위해 int max = 0;으로 초기화된 max 변수를 사용한다.
   for (int i = 0; i < n; i++)
   {
	   if (max < arr[i])  // max보다 arr[i]의 아스키 코드값이 크다면
	   {
		   max = arr[i];  // max는 arr[i]로 갱신한다.
	   }

   }
   printf("%c", max); // 문자열의 max값을 출력
   */


#pragma endregion

#pragma region 백배열
   /*
   int arr[100];
   int n; //배열에 얼마만큼의 정수를 저장할것인지 정하는 변수
   int x=0; // 어떤 정수를 찾을건지 정하는 변수
   int z = 0; // 찾은 정수가 몇개인지 정하는 변수
   int i;
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
	   scanf("%d",&arr[i]);
   }
   scanf("%d", &x); // 정할 정수를 입력
   for (i = 0; i < n; i++)
   {
	   if (x==arr[i]) // 정한 정수가 arr[i]에 있다면
	   {
		   z++; // 1을 증가 시킨다
	   }
   }
   printf("%d", z); // 최종적으로 정한 정수가 몇개인지 나타낸다.
   */

#pragma endregion

#pragma region 백배열 1
  /*
  int arr[100];
  int n, x; // 몇번을 입력할것인지의 변수, x보다 작은 값을 정하는 변수
  int i;
  int sum = 0; // x값보다 작은 정수가 몇개인지 출력하는 변수
  scanf("%d %d", &n, &x);

  for (i = 0; i < n; i++)
  {
	  scanf("%d", &arr[i]);
  }
  for (i = 0; i < n; i++) 
  {
	  if (arr[i] < x) // arr[i]에서 x보다 작은 값을 찾으면
	  {
		  sum++; // sum에 찾은 갯수를 1 더한다.
		  printf("%d ", arr[i]); // arr[i]에서 값을 출력한다.
	  }
  }
	  printf("%d개", sum); // x값보다 작은 정수가 몇개인지 출력
*/


#pragma endregion

#pragma region 백배열 2

   /*
   int n;
   scanf("%d", &n);
   int* arr = (int*)malloc(n * sizeof(int)); // 부족한 메모리를 동적으로 할당하기 위해 malloc선언
   if (arr == NULL) 
   {
	   return 1; // 메모리 할당 실패 시 프로그램 종료
   }
   for (int i = 0; i < n; i++)
   {
	   scanf("%d", &arr[i]);
   }
   int max = -1000001; // max값을 찾기 위해서는 가장 작은값을 시작으로 큰값을 만나면 그 값으로 초기화 시켜주면 됨
   int min = 1000001; // min값을 찾기 위해서는 가장 큰값에서 시작으로 작은값을 만나면 그 값으로 초기화 시켜주면 됨

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
   printf("%d %d", min, max);
   free(arr); // 동적 메모리 해제
   */

#pragma endregion

#pragma region 백배열 3
  /*
  int arr[9]; // int자료형의 길이가 9인 배열 선언
  int n;
  for (int i = 0; i < 9; i++)
  {
	  scanf("%d", &arr[i]);
  }
  int max = arr[0]; // max값을 찾기위해 초기값을 배열의 첫번재로 설정
  int place = 0; // max값의 위치를 찾기위한 변수
  for (int i = 0; i < 9; i++)
  {
	  if (max < arr[i]) 
	  {
		  max = arr[i]; // max값을 찾을시 초기화 
		  place = i; // 그 위치가 for문에서 i가 몇번째에 돌았는지 확인
	  }
  }
  printf("%d\n%d", max, place+1); // place에서 1을 더한 이유는 i가 0번째부터 시작했기 때문
                                  // 1부터 숫자를 세기 때문에 출력에서 위치를 이해하기 쉽게 1을 더함
  */

#pragma endregion


   return 0;
}