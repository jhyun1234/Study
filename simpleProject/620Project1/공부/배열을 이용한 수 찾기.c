#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int total = 0; int target = 0;
	int i = 0; int j = 0;
	int sum = 0;
	int s[100] = { 0, };
	scanf("%d", &total);

	for (i = 0; i < total; i++)
	{
		scanf("%d", &s[i]);
	}

	scanf("%d", &target);
	for (j = 0; j < total; j++)
	{
		if (s[j] == target)
		{
			sum++;
		}
	}
	printf("%d", sum);


	
	return 0;
}