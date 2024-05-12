#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
#include<conio.h>

#define WIDTH 20   // ���� �ʺ�� ���̸� ����
#define HEIGHT 20

int headx, heady; // ���� �Ӹ���ġ x,y�� ����
int gameover = 0; // gameover ������ 0���� �ʱ�ȭ
int score; // ������ �����ϴ� ����
int starX, starY; // �������� �����Ǵ� ��(����)�� ��ġ�� ����
int TailX[100], TailY[100]; // ������ ���̸� ������ �迭 x,y ����
int Tail; // ���� ���� ���� ����

enum Direction{STOP=0, LEFT,RIGHT,UP,DOWN}; // ���� ���Ⱚ���� ����� ���� STOP=0 ���ʴ�� 0 1 2 3 4
enum Direction dir; // ���� ������ �����ϴµ� ���


void Setup()
{
	gameover = 0;
	dir = STOP; // ���� ������ �ʱ�ȭ �� STOP=0;
	score = 0;
	headx = WIDTH / 2; // ���� �Ӹ� ��ġ�� ������
	heady = HEIGHT / 2;
	starX = rand() % WIDTH; // ��(����)�� ��ġ�� �ʾȿ� �������� ����
	starY = rand() % HEIGHT;
}

void Input()
{
	if (_kbhit()) // Ű �Է��� ����ϴ� ����
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
	system("cls"); // ȭ�� �����
	for (int i = 0; i < WIDTH-8; i++) // ȭ�� ��ܿ� ���� ����ϴ� ����
	{
		printf("��");
	}
	printf("\n");
	for (int i = 0; i < HEIGHT; i++) 
	{
		for (int j = 0; j < WIDTH; j++) // ���� �������� ����ϴ� ����
		{
			if (j == 0)
			{
				printf("��");
			}
			if (i == headx && j == heady) // ���� �Ӹ��� ���
			{
				printf("O");
			}
			else if (i == starX && j == starY) // �������� �����Ǵ� ��(����)���
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
			printf("��");
		}
		printf("\n");
	}

	for (int i = 1; i < WIDTH-8; i++)
	{
		printf("��");
	}
	printf("\n");
	printf("SCORE : %d\n", score);

}

void Logic()
{
	// ���� ���� ���� ��ġ ����
	int savex = TailX[0];
	int savey = TailY[0];
	int save2x, save2y;
	// ���� ���� ��ġ�� ���� �Ӹ� �κп� ����
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