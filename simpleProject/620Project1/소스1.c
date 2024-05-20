#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int x, y;

	scanf("%d %d", &x, &y);

	if (x % 2 == 0 && y % 2 == 0)
	{
		printf("¸ðµÎ Â¦¼ö");
	}
	else if (x % 3 == 0 && y % 3 == 0)
	{
		printf("¸ðµÎ È¦¼ö");
	}
	else
	{
		printf("È¦ Â¦");
	}

	return 0;
}