#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

// 10������ ���� �ٸ� ���� (�� ī�� 2�徿)
// ����ڷκ��� 2���� �Է°��� �޾Ƽ� -> ���� ������ ã���� ī�� ������ ���·� �α� Ʋ���� �ٽ� ������
// ��� ���� ���� ã���� ���� ��ȿ
// �� ���� Ƚ�� �˷��ֱ�

int arrayAnimal[4][5]; // ī�� ���� 20��
char* strAnimal[10];
int checkAnimal[4][5]; // ���������� ���� Ȯ��
void initAnimalArrary()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName()
{
	strAnimal[0] = "��";
	strAnimal[1] = "�����";
	strAnimal[2] = "����";
	strAnimal[3] = "�ϸ�";
	strAnimal[4] = "ȣ����";

	strAnimal[5] = "����";
	strAnimal[6] = "�ڳ���";
	strAnimal[7] = "������";
	strAnimal[8] = "�䳢";
	strAnimal[9] = "��";
	
}

void shuffleAnimal()
{
	// ����������
	// ����������
	// ����������
	// ����������
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}
// ��ǥ���� �� ���� ã��
int getEmptyPosition()
{
	// ����������  0  1  2  3  4 -> 0 0 0 0 0     5��� ������
	// ����������  5  6  7  8  9 -> 1 1 1 1 1
	// ����������  10 11 12 13 14 ->2 2 2 2 2 
	// ����������  15 16 17 18 19 ->3 3 3 3 3 
	while (1)
	{
		int randPos = rand() % 20; // 0~19 ������ ���� ��ȯ
		// ex) 19 (3,5)
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1)
		{
			return randPos;
		}
	}

	return 0;

}
int conv_pos_x(int x)
{
	// 19-> (3,4)

	return  x / 5;
}
int conv_pos_y(int y)
{
	// 19 -> 19/5 �� 3 ������ 4
	return y % 5; // y�� 5�� ���� ������ �� 
}
void printAnimals() // ���� ��ġ ���
{
	// ����������  1  1  2  2  3  
	// ����������  3  4  4  5  5 
	// ����������  
	// ����������  
	printf("\n======��... ����Դϴ�. �� �� �� �� ��?=====\n\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n============================================\n\n");

}
void printQuestion() // ���� ��� ī�� ����
{
	printf("\n\n(����)\n");
	int seq = 0; // ī�帣 ������ �ִ� ����                 // checkAnimal
	// ����������  0  1  2  3  4                              0 0 0 0 0
	// ����������  5  6  7  8  9                              1 0 0 0 0
	// ����������  10 11 12 13 14                             0 0 0 1 0
	// ����������  15 16 17 18 19                             0 0 0 0 0
	for (int i = 0; i < 4; i++)
	{
		for(int j=0; j<5; j++)
		{
			// ī�带 ����� ������ �������� '���� �̸�'
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			// ���� ������ �������� (������ ����������) �޸� -> ��ġ�� ��Ÿ���� ����
			else
			{
				printf("%8d", seq);
			}
			seq++;
	    }
		printf("\n");
	}
}
int foundAllAnimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] == 0)
			{
				return 0;
			}
		}
	}
	return 1; // ��� �� ã��

}

int Animal_main()
{

	srand(time(NULL));

	initAnimalArrary();
	initAnimalName();

	shuffleAnimal();
    

	int failCount = 0; // ���� Ƚ��

	while (1)
	{
		int select1 = 0; // ����ڰ� ������ ó�� ��
		int select2 = 0; // ����ڰ� ������ �ι�° ��

		printAnimals(); // ���� ��ġ ���
		printQuestion(); // ���� ��� (ī������)
		printf("������ ī�带 2�� ������ : ");
		scanf("%d %d", &select1, &select2);

		if (select1 == select2) // ���� ī�� ���ý� ��ȿ
			continue;
		// ��ǥ�� �ش��ϴ� ī�带 ������ ���� ������ �Ȱ����� Ȯ��

		int FirstSelect_x = conv_pos_x(select1);
		int FirstSelect_y = conv_pos_y(select1);

		int SecondSelect_x = conv_pos_x(select2);
		int SecondSelect_y = conv_pos_y(select2);

		if ((checkAnimal[FirstSelect_x][FirstSelect_y] == 0 &&  //ī�尡 �������� �ʾҴ��� && �� ������ ������  ���� ������ ���
			checkAnimal[SecondSelect_x][SecondSelect_y] == 0)
			&&

			(arrayAnimal[FirstSelect_x][FirstSelect_y] == arrayAnimal[SecondSelect_x][SecondSelect_y])
			) //�� ������ ������  ���� ������ ��� 
		{
			printf("\n\n ����! :%s �߰� \n\n", strAnimal[arrayAnimal[FirstSelect_x][FirstSelect_y]]);
			checkAnimal[FirstSelect_x][FirstSelect_y] = 1; // ������ ��ȸ �� ���� �̹� ���õ� ī���̱� ������ ��ȸ�� �ʿ䰡 ����
			checkAnimal[SecondSelect_x][SecondSelect_y] = 1;
		}
		else //�ٸ� ������ ���
		{
			printf("\n\n ��!! (Ʋ�Ȱų�, �̹� ������ ī���Դϴ�.)\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[FirstSelect_x][FirstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[SecondSelect_x][SecondSelect_y]]);
			printf("\n\n");

			failCount++;
		}
		// ��� ������ ã������ �� :1  ���� :0
		if (foundAllAnimals() == 1)
		{
			printf("\n\n �����մϴ�! ��� ������ �� ã�ҽ��ϴ�. \n");
			printf("���ݱ��� �� %d �� Ʋ�Ƚ��ϴ�.", failCount);
			break;
		}
	}

	return 0;
}