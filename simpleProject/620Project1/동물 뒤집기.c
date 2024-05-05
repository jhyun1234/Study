#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

// 10마리의 서로 다른 동물 (각 카드 2장씩)
// 사용자로부터 2개의 입력값을 받아서 -> 같은 동물을 찾으면 카드 뒤집은 상태로 두기 틀리면 다시 뒤집기
// 모든 동물 쌍을 찾으면 게임 종효
// 총 실패 횟수 알려주기

int arrayAnimal[4][5]; // 카드 지도 20장
char* strAnimal[10];
int checkAnimal[4][5]; // 뒤집혔는지 여부 확인
void initAnimalArrary()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName()
{
	strAnimal[0] = "개";
	strAnimal[1] = "고양이";
	strAnimal[2] = "돼지";
	strAnimal[3] = "하마";
	strAnimal[4] = "호랑이";

	strAnimal[5] = "사자";
	strAnimal[6] = "코끼리";
	strAnimal[7] = "원숭이";
	strAnimal[8] = "토끼";
	strAnimal[9] = "양";
	
}

void shuffleAnimal()
{
	// ㅁㅁㅁㅁㅁ
	// ㅁㅁㅁㅁㅁ
	// ㅁㅁㅁㅁㅁ
	// ㅁㅁㅁㅁㅁ
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}
// 좌표에서 빈 공간 찾기
int getEmptyPosition()
{
	// ㅁㅁㅁㅁㅁ  0  1  2  3  4 -> 0 0 0 0 0     5들로 나눈값
	// ㅁㅁㅁㅁㅁ  5  6  7  8  9 -> 1 1 1 1 1
	// ㅁㅁㅁㅁㅁ  10 11 12 13 14 ->2 2 2 2 2 
	// ㅁㅁㅁㅁㅁ  15 16 17 18 19 ->3 3 3 3 3 
	while (1)
	{
		int randPos = rand() % 20; // 0~19 사이의 숫자 반환
		// ex) 19 (3,5)
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1)
		{
			return randPos;
		}
	}

	return 0;

}
int conv_pos_x(int x)
{
	// 19-> (3,4)

	return  x / 5;
}
int conv_pos_y(int y)
{
	// 19 -> 19/5 몫 3 나머지 4
	return y % 5; // y를 5로 나눈 나머지 값 
}
void printAnimals() // 동물 위치 출력
{
	// ㅁㅁㅁㅁㅁ  1  1  2  2  3  
	// ㅁㅁㅁㅁㅁ  3  4  4  5  5 
	// ㅁㅁㅁㅁㅁ  
	// ㅁㅁㅁㅁㅁ  
	printf("\n======하... 비밀입니다. 아 시 겠 어 요?=====\n\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n============================================\n\n");

}
void printQuestion() // 문제 출력 카드 지도
{
	printf("\n\n(문제)\n");
	int seq = 0; // 카드르 뒤집어 주는 변수                 // checkAnimal
	// ㅁㅁㅁㅁㅁ  0  1  2  3  4                              0 0 0 0 0
	// ㅁㅁㅁㅁㅁ  5  6  7  8  9                              1 0 0 0 0
	// ㅁㅁㅁㅁㅁ  10 11 12 13 14                             0 0 0 1 0
	// ㅁㅁㅁㅁㅁ  15 16 17 18 19                             0 0 0 0 0
	for (int i = 0; i < 4; i++)
	{
		for(int j=0; j<5; j++)
		{
			// 카드를 뒤집어서 정답을 맞췄으면 '동물 이름'
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			// 아직 뒤집지 못했으면 (정답을 못맞췄으면) 뒷면 -> 위치를 나타내는 숫자
			else
			{
				printf("%8d", seq);
			}
			seq++;
	    }
		printf("\n");
	}
}
int foundAllAnimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] == 0)
			{
				return 0;
			}
		}
	}
	return 1; // 모두 다 찾음

}

int Animal_main()
{

	srand(time(NULL));

	initAnimalArrary();
	initAnimalName();

	shuffleAnimal();
    

	int failCount = 0; // 실패 횟수

	while (1)
	{
		int select1 = 0; // 사용자가 선택한 처음 수
		int select2 = 0; // 사용자가 선택한 두번째 수

		printAnimals(); // 동물 위치 출력
		printQuestion(); // 문제 출력 (카드지도)
		printf("뒤집을 카드를 2개 고르세요 : ");
		scanf("%d %d", &select1, &select2);

		if (select1 == select2) // 같은 카드 선택시 무효
			continue;
		// 좌표에 해당하는 카드를 뒤집어 보고 같은지 안같은지 확인

		int FirstSelect_x = conv_pos_x(select1);
		int FirstSelect_y = conv_pos_y(select1);

		int SecondSelect_x = conv_pos_x(select2);
		int SecondSelect_y = conv_pos_y(select2);

		if ((checkAnimal[FirstSelect_x][FirstSelect_y] == 0 &&  //카드가 뒤집히지 않았는지 && 두 동물이 같은지  같은 동물인 경우
			checkAnimal[SecondSelect_x][SecondSelect_y] == 0)
			&&

			(arrayAnimal[FirstSelect_x][FirstSelect_y] == arrayAnimal[SecondSelect_x][SecondSelect_y])
			) //두 동물이 같은지  같은 동물인 경우 
		{
			printf("\n\n 빙고! :%s 발견 \n\n", strAnimal[arrayAnimal[FirstSelect_x][FirstSelect_y]]);
			checkAnimal[FirstSelect_x][FirstSelect_y] = 1; // 다음에 조회 할 때는 이미 선택된 카드이기 때문에 조회할 필요가 없음
			checkAnimal[SecondSelect_x][SecondSelect_y] = 1;
		}
		else //다른 동물인 경우
		{
			printf("\n\n 땡!! (틀렸거나, 이미 뒤집힌 카드입니다.)\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[FirstSelect_x][FirstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[SecondSelect_x][SecondSelect_y]]);
			printf("\n\n");

			failCount++;
		}
		// 모든 동물을 찾았을시 참 :1  거짓 :0
		if (foundAllAnimals() == 1)
		{
			printf("\n\n 축하합니다! 모든 동물을 다 찾았습니다. \n");
			printf("지금까지 총 %d 번 틀렸습니다.", failCount);
			break;
		}
	}

	return 0;
}