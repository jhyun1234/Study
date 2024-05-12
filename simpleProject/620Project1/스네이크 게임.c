#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // _kbhit()과 _getch()를 사용하기 위해 필요
#include <windows.h> // Sleep 함수 사용을 위해 필요
#include <string.h>
#include <time.h>

#define WIDTH 20  // 게임판의 너비
#define HEIGHT 20 // 게임판의 높이

int gameover; // 게임종료를 알리는 변수
int x, y, foodX, foodY, score; // 뱀의 위치,음식(점수)의 위치 ,점수
int tailX[100], tailY[100]; // 뱀의 꼬리 위치를 저장하는 배열
int nTail; // 꼬리의 길이
enum eDirection { STOP = 0,LEFT,RIGHT,UP,DOWN }; // 방향을 나타내는 열거형
enum eDirection dir; // 현재 방향을 나타내는 변수

void Setup_tutorial()
{
	gameover = 0; // 게임오버 상태 초기화
	dir = STOP; // 시작 방향 초기화
	x = WIDTH / 2; // 뱀의 위치 초기화
	y = HEIGHT / 2; 
	foodX = rand() % WIDTH; // 음식의 위치 초기화
	foodY = rand() % HEIGHT;
	score = 0; // 점수 초기화

}
void Draw() {
	system("cls"); // 화면 클리어
	for (int i = 0; i < WIDTH-8; i++)
		printf("■"); // 상단 경계 출력
	printf("\n");
	// 게임 화면의 내부와 외부 경계를 그리는 부분
	for (int i = 0; i < HEIGHT; i++) 
	{
		for (int j = 0; j < WIDTH; j++)
			// 각 행의 시작에서 왼쪽 경계를 그린다.
		{
			if (j == 0)
				printf("■");
			// 뱀의 머리 위치에 O 문자를 출력한다.
			if (i == y && j == x)
				printf("O");
			// 음식의 위치에 F 문자를 출력한다.
			else if (i == foodY && j == foodX)
				printf("F");

			else {
				int print = 0;
				// 뱀의 꼬리 부분을 그리는 루프 꼬리의 각 세그먼트 위치에 o 문자를 출력
				for (int k = 0; k < nTail; k++) {
					if (tailX[k] == j && tailY[k] == i) {
						printf("o");
						print = 1;
						break; // 꼬리 세그먼트를 찾으면 더 이상 검색하지 않고 반복을 종료
					}
				}
				// 꼬리나 뱀의 머리 음식이 아닌 경우 빈 공간으로 남겨둔다.
				if (!print)
					printf(" ");
			}
			// 각 행의 끝에서 오른쪽 경계를 그린다.
			if (j == WIDTH - 1)
				printf("■");
		}
		printf("\n");
	}
	// 하단 경계를 그리는 부분 상단을 그린 것과 동일한 방식
	for (int i = 0; i < WIDTH -8; i++)
		printf("■");
	printf("\n");
	// 현재 점수를 화면 하단에 출력한다.
	printf("Score: %d\n", score);
}

void Input_tutorial()
{
	if (_kbhit())
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
		case'x':
			gameover = 1;
			break;
		}
	}
}

void Logic_tutorial()
{
	// 이전 뱀 꼬리 위치 저장
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;
	// 뱀의 머리 위치를 꼬리 배열의 첫 번째 원소로 설정
	tailX[0] = x;
	tailY[0] = y;
	// 뱀의 꼬리 위치 업데이트
	for (int i = 1; i < nTail; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	// 방향에 따라 뱀의 머리 위치 업데이트
	switch (dir)
	{
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	default:
		break;
	}
	if (x >= WIDTH || x < 0 || y >= HEIGHT || y < 0)
	{
		gameover = 1;
	}
	// 뱀이 자기 자신의 꼬리에 부딪히면 게임 오버
	for (int i = 0; i < nTail; i++)
	{
		if (tailX[i] == x && tailY[i] == y)
		{
			gameover = 1;
		}
	}
	// 뱀이 음식을 먹으면 점수 추가 ,음식 위치 재설정 및 꼬리 길이 증가
	if (x == foodX && y == foodY)
	{
		
		score += 10;
		foodX = rand() % WIDTH;
		foodY = rand() % HEIGHT;
		nTail++;
	}
}

int main_tutorial()
{

	
	srand(time(NULL));
	while (!gameover)
	{
        
		Sleep(80);
	}

	return 0;
}