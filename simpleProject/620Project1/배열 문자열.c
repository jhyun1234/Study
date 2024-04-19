#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


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

    int n; // 입력할 갯수를 지정
	int arr[100]; // 배열의 길이 설정
	int i = 0;
	int j = 0;
	int target = 0; // 어떤 수를 찾을지 지정하는 변수
	int sum = 0; // target의 수가 몇개 있는지 나타내는 변수
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	scanf("%d", &target);
	for (int j = 0; j < n; j++)
	{
		if (arr[j] == target)
			sum++;
	}
	printf("%d", sum);

#pragma endregion

	return 0;
}