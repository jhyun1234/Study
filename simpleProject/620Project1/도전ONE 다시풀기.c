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

#pragma region  ���� 1


	//int a;
	//scanf("%d", &a);
	//printf("%#x", a);

#pragma endregion

#pragma region ���� 2
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

#pragma region ���� 3

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

#pragma region ���� 4
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
					printf("ũ���� %d ��,�ݶ� %d ��,����� %d ��\n", j, i, k);
				}
			}
		}
	}
	*/

#pragma endregion

#pragma region ���� 5
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

#pragma region ���� 6
    /*
    int h, m, s, input;

	scanf("%d", &input);

	h = input /(3600); // �ð� = ��/3600
	m = (input%3600)/ 60; // �� = (��%3600)/ 60
	s = (input % 3600)%60; // �� = (��%3600) % 60
	printf("%d�� %d�� %d�� \n", h, m, s);
	*/

#pragma endregion

#pragma region ���� 7
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

#pragma region ���� 8
   /*
   int n;
   long long result;
   scanf("%d", &n);
   result = square(n);
   printf("%lld", result);
   */
#pragma endregion

#pragma region �迭
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

#pragma region ���ڿ� �迭1
    /*
	char arr[] = { 'G','o','o','d',' ','t','i','m','e' };
	int len = sizeof(arr) / sizeof(char);

	for (int i = 0; i < len; i++)
	{
		printf("%c", arr[i]);
	}
	*/


#pragma endregion

#pragma region ���ڿ� �迭2
   /*
   char arr[100];
   int n = 0;
   scanf("%s", &arr);

   while (arr[n] != 0)
	   n++;
   printf("%d", n);
   */

#pragma endregion

#pragma region ���ڿ� �迭3
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

#pragma region ���ڿ� �迭4
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

#pragma region ��迭
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

#pragma region ��迭2
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

#pragma region ��迭3
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

#pragma region ��迭4
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

#pragma region ���� 1
   /*
   int n;
   scanf("%d", &n);
   printf("%#x", n);   // 8���� %o, 16���� %x 2������ ���� �Լ��� �����ؾ���
   */
#pragma endregion

#pragma region ���� 2
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

#pragma region ���� 3
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

#pragma region ���� 4
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
				   printf("ũ���� %d�� ����� %d�� �ݶ� %d��\n", i, j, k);
   */

#pragma endregion

#pragma region ���� 5
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

#pragma region ���� 6
   /*
    int h, m, s, input;
	scanf("%d", &input);
	h = input / 3600;
	m = (input % 3600) / 60;
	s = (input % 3600) % 60;
	printf("%d �� %d �� %d ��\n", h, s, m);
	*/

#pragma endregion

#pragma region ���� 7
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

#pragma region ���� 8
   /*
    int n;
	long long result;
	scanf("%d", &n);
	result = square1(n);
	printf("%lld", result);
	*/


#pragma endregion

#pragma region �迭
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

#pragma region ���ڿ�
    /*
    char arr[] = { 'G','o','o','d',' ','t','i','m','e' };

	int len = sizeof(arr) / sizeof(char);

	for (int i = 0; i < len; i++)
	{
		printf("%c", arr[i]);
	}
	*/

#pragma endregion

#pragma region ���ڿ� 1
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

#pragma region ���ڿ� 2
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

#pragma region ���ڿ� 3
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

#pragma region ��迭
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

#pragma region ��迭1
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

#pragma region ��迭2
    
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

#pragma region ��迭3
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

#pragma region ���� 1
   /*
   int n;
   scanf("%d", &n);
   printf("%o,%x,%d", n, n, n);
   */


#pragma endregion

#pragma region ���� 2
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

#pragma region ���� 3
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

#pragma region ���� 4
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
				   printf("ũ���� %d ��,����� %d ��,�ݶ� %d ��\n", i, j, k);
			   }
		   }
	   }
   }
   */
#pragma endregion

#pragma region ���� 5
  /*
   int n; // �Ҽ��� ����� ����
   int i; // �Ҽ��� �Ǻ��ϴ� ����
   int count=0; // �Ҽ��� ������ ���� ����
   for (n = 2; count <= 10; n++) // n�� �Ҽ��� ã�������� 1�� ����
   {
	   for (i= 2; i <= n; i++) 
	   {
		   if (i == n) // n�� i�� �������� ��찡 �ڱ� �ڽ��� ���� �߻�
		   {
		      printf("%d\n", n);
		      count++;
		   }
	       if (n % i == 0) // n�� �Ҽ��� �ƴ϶�°�
		       break;
	   }
   }
   */

#pragma endregion

#pragma region ���� 6
    /*
    int h, m, s, n;
	scanf("%d", &n);

	h = n / 3600;
	m = (n / 3600) / 60;
	s = (n / 3600) % 60;
	printf("%d �� %d �� %d ��", h, m, s);
	*/


#pragma endregion

#pragma region ���� 7
  /*
   int n,x=2;   // n�� ������ �Է¹��� ���� ,x=2 2�� k��
   int k=1;  // 2�� k��    
   scanf("%d", &n);

   while (x * 2 <= n)
   {
	   k++;
	   x*=2;
	   
   }
   printf("%d", k);
   */
  
#pragma endregion

#pragma region ���� 8
   /*
   int n;
   long long result;
   scanf("%d", &n);
   result = square2(n);
   printf("%lld", result);
   */


#pragma endregion

#pragma region �迭
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

#pragma region ���ڿ� �迭
  /*
  char arr[] = { 'a','p','p','l','e','\0'};
  int len = sizeof(arr) / sizeof(char);

  for (int i = 0; i < len; i++)
  {
	  printf("%c", arr[i]); // ���ڿ��� ��Ҹ� ����Ҷ��� %c ,arr[i]�� ����Ѵ�.
	                        // ���ڿ��� ����Ҷ��� %s,arr �� ����Ѵ�.
  }
  */

#pragma endregion

#pragma region ���ڿ� �迭 1
  /*
  char arr[100];
  int n=0;
  scanf("%s", arr); // �迭�̹Ƿ� &�����ڸ� ��������ʾƵ� �ȴ�.
  while (arr[n] != 0)
  {
	  n++;
  }
  printf("%d", n);
   */


#pragma endregion

#pragma region ���ڿ� �迭 2
  /*
  char arr[100];
  scanf("%s", arr); // ���ڿ��� �迭�� ����
  int n = 0;  // ���ڿ��� ���̸� ������ ����
  int i, temp; // for���� ���������� ����, ���ڿ��� �ӽ÷� ������ ����
  while (arr[n] != 0) // ���ڿ��� ���̸� �˾Ƴ���. \0�� ���������� �ݺ�
	  n++;   
  for (i = 0; i < n / 2; i++) // �ܾ �����°� ���ڿ��� �߰������� �ϸ� �Ǳ⶧���� n/2�� �Ѵ�.
  {
	  temp = arr[i]; // �ӽ÷� ���ڸ� ����  
	  arr[i] = arr[(n - i) - 1]; // ù ���ڿ� �����ڸ� ��ȯ�Ѵ�. n=5�϶� arr[0]=arr[(5-0)-1] 0��°�ε����� 4��° �ε����� ��ȯ�Ѵ�. 
	  arr[(n - i) - 1] = temp; // temp�� �����ߴ� ���ڸ� arr[(5-0)-1] ��ġ�� �����Ѵ�.������ ��ġ�� ���� ��ȯ�Ѵ�.
  }
  printf("%s", arr);
  */


#pragma endregion

#pragma region ���ڿ� �迭 3
   /*
   char arr[100];
   int n = 0;
   scanf("%s", arr);
   while (arr[n] != 0)
   {
	   n++;
   }
   int max = 0; // ���ڿ��� �ƽ�Ű �ڵ� �� �� �ִ��� ã�� ���� int max = 0;���� �ʱ�ȭ�� max ������ ����Ѵ�.
   for (int i = 0; i < n; i++)
   {
	   if (max < arr[i])  // max���� arr[i]�� �ƽ�Ű �ڵ尪�� ũ�ٸ�
	   {
		   max = arr[i];  // max�� arr[i]�� �����Ѵ�.
	   }

   }
   printf("%c", max); // ���ڿ��� max���� ���
   */


#pragma endregion

#pragma region ��迭
   /*
   int arr[100];
   int n; //�迭�� �󸶸�ŭ�� ������ �����Ұ����� ���ϴ� ����
   int x=0; // � ������ ã������ ���ϴ� ����
   int z = 0; // ã�� ������ ����� ���ϴ� ����
   int i;
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
	   scanf("%d",&arr[i]);
   }
   scanf("%d", &x); // ���� ������ �Է�
   for (i = 0; i < n; i++)
   {
	   if (x==arr[i]) // ���� ������ arr[i]�� �ִٸ�
	   {
		   z++; // 1�� ���� ��Ų��
	   }
   }
   printf("%d", z); // ���������� ���� ������ ����� ��Ÿ����.
   */

#pragma endregion

#pragma region ��迭 1
  /*
  int arr[100];
  int n, x; // ����� �Է��Ұ������� ����, x���� ���� ���� ���ϴ� ����
  int i;
  int sum = 0; // x������ ���� ������ ����� ����ϴ� ����
  scanf("%d %d", &n, &x);

  for (i = 0; i < n; i++)
  {
	  scanf("%d", &arr[i]);
  }
  for (i = 0; i < n; i++) 
  {
	  if (arr[i] < x) // arr[i]���� x���� ���� ���� ã����
	  {
		  sum++; // sum�� ã�� ������ 1 ���Ѵ�.
		  printf("%d ", arr[i]); // arr[i]���� ���� ����Ѵ�.
	  }
  }
	  printf("%d��", sum); // x������ ���� ������ ����� ���
*/


#pragma endregion

#pragma region ��迭 2

   /*
   int n;
   scanf("%d", &n);
   int* arr = (int*)malloc(n * sizeof(int)); // ������ �޸𸮸� �������� �Ҵ��ϱ� ���� malloc����
   if (arr == NULL) 
   {
	   return 1; // �޸� �Ҵ� ���� �� ���α׷� ����
   }
   for (int i = 0; i < n; i++)
   {
	   scanf("%d", &arr[i]);
   }
   int max = -1000001; // max���� ã�� ���ؼ��� ���� �������� �������� ū���� ������ �� ������ �ʱ�ȭ �����ָ� ��
   int min = 1000001; // min���� ã�� ���ؼ��� ���� ū������ �������� �������� ������ �� ������ �ʱ�ȭ �����ָ� ��

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
   free(arr); // ���� �޸� ����
   */

#pragma endregion

#pragma region ��迭 3
  /*
  int arr[9]; // int�ڷ����� ���̰� 9�� �迭 ����
  int n;
  for (int i = 0; i < 9; i++)
  {
	  scanf("%d", &arr[i]);
  }
  int max = arr[0]; // max���� ã������ �ʱⰪ�� �迭�� ù����� ����
  int place = 0; // max���� ��ġ�� ã������ ����
  for (int i = 0; i < 9; i++)
  {
	  if (max < arr[i]) 
	  {
		  max = arr[i]; // max���� ã���� �ʱ�ȭ 
		  place = i; // �� ��ġ�� for������ i�� ���°�� ���Ҵ��� Ȯ��
	  }
  }
  printf("%d\n%d", max, place+1); // place���� 1�� ���� ������ i�� 0��°���� �����߱� ����
                                  // 1���� ���ڸ� ���� ������ ��¿��� ��ġ�� �����ϱ� ���� 1�� ����
  */

#pragma endregion


   return 0;
}