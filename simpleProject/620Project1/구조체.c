#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct GameInfo
{
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; // 연관 업체 게임
};
typedef struct GameInfomation
{
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; // 연관 업체 게임
}GAME_INFO;

int main_Struct()
{

	// [게임 출시]
	// 이름 : WOw
	// 발매년도 : 2024년
	// 가격 : 100원
	// 제작사 : cjh

	char* name = "Wow";
	int year = 2024;
	int price = 100;
	char* company = "cjh";
	// [다른게임 출시]
	// 이름 : WOw2
	// 발매년도 : 2024년
	// 가격 : 150원
	// 제작사 : cjh2

	char* name2 = "Wow2";
	int year2 = 2024;
	int price2 = 150;
	char* company2 = "cjh2";

	// 구조체 사용
	struct GameInfo gameInfo1;
	gameInfo1.name = "Wow";
	gameInfo1.year = 2024;
	gameInfo1.price = 100;
	gameInfo1.company = "cjh";

	// 구조체 출력
	printf("-- 게임 출시 정보 --\n");
	printf("-- 게임명    :%s\n",gameInfo1.name);
	printf("-- 발매년도  :%d\n",gameInfo1.year);
	printf("-- 가격      :%d\n",gameInfo1.price);
	printf("-- 제작사    :%s\n",gameInfo1.company);

	// 구조체를 배열처럼 초기화
	struct GameInfo gameInfo2 = { "Wow2",2024,150,"cjh2" };
	printf("-- 또다른 게임 출시 정보 --\n");
	printf("-- 게임명    :%s\n", gameInfo2.name);
	printf("-- 발매년도  :%d\n", gameInfo2.year);
	printf("-- 가격      :%d\n", gameInfo2.price);
	printf("-- 제작사    :%s\n", gameInfo2.company);

	// 구조체 배열
	struct GameInfo gameArray[2] = {
	{ "Wow",2024,100,"cjh" },
	{ "Wow2",2024,150,"cjh2" } 
	};

	// 구조체 포인터
	struct GameInfo* gamePtr; // 미션맨
	gamePtr = &gameInfo1;
	printf("-- \n\n미션맨의 게임 출시 정보 --\n");
	/*printf("-- 게임명    :%s\n", (*gamePtr).name);
	printf("-- 발매년도  :%d\n", (*gamePtr).year);
	printf("-- 가격      :%d\n", (*gamePtr).price);
	printf("-- 제작사    :%s\n", (*gamePtr).company);*/

	printf("-- 게임명    :%s\n", gamePtr->name);
	printf("-- 발매년도  :%d\n", gamePtr->year);
	printf("-- 가격      :%d\n", gamePtr->price);
	printf("-- 제작사    :%s\n", gamePtr->company); 

	// 연관 업체 게임 소개
	gameInfo1.friendGame = &gameInfo2;

	printf("-- \n\n연관업체의 게임 출시 정보 --\n");
	printf("-- 게임명    :%s\n", gameInfo1.friendGame->name);
	printf("-- 발매년도  :%d\n", gameInfo1.friendGame->year);
	printf("-- 가격      :%d\n", gameInfo1.friendGame->price);
	printf("-- 제작사    :%s\n", gameInfo1.friendGame->company);

	// typedef
	// 자료형에 별명 지정
	int i = 1;
	typedef int 정수;
	typedef float 실수;
	정수 정수변수 = 3; // int i =3;
	실수 실수변수 = 3.23f; // float f =3.23f;
	printf("정수변수 %d 실수변수 %.2f\n\n", 정수변수, 실수변수);

	typedef struct GameInfo 게임정보;
	게임정보 game1;
	game1.name = "한글게임";
	game1.year = 2024;


	GAME_INFO game2;
	game2.name = "한글게임2";
	game2.year = 2024;

	//struct GameInfomation game3;
	//game3.name = "한글게임 3";

	return 0;
}