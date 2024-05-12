#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // _kbhit()�� _getch()�� ����ϱ� ���� �ʿ�
#include <windows.h> // Sleep �Լ� ����� ���� �ʿ�
#include <string.h>
#include <time.h>

#define WIDTH 20  // �������� �ʺ�
#define HEIGHT 20 // �������� ����

int gameover; // �������Ḧ �˸��� ����
int x, y, foodX, foodY, score; // ���� ��ġ,����(����)�� ��ġ ,����
int tailX[100], tailY[100]; // ���� ���� ��ġ�� �����ϴ� �迭
int nTail; // ������ ����
enum eDirection { STOP = 0,LEFT,RIGHT,UP,DOWN }; // ������ ��Ÿ���� ������
enum eDirection dir; // ���� ������ ��Ÿ���� ����

void Setup_tutorial()
{
	gameover = 0; // ���ӿ��� ���� �ʱ�ȭ
	dir = STOP; // ���� ���� �ʱ�ȭ
	x = WIDTH / 2; // ���� ��ġ �ʱ�ȭ
	y = HEIGHT / 2; 
	foodX = rand() % WIDTH; // ������ ��ġ �ʱ�ȭ
	foodY = rand() % HEIGHT;
	score = 0; // ���� �ʱ�ȭ

}
void Draw() {
	system("cls"); // ȭ�� Ŭ����
	for (int i = 0; i < WIDTH-8; i++)
		printf("��"); // ��� ��� ���
	printf("\n");
	// ���� ȭ���� ���ο� �ܺ� ��踦 �׸��� �κ�
	for (int i = 0; i < HEIGHT; i++) 
	{
		for (int j = 0; j < WIDTH; j++)
			// �� ���� ���ۿ��� ���� ��踦 �׸���.
		{
			if (j == 0)
				printf("��");
			// ���� �Ӹ� ��ġ�� O ���ڸ� ����Ѵ�.
			if (i == y && j == x)
				printf("O");
			// ������ ��ġ�� F ���ڸ� ����Ѵ�.
			else if (i == foodY && j == foodX)
				printf("F");

			else {
				int print = 0;
				// ���� ���� �κ��� �׸��� ���� ������ �� ���׸�Ʈ ��ġ�� o ���ڸ� ���
				for (int k = 0; k < nTail; k++) {
					if (tailX[k] == j && tailY[k] == i) {
						printf("o");
						print = 1;
						break; // ���� ���׸�Ʈ�� ã���� �� �̻� �˻����� �ʰ� �ݺ��� ����
					}
				}
				// ������ ���� �Ӹ� ������ �ƴ� ��� �� �������� ���ܵд�.
				if (!print)
					printf(" ");
			}
			// �� ���� ������ ������ ��踦 �׸���.
			if (j == WIDTH - 1)
				printf("��");
		}
		printf("\n");
	}
	// �ϴ� ��踦 �׸��� �κ� ����� �׸� �Ͱ� ������ ���
	for (int i = 0; i < WIDTH -8; i++)
		printf("��");
	printf("\n");
	// ���� ������ ȭ�� �ϴܿ� ����Ѵ�.
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
	// ���� �� ���� ��ġ ����
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;
	// ���� �Ӹ� ��ġ�� ���� �迭�� ù ��° ���ҷ� ����
	tailX[0] = x;
	tailY[0] = y;
	// ���� ���� ��ġ ������Ʈ
	for (int i = 1; i < nTail; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	// ���⿡ ���� ���� �Ӹ� ��ġ ������Ʈ
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
	// ���� �ڱ� �ڽ��� ������ �ε����� ���� ����
	for (int i = 0; i < nTail; i++)
	{
		if (tailX[i] == x && tailY[i] == y)
		{
			gameover = 1;
		}
	}
	// ���� ������ ������ ���� �߰� ,���� ��ġ �缳�� �� ���� ���� ����
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