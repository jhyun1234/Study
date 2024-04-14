#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int total=0; // 총합점수
	for (int i = 0; i < 3; i++)
	{
	    int x, y;
	    int score;
		printf("다트를 던지세요.\n");
		scanf("%d %d", &x, &y);

		int distance = sqrt(x * x + y * y); // 중앙부터의 거리


		if (distance > 10)
		{
			score = 0;
		}
		else if (distance > 5)
		{
			score = 1;
		}
		else if (distance > 1)
		{
			score = 5;
		}
		else
		{
			score = 10;
		}

		total += score; // 총합 점수에 1회 2회 3회 점수를 더함.
	}
	

	printf("총합점수 %d\n", total);

	return 0;
}