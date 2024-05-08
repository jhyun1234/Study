#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // _kbhit()과 _getch()를 사용하기 위해 필요
#include <windows.h> // Sleep 함수 사용을 위해 필요

#define WIDTH 20
#define HEIGHT 20

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80


void gotoXY(int x,int y)
{
    // x,y 좌표 설정

    COORD position = { x,y };

    // cursor 이동
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);




}


int main() 
{
   
    char key = 0;
    int x = 5, y = 5;

    while (1)
    {
        gotoXY(x, y);

        printf("★");

        if (_kbhit()) // 키보드 입력을 확인하는 함수
        {


            key = _getch();

            if (key == -32)
            {
                key = _getch();
            }
            switch (key)
            {
            case UP:
                if (y <= 0)break;
                
                y--;
                break;

            case LEFT:
                if (x <= 0) break;
                x--;
                break;

            case RIGHT:x++;
                break;

            case DOWN:y++;
                break;
           
            }

        }
        system("cls");
        
    }


    return 0;
}