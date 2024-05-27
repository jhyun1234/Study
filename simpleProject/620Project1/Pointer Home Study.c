#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int time=0;
	float dad = 0;
	float son = 0;
	int num = 0;
	int dad_walk = 10;
	int dad_rest = 5;
	int dad_Move = dad_walk + dad_rest; 
	int over = 0; // 아들이 아빠를 추월하면 1 아니면 0
	while (time<=60)
	{
		if (time % dad_Move < dad_walk) 
		{
		   dad += 3.6;
		}

		son += 2.5;
		if (son>dad &&!over)
		{
		    num++;
			over = 1;
		}
		if (son <= dad)
		{
			over = 0;
		}
		time++;
	}
    printf("%d \n",num);
	
	

	return 0;
}