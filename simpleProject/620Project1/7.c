#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#define STUDENTS 5
#define WORD 26
#define SIZE 5
#define SIZE2 6
#define SIZE3 10
#define SIZE4 10

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





#pragma endregion
	return 0;
}

