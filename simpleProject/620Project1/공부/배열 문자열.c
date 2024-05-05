#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region 배열
	//int arr[5];
	//int max, min, sum;
	//for (int i = 0; i < 5; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}
	//
	//max = min = arr[0];
	//sum = 0;
	//
	//for (int i = 0; i < 5; i++)
	//{
	//
	//	sum += arr[i];
	//	if (max < arr[i])
	//		max = arr[i];
	//	if (min > arr[i])
	//		min = arr[i];
	//}
	//
	//printf("총합 %d\n", sum);
	//printf("최댓값 %d\n", max);
	//printf("최솟값 %d\n", min);



#pragma endregion

#pragma region 문자열

	//char arr[] = { 'G','o','o','d',' ','M','o','r','n','i','n','g' };
	//
	//int i;
	//int arren = sizeof(arr) / sizeof(char);
	//for (i = 0; i < arren; i++)
	//{
	//	printf("%c", arr[i]);
	//}
	//printf("\n");

#pragma endregion

#pragma region 베열 짝수,홀수 갯수를 구하는 방법

	//int n;
	//int arr[100];
	//scanf("%d", &n);
	//for (int i = 0; i < n; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}
	//int cnt = 0;
	//int sum = 0;
	//int nnt = 0;
	//int sum1 = 0;
	//for (int i = 0; i < n; i++)
	//{
	//	if (arr[i] % 2 == 0)
	//	{
	//		sum += arr[i];
	//		cnt++;
	//     printf("짝수 %d \n", arr[i]);
	//
	//	}
	//	else
	//	{
	//		sum1 += arr[i];
	//		nnt++;
	//		printf("홀수 %d\n", arr[i]);
	//	}
	//}
	//printf("홀수의 갯수 :%d\n", nnt);
	//printf("홀수들의 합 :%d\n", sum1);
	//printf("짝수의 갯수 :%d\n", cnt);
	//printf("짝수들의 합 :%d\n", sum);

#pragma endregion

#pragma region 문자열 입력과 출력

	//char voca[100];
	//int len = 0;
	//printf("단어 입력");
	//scanf("%s",&voca);
	//
	//while (voca[len] != '\0')
	//	len++;
	//printf("%d", len);


	//char voca[100];
	//int len = 0;
	//int temp = 0;
	//printf("영단어 입력");
	//scanf("%s", &voca);
	//
	//while (voca[len] != '\0')
	//	len++;
	//for (int i = 0; i < len / 2; i++)
	//{
	//	temp = voca[i];
	//	voca[i] = voca[(len - i) - 1];
	//	voca[(len - i) - 1] = temp;
	//}
	//printf("%s", voca);

	  //char voca[100];
	  //int len = 0;
	  //char max = 0;
	  //printf("단어 입력");
	  //scanf("%s", &voca);
	  //char min = voca[0];
	  //while (voca[len] != 0)
		//  len++;
	  //for (int i = 0; i < len; i++)
	  //{
		//  if (max < voca[i])
		//	  max = voca[i];
		//  if (min > voca[i])
		//	  min = voca[i];
		//	  
	  //}
	  //printf("단어중 아스키 코드값이 가장 큰 문자 : %c\n", max);
	  //printf("단어중 아스키 코드값이 가장 큰 문자의 값 : %d\n", max);
	  //printf("단어중 아스키 코드값이 가장 작은 문자 : %c\n", min);
	  //printf("단어중 아스키 코드값이 가장 작은 문자의 값 : %d\n", min);


#pragma endregion

#pragma region 개수 세기

   //int n; // 입력할 갯수를 지정
	//int arr[100]; // 배열의 길이 설정
	//int i = 0;
	//int j = 0;
	//int target = 0; // 어떤 수를 찾을지 지정하는 변수
	//int sum = 0; // target의 수가 몇개 있는지 나타내는 변수
	//scanf("%d", &n);

	//for (int i = 0; i < n; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}

	//scanf("%d", &target);
	//for (int j = 0; j < n; j++)
	//{
	//	if (arr[j] == target)
	//		sum++;
	//}
	///printf("%d", sum);

#pragma endregion

#pragma region X보다 작은 수

	//int N;
	//int X;
	//int A[1000];
	//
	//int i = 0;
	//scanf("%d %d",&N,&X);
	//for (i = 0; i < N; i++)
	//{
	//
	//	scanf("%d", &A[i]);
	//}
	//for (i = 0; i < N; i++)
	//{
	//	if (i < X)
	//	{
	//		printf("%d ", A[i]);
	//	}
	//}   





#pragma endregion


#pragma region 최대,최소
 
    //int n;
	//int i = 0;
	//int* arr;
	//scanf("%d", &n);
	//arr = (int*)malloc(n * sizeof(int));
	//if (arr == NULL) { // 메모리 할당 실패 처리
	//	printf("메모리 할당 실패\n");
	//	return -1;
	//}
	//
	//for (i = 0; i < n; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}
	//
	//int max = arr[0];
	//int min = arr[0];
	//for (i = 1; i < n; i++)
	//{
	//	if (max < arr[i])
	//	{
	//		max = arr[i];
	//	}
	//	if (min > arr[i])
	//	{
	//		min = arr[i];
	//	}
	//
	//}
	//printf("%d %d", min, max);
	//
	//free(arr);


#pragma endregion

#pragma region 최댓값

   
	//int arr[9];
	//int i;
   
	//for (i = 0; i < 9; i++)
	//{
	//   scanf("%d", &arr[i]);
   
	//}
	//
	//int max = arr[0];
	//int place = 0;
	//for (i = 0; i < 9; i++)
	//{
	//	if (max <= arr[i])
	//	{
	//		max = arr[i];
	//		place = i;
	//	}
	//}
	//
	//printf("%d\n", max);
	///printf("%d", place + 1);
	

#pragma endregion

#pragma region 피보나치 수열
     

	int arr[10];
	int i = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i == 0)
			arr[0] = 1;
		else
		{
          int a=0, b=0, sum=0;
	
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

#pragma endregion


#pragma region 코드업

    //char a[2001];
	//gets(a);
	//puts(a);
    
    //int a, b;
	//scanf("%d.%d", &a, &b);
	//printf("%d\n%d", a, b);
     
     //char arr[10];
	 //int i;
	 //scanf("%s", &arr);
	 //
	 //for (i = 0; arr[i]!=0; i++)
	 //{
	//	 
	 //  printf("%c\n", arr[i]);
	 //}

      //int a, b, c, d, e;
	  //scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	  //printf("%d\n", a * 10000);
	  //printf("%d\n", b * 1000);
	  //printf("%d\n", c * 100);
	  //printf("%d\n", d * 10);
	  //printf("%d\n", e * 1);

   

   
#pragma endregion



	return 0;
}