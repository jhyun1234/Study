#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // _kbhit()�� _getch()�� ����ϱ� ���� �ʿ�
#include <windows.h> // Sleep �Լ� ����� ���� �ʿ�
#include <string.h>
#include <time.h>

#define WIDTH 16
#define HEIGHT 16

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80
char maze[WIDTH][HEIGHT];
int x,y,starx, stary,score,gameover;
typedef struct Character
{
    int x, y;
    const char* shape;
    
    char direction;

}Character;

void Star(Character* character)
{
    srand(time((NULL)));
    do{
    
        starx = rand() % (WIDTH-2)+1;
        stary = rand() % (HEIGHT-2)+1;
    } while (maze[stary][starx] == '1');
   
}
void Input(Character* character)
{
    
    if (_kbhit()) // Ű���� �Է��� Ȯ���ϴ� �Լ�
    {
        char key = _getch();
  
        switch (key)
        {
        case 32:
            break;
        case UP: character->direction = 'w';
            break;
        case LEFT: character->direction = 'a';
            break;
        case RIGHT: character->direction = 'd';
            break;
        case DOWN: character->direction = 's';
            break;
        default:
            break;

        }

    }

}

void gotoXY(int x, int y)
{
    // x,y ��ǥ ����

    COORD position = { x,y };

    // cursor �̵�
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);




}


void Initialize()
{
    strcpy(maze[0], "111111111111111");
    strcpy(maze[1], "100000000000001");
    strcpy(maze[2], "100000000000001");
    strcpy(maze[3], "100000000000001");
    strcpy(maze[4], "100000000000001");
    strcpy(maze[5], "100000000000001");
    strcpy(maze[6], "100000000000001");
    strcpy(maze[7], "100000000000001");
    strcpy(maze[8], "100000000000001");
    strcpy(maze[9], "100000000000001");
    strcpy(maze[10],"100000000000001");
    strcpy(maze[11],"100000000000001");
    strcpy(maze[12],"100000000000001");
    strcpy(maze[13],"100000000000001");
    strcpy(maze[14],"100000000000001");
    strcpy(maze[15],"111111111111111");
   
    


}

void Renderer()
{
    for (int i = 0; i < WIDTH; i++)
    {
        for (int j = 0; j < HEIGHT; j++)
        {
            if (i == stary && j == starx)
            {
                printf("*");
            }
            
            else if (maze[i][j] == '0')
            {
                printf("  ");
            }
            else if (maze[i][j] == '1')
            {
                printf("��");
            }

        }
        printf("\n");
    }
}



void CheckCollision(Character* character)
{
    if (maze[character->y][character->x / 2] == '1')
    {
        printf("���� �浹�Ͽ����ϴ�! ������ �����մϴ�.\n");  
        Sleep(500);
        gameover = 1;
    }
    
}
void CheckStar(Character *character)
{
    if (character->x/2 == starx && character->y == stary)
    {
        score += 10;
        
        Star(character);
    }
}

int main()
{


    printf("������ũ ���ӿ� ���Ű� ȯ���մϴ�!\n");
    Initialize();

    Character character = { 5,5,"C" };
        Star(&character);
    while (!gameover)
    {
        Renderer();
        Input(&character);
        gotoXY(character.x, character.y);
        printf("%s", character.shape);
        switch (character.direction)
        {
        case'w':character.y--; break;
        case'a':character.x-=2; break;
        case's':character.y++; break;
        case'd':character.x+=2; break;
        }
        CheckStar(&character);
        CheckCollision(&character);
        Sleep(80);
        system("cls");
        
        printf("���� : %d\n", score);

    }
    printf("Game Over! ���� : %d \n", score);



    return 0;
}