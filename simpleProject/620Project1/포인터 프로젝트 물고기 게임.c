#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
// 물고기가 6마리 있다.
// 물고기는 어항에 살고 있는데, 밖은 사막이다.
// 사막이 너무 덥고 건조해서 물이 아주 빨리 증발한다.
// 물이 다 증발하기 전에 부지런히 어항에 물을 줘서 물고기를 살려줘야한다.
// 물고기는 시간이 지날수록 점점 커져서 나중에는 우마이!한 요리재료가 된다.

int level;
int arrayFish[6];
int* cursor;
void printfFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번 \n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf("  %3d ", arrayFish[i]);
	}
	printf("\n\n");
}
void initData()
{
	level = 1; //게임 레벨 (1~5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // 어항의 물 높이(0~100)
	}
}
void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level*3*(int)elapsedTime); // 이전에 물을 주고나서 이제다시 물을 줄때 10초가 지났을때 물을 감소 
		                                            // 3 : 난이도 조절을 위한 값
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}
int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1; // 참
	}
	return 0;
}
int FishGame_main()
{

	long startTime = 0; // 게임 시작 시간
	long totalElapesdTime = 0; // 총 경과 시간
	long prevElapsedTime = 0; // 직전 경과 시간(최근에 물을 준 시간 간격)
   
	int num; // 몇 번 어항에 물을 줄 것인지 ,사용자 입력
	initData();

	cursor = arrayFish; // cursor[0] ... cursor[1]


	startTime = clock(); // 현재 시간을 millisecond(1000분의 1초로) 단위로 반환

	while (1)
	{

		printfFishes();
		printf("몇 번 어항에 물을 주시겠어요?");
		scanf("%d", &num);
		
		// 입력값 체크
		if (num < 1 || num>6)
		{
			printf("\n입력값이 잘못되었습니다.\n");
			continue;
		}
		// 총 경과 시간
		totalElapesdTime = (clock() - startTime) / CLOCKS_PER_SEC; // 현재시간 - 스타트 시간 / 6000ms가 나오면 
		                                                          // 6초로 나오게끔 만들어 준다.

		printf("총 경과 시간 : %ld 초\n", totalElapesdTime);

		// 직전 물 준 시간 (마지막으로 물 준 시간) 이후로 흐른 시간 -> 10초뒤에 물을 줬다면 10초동안 물 높이를 낮춰야하기때문
		prevElapsedTime = totalElapesdTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);


		// 어항의 물을 감소 (증발)

		decreaseWater(prevElapsedTime);

		// 사용자가 입력한 어항에 물을 준다
		// 1. 어항의 물이 0이면? 물을 주지 않는다. -> 이미 물고기가 죽음
		if (cursor[num - 1] <= 0)
		{
			printf("%d 번 물고기는 이미 죽었습니다. 물을 주지 않습니다.\n", num);
		}
		// 2. 어항의 물이 0이 아닌 경우? 물을 준다 ! 100을 넘지 않는지 체크
		  // 현재 어항의 물 +1 <=100 물을 주고 아니면 물을 주지 않는다.
		else if (cursor[num - 1] + 1 <= 100)
		{
			// 물을 준다.
			printf("%d 번 어항에 물을 줍니다.\n\n", num);
			cursor[num - 1] += 1; // cursor[num - 1]=cursor[num - 1]+1
		}

		// 레벨업을 할 건지 확인 (레벨업은 20초마다 한번씩 수행)

		if (totalElapesdTime / 20 > level - 1) 
		{
			// 레벨업
			level++; // level : 1-> level : 2 -> level :3
			printf("*** 축 레벨업 ! 기존 %d 레벨에서 %d 레벨로 업그레이드 ***\n\n", level - 1, level);
			
			// 최종 레벨 :5
			if (level == 5)
			{
				printf("\n\n 축하합니다, 최고 레벨을 달성하였습니다. 게임을 종료합니다.");
				exit(0);
			}
		}

		// 모든 물고기가 죽었는지 확인
		if (checkFishAlive() == 0)
		{
			printf("모든 물고기가 죽었습니다....\n");
			exit(0);
		}
		else
		{
			printf("물고기가 아직 살아 있어요!.\n");
		}
		prevElapsedTime = totalElapesdTime;

		// 최초 10 초-> 15초 (5초 :prevElapsedTime->15초
		// 1) -> 25초에 물을 주면 (10초..?) 15초 라는 값을 저장할 곳이 없기 때문
	}



	return 0;
}