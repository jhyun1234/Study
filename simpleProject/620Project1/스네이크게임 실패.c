#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // _kbhit()과 _getch()를 사용하기 위해 필요
#include <windows.h> // Sleep 함수 사용을 위해 필요
#include <string.h>
#include <time.h>

#define WIDTH 16
#define HEIGHT 16

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

#define MAX_BODY_LENGTH 20
char maze[WIDTH][HEIGHT];
int body[20];
int x,y,starx, stary,score,gameover;
typedef struct Character
{
    int x, y;
    const char* shape;
    
    char direction;
    int  bodyLength;
    int bodyX[MAX_BODY_LENGTH];
    int bodyY[MAX_BODY_LENGTH];

}Character;

void InitializeCharacter(Character* character)
{
    character->x = 5;
    character->y = 5;
    character->shape = "X";
    character->direction = ' ';
    character->bodyLength = 0;
}
void PlusBody(Character *character)
{
    if (character->bodyLength<MAX_BODY_LENGTH)
    {
        character->bodyX[character->bodyLength] = character->x;
        character->bodyY[character->bodyLength] = character->y;
        character->bodyLength++;
    }

}

void MoveBody(Character* character)
{
    for (int i = character->bodyLength - 1; i > 0;  i--)
    {
        character->bodyX[i] = character->bodyX[i - 1];
        character->bodyY[i] = character->bodyY[i - 1];
    }
    if (character->bodyLength > 0)
    {
        character->bodyX[0] = character->x;
        character->bodyY[0] = character->y;
    }
}
void CheckStar(Character *character)
{
    if (character->x/2 == starx && character->y == stary)
    {
        score += 10;
        PlusBody(character);
        Star(character);
    }
}
void Star(Character* character)
{
    int starx, stary;
    do{
    
        starx = rand() % (WIDTH-2)+1;
        stary = rand() % (HEIGHT-2)+1;
    } while (maze[stary][starx] == '1');
   
}
void Input(Character* character)
{
    
    if (_kbhit()) // 키보드 입력을 확인하는 함수
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
    // x,y 좌표 설정

    COORD position = { x,y };

    // cursor 이동
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

void Renderer(Character *character)
{
    system("cls");
    for (int i = 0; i < WIDTH; i++)
    {
        for (int j = 0; j < HEIGHT; j++)
        {
            int printed = 0;
            for (int k = 0; i < character->bodyLength; k++)
            {
                if (character->bodyX[k] / 2 == j && character->bodyY[k] == i)
                {
                    printf("o");
                    printed = 1;
                    break;
                }
            }
            if (!printed)
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
                   printf("■");
               }
            }

        }
        printf("\n");
    }
}


void CheckCollision(Character* character)
{
    if (maze[character->y][character->x / 2] == '1')
    {
        printf("벽에 충돌하였습니다! 게임을 종료합니다.\n");  
        Sleep(500);
        gameover = 1;
    }
    
}


int main()
{


    printf("스네이크 게임에 오신걸 환영합니다!\n");
    Initialize();
    Character character = { 5,5,"C" };
    Star(&character);
    srand(time(NULL));
    while (!gameover)
    {
        Renderer(&character);
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
        
        printf("점수 : %d\n", score);

    }
    printf("Game Over! 점수 : %d \n", score);



    return 0;
}