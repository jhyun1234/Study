#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct GameInfo
{
	char* name;
	int year;
	int price;
	char* company;
};


int main()
{

	// [���� ���]
	// �̸� : WOw
	// �߸ų⵵ : 2024��
	// ���� : 100��
	// ���ۻ� : cjh

	char* name = "Wow";
	int year = 2024;
	int price = 100;
	char* company = "cjh";
	// [�ٸ����� ���]
	// �̸� : WOw2
	// �߸ų⵵ : 2024��
	// ���� : 150��
	// ���ۻ� : cjh2

	char* name2 = "Wow2";
	int year2 = 2024;
	int price2 = 150;
	char* company2 = "cjh2";

	// ����ü ���
	struct GameInfo gameInfo1;
	gameInfo1.name = "Wow";
	gameInfo1.year = 2024;
	gameInfo1.price = 100;
	gameInfo1.company = "cjh";

	// ����ü ���
	printf("-- ���� ��� ���� --\n");
	printf("-- ���Ӹ�    :%s\n",gameInfo1.name);
	printf("-- �߸ų⵵  :%d\n",gameInfo1.year);
	printf("-- ����      :%d\n",gameInfo1.price);
	printf("-- ���ۻ�    :%s\n",gameInfo1.company);

	// ����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameInfo2 = { "Wow2",2024,150,"cjh2" };
	printf("-- �Ǵٸ� ���� ��� ���� --\n");
	printf("-- ���Ӹ�    :%s\n", gameInfo2.name);
	printf("-- �߸ų⵵  :%d\n", gameInfo2.year);
	printf("-- ����      :%d\n", gameInfo2.price);
	printf("-- ���ۻ�    :%s\n", gameInfo2.company);

	// ����ü �迭
	struct GameInfo gameArray[2] = {
	{ "Wow",2024,100,"cjh" },
	{ "Wow2",2024,150,"cjh2" } 
	};

	// ����ü ������
	struct GameInfo* gamePtr; // �̼Ǹ�
	gamePtr = &gameInfo1;
	printf("-- \n\n�̼Ǹ��� ���� ��� ���� --\n");
	/*printf("-- ���Ӹ�    :%s\n", (*gamePtr).name);
	printf("-- �߸ų⵵  :%d\n", (*gamePtr).year);
	printf("-- ����      :%d\n", (*gamePtr).price);
	printf("-- ���ۻ�    :%s\n", (*gamePtr).company);*/

	printf("-- ���Ӹ�    :%s\n", gamePtr->name);
	printf("-- �߸ų⵵  :%d\n", gamePtr->year);
	printf("-- ����      :%d\n", gamePtr->price);
	printf("-- ���ۻ�    :%s\n", gamePtr->company); 

	return 0;
}