#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
// ����Ⱑ 6���� �ִ�.
// ������ ���׿� ��� �ִµ�, ���� �縷�̴�.
// �縷�� �ʹ� ���� �����ؼ� ���� ���� ���� �����Ѵ�.
// ���� �� �����ϱ� ���� �������� ���׿� ���� �༭ ����⸦ �������Ѵ�.
// ������ �ð��� �������� ���� Ŀ���� ���߿��� �츶��!�� �丮��ᰡ �ȴ�.

int level;
int arrayFish[6];
int* cursor;
void printfFishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d�� \n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf("  %3d ", arrayFish[i]);
	}
	printf("\n\n");
}
void initData()
{
	level = 1; //���� ���� (1~5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // ������ �� ����(0~100)
	}
}
void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level*3*(int)elapsedTime); // ������ ���� �ְ��� �����ٽ� ���� �ٶ� 10�ʰ� �������� ���� ���� 
		                                            // 3 : ���̵� ������ ���� ��
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}
int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1; // ��
	}
	return 0;
}
int FishGame_main()
{

	long startTime = 0; // ���� ���� �ð�
	long totalElapesdTime = 0; // �� ��� �ð�
	long prevElapsedTime = 0; // ���� ��� �ð�(�ֱٿ� ���� �� �ð� ����)
   
	int num; // �� �� ���׿� ���� �� ������ ,����� �Է�
	initData();

	cursor = arrayFish; // cursor[0] ... cursor[1]


	startTime = clock(); // ���� �ð��� millisecond(1000���� 1�ʷ�) ������ ��ȯ

	while (1)
	{

		printfFishes();
		printf("�� �� ���׿� ���� �ֽðھ��?");
		scanf("%d", &num);
		
		// �Է°� üũ
		if (num < 1 || num>6)
		{
			printf("\n�Է°��� �߸��Ǿ����ϴ�.\n");
			continue;
		}
		// �� ��� �ð�
		totalElapesdTime = (clock() - startTime) / CLOCKS_PER_SEC; // ����ð� - ��ŸƮ �ð� / 6000ms�� ������ 
		                                                          // 6�ʷ� �����Բ� ����� �ش�.

		printf("�� ��� �ð� : %ld ��\n", totalElapesdTime);

		// ���� �� �� �ð� (���������� �� �� �ð�) ���ķ� �帥 �ð� -> 10�ʵڿ� ���� ��ٸ� 10�ʵ��� �� ���̸� ������ϱ⶧��
		prevElapsedTime = totalElapesdTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld ��\n", prevElapsedTime);


		// ������ ���� ���� (����)

		decreaseWater(prevElapsedTime);

		// ����ڰ� �Է��� ���׿� ���� �ش�
		// 1. ������ ���� 0�̸�? ���� ���� �ʴ´�. -> �̹� ����Ⱑ ����
		if (cursor[num - 1] <= 0)
		{
			printf("%d �� ������ �̹� �׾����ϴ�. ���� ���� �ʽ��ϴ�.\n", num);
		}
		// 2. ������ ���� 0�� �ƴ� ���? ���� �ش� ! 100�� ���� �ʴ��� üũ
		  // ���� ������ �� +1 <=100 ���� �ְ� �ƴϸ� ���� ���� �ʴ´�.
		else if (cursor[num - 1] + 1 <= 100)
		{
			// ���� �ش�.
			printf("%d �� ���׿� ���� �ݴϴ�.\n\n", num);
			cursor[num - 1] += 1; // cursor[num - 1]=cursor[num - 1]+1
		}

		// �������� �� ���� Ȯ�� (�������� 20�ʸ��� �ѹ��� ����)

		if (totalElapesdTime / 20 > level - 1) 
		{
			// ������
			level++; // level : 1-> level : 2 -> level :3
			printf("*** �� ������ ! ���� %d �������� %d ������ ���׷��̵� ***\n\n", level - 1, level);
			
			// ���� ���� :5
			if (level == 5)
			{
				printf("\n\n �����մϴ�, �ְ� ������ �޼��Ͽ����ϴ�. ������ �����մϴ�.");
				exit(0);
			}
		}

		// ��� ����Ⱑ �׾����� Ȯ��
		if (checkFishAlive() == 0)
		{
			printf("��� ����Ⱑ �׾����ϴ�....\n");
			exit(0);
		}
		else
		{
			printf("����Ⱑ ���� ��� �־��!.\n");
		}
		prevElapsedTime = totalElapesdTime;

		// ���� 10 ��-> 15�� (5�� :prevElapsedTime->15��
		// 1) -> 25�ʿ� ���� �ָ� (10��..?) 15�� ��� ���� ������ ���� ���� ����
	}



	return 0;
}