#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

// 10原軒税 辞稽 陥献 疑弘 (唖 朝球 2舌梢)
// 紫遂切稽採斗 2鯵税 脊径葵聖 閤焼辞 -> 旭精 疑弘聖 達生檎 朝球 及増精 雌殿稽 砧奄 堂軒檎 陥獣 及増奄
// 乞窮 疑弘 瞬聖 達生檎 惟績 曽反
// 恥 叔鳶 判呪 硝形爽奄

int arrayAnimal[4][5]; // 朝球 走亀 20舌
char* strAnimal[10];
int checkAnimal[4][5]; // 及増縛澗走 食採 溌昔
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
	strAnimal[0] = "鯵";
	strAnimal[1] = "壱丞戚";
	strAnimal[2] = "掬走";
	strAnimal[3] = "馬原";
	strAnimal[4] = "硲櫛戚";

	strAnimal[5] = "紫切";
	strAnimal[6] = "坪晦軒";
	strAnimal[7] = "据周戚";
	strAnimal[8] = "塘晦";
	strAnimal[9] = "丞";
	
}

void shuffleAnimal()
{
	// けけけけけ
	// けけけけけ
	// けけけけけ
	// けけけけけ
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
// 疎妊拭辞 朔 因娃 達奄
int getEmptyPosition()
{
	// けけけけけ  0  1  2  3  4 -> 0 0 0 0 0     5級稽 蟹勧葵
	// けけけけけ  5  6  7  8  9 -> 1 1 1 1 1
	// けけけけけ  10 11 12 13 14 ->2 2 2 2 2 
	// けけけけけ  15 16 17 18 19 ->3 3 3 3 3 
	while (1)
	{
		int randPos = rand() % 20; // 0~19 紫戚税 収切 鋼発
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
	// 19 -> 19/5 交 3 蟹袴走 4
	return y % 5; // y研 5稽 蟹勧 蟹袴走 葵 
}
void printAnimals() // 疑弘 是帖 窒径
{
	// けけけけけ  1  1  2  2  3  
	// けけけけけ  3  4  4  5  5 
	// けけけけけ  
	// けけけけけ  
	printf("\n======馬... 搾腔脊艦陥. 焼 獣 畏 嬢 推?=====\n\n");
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
void printQuestion() // 庚薦 窒径 朝球 走亀
{
	printf("\n\n(庚薦)\n");
	int seq = 0; // 朝球牽 及増嬢 爽澗 痕呪                 // checkAnimal
	// けけけけけ  0  1  2  3  4                              0 0 0 0 0
	// けけけけけ  5  6  7  8  9                              1 0 0 0 0
	// けけけけけ  10 11 12 13 14                             0 0 0 1 0
	// けけけけけ  15 16 17 18 19                             0 0 0 0 0
	for (int i = 0; i < 4; i++)
	{
		for(int j=0; j<5; j++)
		{
			// 朝球研 及増嬢辞 舛岩聖 限宙生檎 '疑弘 戚硯'
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			// 焼送 及増走 公梅生檎 (舛岩聖 公限宙生檎) 急檎 -> 是帖研 蟹展鎧澗 収切
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
	return 1; // 乞砧 陥 達製

}

int Animal_main()
{

	srand(time(NULL));

	initAnimalArrary();
	initAnimalName();

	shuffleAnimal();
    

	int failCount = 0; // 叔鳶 判呪

	while (1)
	{
		int select1 = 0; // 紫遂切亜 識澱廃 坦製 呪
		int select2 = 0; // 紫遂切亜 識澱廃 砧腰属 呪

		printAnimals(); // 疑弘 是帖 窒径
		printQuestion(); // 庚薦 窒径 (朝球走亀)
		printf("及増聖 朝球研 2鯵 壱牽室推 : ");
		scanf("%d %d", &select1, &select2);

		if (select1 == select2) // 旭精 朝球 識澱獣 巷反
			continue;
		// 疎妊拭 背雁馬澗 朝球研 及増嬢 左壱 旭精走 照旭精走 溌昔

		int FirstSelect_x = conv_pos_x(select1);
		int FirstSelect_y = conv_pos_y(select1);

		int SecondSelect_x = conv_pos_x(select2);
		int SecondSelect_y = conv_pos_y(select2);

		if ((checkAnimal[FirstSelect_x][FirstSelect_y] == 0 &&  //朝球亜 及増備走 省紹澗走 && 砧 疑弘戚 旭精走  旭精 疑弘昔 井酔
			checkAnimal[SecondSelect_x][SecondSelect_y] == 0)
			&&

			(arrayAnimal[FirstSelect_x][FirstSelect_y] == arrayAnimal[SecondSelect_x][SecondSelect_y])
			) //砧 疑弘戚 旭精走  旭精 疑弘昔 井酔 
		{
			printf("\n\n 桜壱! :%s 降胃 \n\n", strAnimal[arrayAnimal[FirstSelect_x][FirstSelect_y]]);
			checkAnimal[FirstSelect_x][FirstSelect_y] = 1; // 陥製拭 繕噺 拝 凶澗 戚耕 識澱吉 朝球戚奄 凶庚拭 繕噺拝 琶推亜 蒸製
			checkAnimal[SecondSelect_x][SecondSelect_y] = 1;
		}
		else //陥献 疑弘昔 井酔
		{
			printf("\n\n 強!! (堂携暗蟹, 戚耕 及増微 朝球脊艦陥.)\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[FirstSelect_x][FirstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[SecondSelect_x][SecondSelect_y]]);
			printf("\n\n");

			failCount++;
		}
		// 乞窮 疑弘聖 達紹聖獣 凧 :1  暗憎 :0
		if (foundAllAnimals() == 1)
		{
			printf("\n\n 逐馬杯艦陥! 乞窮 疑弘聖 陥 達紹柔艦陥. \n");
			printf("走榎猿走 恥 %d 腰 堂携柔艦陥.", failCount);
			break;
		}
	}

	return 0;
}