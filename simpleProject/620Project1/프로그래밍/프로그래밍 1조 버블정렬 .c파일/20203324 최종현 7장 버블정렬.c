#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20  // SIZE로 상수 설정
int main()
{
	int arr[SIZE];
	int i, j,temp;
	srand(time(NULL)); // 랜덤 난수 생성
	printf("난수를 SIZE개만큼 랜덤으로 받습니다.\n\n");
	printf("[");
	for (i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100 + 1; // 0~100 까지의 난수를 받음
		printf("%d ", arr[i]);
  	  
	}
	printf("]");
	printf("\n\n");
	
	for (i = 0; i < SIZE; i++)
	{
		
		for (j = 0; j < SIZE - i-1; j++) // SIZE-i-1 로 설정한 이유는 SIZE-i로 하면 j가 SIZE-1이 되면
			                             // arr[SIZE]에 접근하려는 시도가 있어서 이는 배열의 범위를 벗어난 것이다.
		{
			if (arr[j] > arr[j + 1]) // 버블정렬 과정
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		
		
	}
	/*
	int max = INT_MIN;     // max , min 변수를 지정해서 정하는 방식
	int min = INT_MAX;
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	*/
	printf("정열된 배열 :\n");
	printf("[");
	for (i = 0; i < SIZE; i++)  // 정렬된 배열을 출력
	{
		printf("%d ", arr[i]);
	}
	printf("]");
	printf("\n");

	printf("최대값 : %d ", arr[SIZE-1]); // 정렬된 배열의 최대값은 SIZE에서 -1 를 한 자리의 값이다.
	printf("최소값 : %d ", arr[0]); // 정렬된 배열의 최소값은 언제나 0번째이기 때문이다.
	//printf("최대값 : %d ", max);
	//printf("최소값 : %d ", min);

	return 0;
}