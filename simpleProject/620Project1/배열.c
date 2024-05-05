#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define SIZE 10
int main()
{
#pragma region 문자열

	/*
	int arr[20];
	printf("%d\n", sizeof(arr)); // 80
	

	char arr1[] = "Hello World";
	char arr2[] = "Hello";
	char arr3[20];

	int a = 0;

	while (arr2[a] != 0)
	{
		a++;
	}
	printf("%d\n", a);

	for (int i = 0; i < strlen(arr2); i++)
	{
		arr3[i] = arr2[i];
	}
		arr3[strlen(arr2)] = '\0';
		printf("%s\n", arr3);
		*/
#pragma endregion
	

#pragma region 버블정렬

	/*
	// int 배열 크기는 10개 선언 --메모리 확보

	int a[SIZE]; // 지역변수 - 쓰레기 값 -> 초기화를 하지않음

	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = (rand() % 100) + 1;
	}
	printf("[");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	printf("]\n");

	int max = INT_MIN;
	
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (max < a[i])
			max = a[i];

	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("%d\n", max);
	*/
#pragma endregion
	
	
#pragma region 문자열 이어서 출력

	/*
	char a1[] = "Hello";
	char a2[] = " World!";
	char con[20];

	int a = sizeof(a1) / sizeof(char);
	printf("%d\n", a);
	int b = sizeof(a2) / sizeof(char);
	printf("%d\n", b);
	int c = a + b;
	printf("%d\n", c);
	int i = 0;
	int j = 0;
	for (i = 0; i < a-1; i++)
	{
		con[i] = a1[i];
	}
	for (j = a - 1; j < c - 1; j++) // c-1= 13 
	{
		con[j] = a2[j-a+1];  //  +1은 NULL문자를 넣어준것 
		
	}
	
	for (j = 0; j < b-1; j++)
	{
		con[i + j] = a2[j]; 
	}
	con[i + j] = '\0';

	printf("%s", con);
	/*
	
#pragma endregion


#pragma region 이차원배열

	/*
	int arr[3][5] = // 행은 적지않아도 되지만 열을 적지않으면 에러가 뜬다.
	{
		{1,2,3,4,5,},
		{6,7,8,9,10},
		{11,12,13,14,15}

	};
	
	for (int i = 0; i < 3; i++) // 행
	{
		for (int j = 0; j < 5; j++) // 열
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	*/
#pragma endregion

#pragma region 배열


//float arr_f[5] = { 1.0f,2.0f,3.0f };
//	for(int i = 0; i < 5; i++)
//	{
//		printf("%.2f\n", arr_f[i]);
//	}

 // char str[6] = "coding"; // NULL문자가 들어갈 자리가 없어서 오류가 나옴
 /*char str_1[7] = "coding";
 printf("%s\n", str_1);*/
//
//char str[] = "coding";
//printf("%s\n", str);
//printf("%d\n", sizeof(str));
//
//for (int i = 0; i < sizeof(str); i++)
//{
//	printf("%c\n", str[i]);
//}
//
//char kor[] = "최종현";
//printf("%s\n", kor);
//printf("%d\n", sizeof(kor)); 
// 영어 1글자 : 1byte
// 한글 1글자 : 2byte
//
// char c_array[6] = { 'c','o','d','i','n','g'}; -> 오류
//char c_array[7] = { 'c','o','d','i','n','g','\0'};
//printf("%s\n", c_array);
  
  //char c_array[10]= { 'c','o','d','i','n','g'};
  //printf("%s\n", c_array);
  /*for (int i = 0; i < sizeof(c_array); i++)
  {
	  printf("%c\n", c_array[i]);
  }*/
  //for (int i = 0; i < sizeof(c_array); i++)
  //{
	 //printf("%d\n", c_array[i]); // 아스키 코드 값 출력 NUll문자는 0으로 출력
  //}

//   // 문자열 입력받기 
//char name[256];
//printf("이름을 입력하세요 :");
//scanf("%s", name, sizeof(name));
//printf("%s\n", name);
   
    
//printf("%c\n", '0'); 
//printf("%d\n", '0'); // 48
//
//printf("%c\n", '\0'); // 0
//printf("%d\n", '\0'); // 0 

  // 0~127 사이의 아스키코드 정수값에 해당하는 문자 확인
//
//for (int i = 0; i < 128; i++)
//{
//	printf("아스키코드 정수 %d :%c\n",i,i);
//   }

#pragma endregion
    
#pragma region 샴푸 바르기 게임


//srand(time(NULL));
//printf("\n\n === 아빠는 풍성한 머리 게임 === \n\n");
//int answer; // 사용자 입력값
//int shampoo = rand() % 4; // 샴푸 선택 (0-3)
//
//int cntShowBottle = 0; // 이번 게임에 보여줄 병 갯수
//int prevCntShowBottle = 0; // 앞 게임에 보여준 병 갯수
//// 서로 보여주는 병 갯수를 다르게 하여 정답률 향상 (처음에 2개 => 다음엔 3개..)
//
//// 3번의 기회 (3번의 샴푸 선택 시도)
//
//for (int i = 1; i <= 3; i++)
//{
//	int bottle[4] = { 0,0,0,0 }; // 4개의 병
//	do {
//
//		cntShowBottle = rand() % 2 + 2; // 보여줄 병 갯수 (0-1, +2 -> 2,3)
//	} while (cntShowBottle == prevCntShowBottle);
//	prevCntShowBottle = cntShowBottle; // 첫 번째의 값과 비교해서 두번째의 값을 나오게 한다 처음 2이면 다음은 3
//
//	int isIncluded = 0; // 보여줄 병 중에 샴푸가 포함되었는지 여부(1이면 포함)
//	printf("> %d 번째 시도 :", i);
//
//	// 보여줄 병 종류를 선택
//	for (int j = 0; j < cntShowBottle; j++)
//	{
//		int randBottle = rand() % 4; // 0-3
//		// 아직 선택되지 않은 병이면 , 선택 처리
//		if (bottle[randBottle] == 0)
//		{
//			bottle[randBottle] = 1;
//			if (randBottle == shampoo)
//			{
//				isIncluded = 1;
//			}
//		}
//		// 이미 선택된 병이면, 중복이므로 다시 선택
//		else
//		{
//			j--;
//		}
//	}
//
//	// 사용자에게 문제 표시
//	for (int k = 0; k < 4; k++)
//	{
//		if (bottle[k] == 1)
//		{
//			printf("%d ", k + 1);
//		}
//	}
//	printf(" 샴푸를 머리에 바릅니다.\n\n");
//
//	if (isIncluded == 1)
//	{
//		printf(">> 성공\n");
//	}
//	else
//	{
//		printf(">> 실패\n");
//		
//	}
//	printf("\n .... 계속 하려면 아무키나 누르세요 ... ");
//	getchar(); // 키를 입력할때까지 대기상태
//}
//printf("샴푸는 몇번일까요?");
//scanf("%d", &answer);
//
//if (answer == shampoo +1)
//{
//	printf("정답입니다.\n");
//}
//else
//{
//	printf("틀렸습니다. 정답은 %d 입니다.\n", shampoo + 1);
//}
 
#pragma endregion



    
	return 0;
}
