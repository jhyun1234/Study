#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#define STUDENTS 5
#define WORD 26
#define SIZE 5
#define SIZE2 6
#define SIZE3 10
#define SIZE4 10
#define SIZE5 10
int main()
{

#pragma region 성적 입력후 평균
	/*
	int arr[STUDENTS];
	int sum = 0;
	int av;
	for (int i = 0; i < STUDENTS; i++)
	{
		printf("학생 성적 입력");
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < STUDENTS; i++)
	{
		sum += arr[i];
	}
	av = sum / STUDENTS;
	printf("%d", av);
	*/
#pragma endregion

#pragma region 문자 저장 후 출력
	/*
	char arr[WORD];
	for (int i = 0; i < WORD; i++)
	{
		arr[i] = 'a' + i;
	}
	for (int i = 0; i < WORD; i++)
	{
		printf("%c ", arr[i]);
	}
	*/

#pragma endregion

#pragma region 배열의 비교
	/*
	int a[SIZE] = { 1,2,3,4,5, };
	int b[SIZE] = { 1,2,3,4,5, };
	for (int i = 0; i < SIZE; i++)
	{
		if (a[i] != b[i])
		{
			printf("같지않다.");
		}
	}
	printf("같다.");
	*/
#pragma endregion

#pragma region 문자열 복사 출력
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
	/*for (j = a - 1; j < c - 1; j++) // c-1= 13
	{
		con[j] = a2[j-a+1];  //  +1은 NULL문자를 넣어준것

	}

	for (j = 0; j < b-1; j++)
	{
		con[i + j] = a2[j];
	}
	con[i + j] = '\0';

	printf("%s", con);
	*/

#pragma endregion


#pragma region 주사위 던져서 몇번을 나왔는지 확인
	/*
	int dice[SIZE2] = { 0 }; // 6개의 요소를 가짐 모든 요소는 0으로 초기화
	srand(time(NULL)); // 난수 발생
	for (int i = 0; i < 100; i++) // 주사위를 100번 던진다
	{
		int result = rand() % SIZE2; //0부터 SIZE2 -1까지의 난수 생성
		dice[result]++;
	}
	for (int i = 0; i < SIZE2; i++) // 각 면이 나온 횟수를 출력
	{
		printf("%d : %d번\n", i + 1, dice[i]); // 주사위 면의 번호(1~6) ,그 면이 나온 횟수 dice[0]=주사위의 1면 dice[5]=주사위의 6면

	}
	*/
#pragma endregion

#pragma region  최소값 구하기
	/*
	int arr[100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	printf("%d", min);
	*/
	/*
	int price[SIZE3];

	srand((unsigned)time(NULL)); // 예측이 불가능한 난수 생성이 중요할때

	for (int i = 0; i < SIZE3; i++)
	{
		price[i] = (rand() % 100) + 1;
		printf("%-3d", price[i]);
	}
	int min=price[0];
	for (int i = 0; i < SIZE3; i++)
	{
		if (min > price[i])
		{
			min = price[i];
		}
	}
	*/

#pragma endregion

#pragma region 극장 좌석 예약하기
	/*
	int seats[SIZE4] = {0}; // 모든 좌석을 빈 좌석 0 으로 초기화
	char reserve; // 예약을 계속할지 여부를 묻는 변수
	int seatNumber; // 예약하고자 하는 좌석 번호

   do
   {
	   printf("좌석을 예약하시겠습니까? (y or n)");
	   scanf(" %c", &reserve);

	   if (reserve == 'y')
	   {
		   printf("-------------------------\n");
		   for (int i = 1; i <= SIZE4; i++)
		   {
			   printf("%d ", i); // 좌석 번호 출력
		   }
		   printf("\n-----------------------\n");
		   for (int i = 0; i < SIZE4; i++)
		   {
			   printf("%d ", seats[i]); // 좌석 상태 출력
		   }
		   printf("\n 몇 번째 좌석을 예약하시겠습니까?");
		   scanf("%d", &seatNumber);

		   if (seatNumber<1 || seatNumber>SIZE4)
		   {
			   printf("잘못된 좌석번호 입니다.");
			   continue;
		   }
		   if (seats[seatNumber - 1] == 0)
		   {
			   seats[seatNumber - 1] = 1;
			   printf("예약되었습니다.");
		   }
		   else
		   {
			   printf("이미 예약되었습니다.");
		   }
	   }
   } while (reserve == 'y');
 */
#pragma endregion

#pragma region 피보나치 수열

 /*
 int arr[10];
 int i = 0;
 for (int i = 0; i < 10; i++)
 {
	 if (i == 0)
		 arr[0] = 1;
	 else
	 {
		 int a = 0, b = 0, sum = 0;

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
 */





#pragma endregion


#pragma region 버블 정렬

 /*
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


#pragma region 배열에서 특정한 값 탐색하기

 /*
 int key, i = 0;

 int list[SIZE5] = { 1,2,3,4,5,6,7,8,9,10 };
 for (i = 0; i < SIZE5; i++)
 {
	 printf("%d ", list[i]);
 }

 printf("탐색값 입력 :");
 scanf("%d", &key);
 for (i = 0; i < SIZE5; i++)
 {
	 if (list[i] == key)
	 {
		 printf("탐색 성공 인덱스 = %d \n", i);
		 return 0;
	 }

 }
 printf("탐색실패");

 */

#pragma endregion


#pragma region 이차원 배열
 /*
 int i, j = 0;
 int arr[5][5] =
 {
	 {1,2,3,4,5},{6,7,8,9,10},
	 {11,12,13,14,15},{16,17,18,19,20},
	 {21,22,23,24,25}

 };
 for (i = 0; i < 5; i++)
 {
	 for (j = 0; j < 5; j++)
	 {
		 printf("arr[%d][%d]= %d ",i,j,arr[i][j]);
	 }
	 printf("\n");
 }
 */
#pragma endregion


#pragma region 이차원 배열 덧셈
 /*
 int i, j = 0;
 int a[3][3] =
 {
	 {1,2,3},
	 {4,5,6},
	 {7,8,9}
 };
 int b[3][3] =
 {   {10,11,12},
	 {13,14,15},
	 {16,17,18}
 };
 int c[3][3] = { 0 };

 for (i = 0; i < 3; i++)
 {
	 for (j = 0; j < 3; j++)
	 {
		 c[i][j] = a[i][j] + b[i][j];
		 printf("%d ", c[i][j]);
	 }
	 printf("\n");
 }
 */

#pragma endregion

#pragma region 수리해야 하는 타일의 수
 /*
 int x, y; // 사각형의 시작 좌표 입력을 위한 변수
 int fix = 0; // 수리해야 하는 타일의 수를 카운트하는 변수
 int arr[10][10] = { 0, }; // 10 X 10
 for (int i = 0; i < 2; i++)
 {
	 printf("%d번째 사각형", i); // 사용자에게 몇 번째 사각형 좌표를 입력받는지 아내
	 scanf("%d %d", &x, &y); // 시작위치 입력 받음
	 for (int j = x; j < x + 3; j++) // 입력받은 시작 위치를 기준으로 3X3 크기의 사각형 영역을 값을 1로 변경 -> 칠함
	 {
		 for (int k = y; k < y+3; k++)
		 {
			 arr[j][k] = 1; // 해당 영역이 수릭가 필요함을 나타냄
		 }
	 }
 }
 // 수리가 필요한 타일의 총 수를 계산
 for (int i = 0; i < 10; i++) //
 {
	 for (int j = 0; j < 10; j++)
	 {
		 if (arr[i][j] == 1)
		 {
			 fix++; // 수리해야 하는 타일의 수
		 }
	 }
 }
 printf("수리해야 하는 타일의 수=%d\n", fix);
 */

#pragma endregion

#pragma region 틱택톡 게임

	int currentPlayer = 1;
	int x, y = 0;
	int moveCount = 0;
	int end = 0;

	char board[3][3] =
	{
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'}
	};

	while (!end)
	{
		printf("현재 게임판\n");
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				printf(" %c ", board[i][j]);
			}
			printf("\n");
		}

		printf("플레이어 %d 의 차례입니다. 좌표를 입력하세요 :", currentPlayer);
		scanf("%d %d", &x, &y);

		x--; y--; // 배열의 인덱스를 맞추기 위해서 1을 빼준다

		if (x >= 0 && x < 3 && y >= 0 && y < 3 && (board[x][y] != 'X' && board[x][y] != 'O'))
		{
			board[x][y] = (currentPlayer == 1) ? 'X' : 'O';
			
			for (int i = 0; i < 3; i++)
			{
				if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
					(board[0][i] == board[1][i] && board[1][i] == board[2][i]) ||
					(board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
					(board[0][2] == board[1][1] && board[1][1] == board[2][0]))
				{
					printf("플레이어 %d 가 승리했습니다!\n", (currentPlayer == 1) ? 1 : 2);
					end = 1;
					break;
				}

			}
			if (!end && moveCount == 9)
			{
				printf("무승부 입니다.");
				end = 1;
			}
			currentPlayer = (currentPlayer == 1) ? 2 : 1;

		}
		else	
		{
			printf("잘못된 입력입니다.");
			continue;
		}
			moveCount++;

#pragma endregion

	}
		
		return 0;
}

