#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
#include<conio.h>

#define WIDTH 20   // 맵의 너비와 높이를 지정
#define HEIGHT 20

int headx, heady; // 뱀의 머리위치 x,y를 저장
int gameover = 0; // gameover 변수를 0으로 초기화
int score; // 점수를 저장하는 변수
int starX, starY; // 랜덤으로 생성되는 별(점수)의 위치를 저장
int TailX[100], TailY[100]; // 꼬리의 길이를 저장할 배열 x,y 지정
int Tail; // 뱀의 꼬리 변수 저장

enum Direction{STOP=0, LEFT,RIGHT,UP,DOWN}; // 뱀의 방향값들을 상수로 지정 STOP=0 차례대로 0 1 2 3 4
enum Direction dir; // 뱀의 방향을 저장하는데 사용


void Setup()
{
	gameover = 0;
	dir = STOP; // 뱀의 방향을 초기화 함 STOP=0;
	score = 0;
	headx = WIDTH / 2; // 뱀의 머리 위치를 지정함
	heady = HEIGHT / 2;
	starX = rand() % WIDTH; // 별(점수)의 위치를 맵안에 랜덤으로 생성
	starY = rand() % HEIGHT;
}

void Input()
{
	if (_kbhit()) // 키 입력을 대기하는 상태
	{
		switch (_getch())
		{
		case'a':
			dir = LEFT;
			break;
		case'w':
			dir = UP;
			break;
		case's':
			dir = DOWN;
			break;
		case'd':
			dir = RIGHT;
			break;
	
		}
	}
  
}

void DrawMap()
{
	system("cls"); // 화면 지우기
	for (int i = 0; i < WIDTH-8; i++) // 화면 상단에 맵을 출력하는 루프
	{
		printf("■");
	}
	printf("\n");
	for (int i = 0; i < HEIGHT; i++) 
	{
		for (int j = 0; j < WIDTH; j++) // 맵의 좌측부터 출력하는 루프
		{
			if (j == 0)
			{
				printf("■");
			}
			if (i == headx && j == heady) // 뱀의 머리를 출력
			{
				printf("O");
			}
			else if (i == starX && j == starY) // 랜덤으로 생성되는 별(점수)출력
			{
				printf("X");
			}
			else
			{
				int temp = 0;
				for (int k = 0; k < Tail; k++)
				{
					if (TailX[k] == i && TailY[k] == j)
					{
						printf("o");
						temp = 1;
					}
				}
				if (temp == 0 && j != WIDTH)
					printf(" ");
			}
			if (j == WIDTH-1)
			printf("■");
		}
		printf("\n");
	}

	for (int i = 1; i < WIDTH-8; i++)
	{
		printf("■");
	}
	printf("\n");
	printf("SCORE : %d\n", score);

}

void Logic()
{
	// 이전 뱀의 꼬리 위치 저장
	int savex = TailX[0];
	int savey = TailY[0];
	int save2x, save2y;
	// 뱀의 꼬리 위치를 뱀의 머리 부분에 저장
	TailX[0] = headx;
	TailY[0] = heady;

	for (int i = 1; i < Tail; i++)
	{
		save2x = TailX[i];
		save2y = TailY[i];
		TailY[i] = savey;
		TailX[i] = savex;
		savex = save2x;
		savey = save2y;
	}

	switch (dir)
	{	
	case LEFT:
		heady--;
		break;
	case UP:
		headx--;
		break;
	case DOWN:
		headx++;
		break;
	case RIGHT:
		heady++;
		break;
	default:
		break;
	}

	if (headx >= WIDTH || heady >= HEIGHT || headx <0 || heady <0)
	{
		gameover = 1;
	}
	for (int i = 0; i < Tail; i++)
	{
		if (headx == TailX[i] && heady == TailY[i])
		{
			gameover = 1;
		}
	}

	if (headx == starX && heady == starY)
	{
		score += 10;
		starX = rand() % WIDTH;
		starY = rand() % HEIGHT;
		Tail++;
	}
	 
}
int main()
{
	srand(time(NULL));
	Setup();
	while (!gameover)
	{
	   DrawMap();
	   Logic();
	   Input();
	   Sleep(80);
	}
	return 0;
}