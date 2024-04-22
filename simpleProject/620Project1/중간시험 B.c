#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PIE 3.141597
int main()
{
#pragma region B문제1
	/*
	char ch=0;
	int a=0;
	float b = 0;
	printf("char 의 크기 %d\n", sizeof(char));
	printf("int 의 크기 %d\n", sizeof(int));
	printf("float 의 크기 %d\n", sizeof(float));
	*/
#pragma endregion


#pragma region B문제2
	
	/*
	double a1=0,b1=0;
	scanf("%lf %lf", &a1, &b1);
	printf("%.2lf 와 %.2lf 의 평균 = %.2lf \n", a1,b1,(a1 + b1) / 2);
	*/
#pragma endregion

#pragma region B문제3
	/*
	int a3=0;
	scanf("%d", &a3);
	if (a3 % 2 == 0)
	{
		printf("짝수\n");
	}
	else
	{
		printf("홀수\n");
	}
	*/
	
#pragma endregion

#pragma region B문제4

	/*
	int a4 = 0;
	while (1)
	{
		scanf("%d", &a4);

		if (a4 < 0)
		{
			printf("%d\n", a4);
			break;

		}
	}
	*/
#pragma endregion

#pragma region B문제5

	/*
	int arr[10]; 
	int n = 0;
    for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);

	}
	int max = arr[0];
	for (int i = 0; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("최대값 :%d", max);
	*/

#pragma endregion
	/*
	int c, d = 0;
	int temp = 0;
	
	scanf("%d %d", &c, &d);

	temp = c;
	c = d;
	d=temp;

	printf("c= %d, d= %d", c, d);
	printf("%lf", PIE);
	*/
    /*
	int e, f = 0;
	char ch = 0;
	scanf("%d %d %c", &e, &f,&ch);
	
	switch (ch)
	{
	case '+':
		printf("%d + %d =%d\n", e, f,e+f);
		break;
	case'-':
		printf("%d - %d =%d\n", e, f, e - f);
		break;
	case'*':
		printf("%d * %d =%d\n", e, f, e * f);
		break;
	case'/':
		printf("%d / %d =%d\n", e, f, e / f);
		break;
	case '%':
		printf("%d / %d =%d\n", e, f, e % f);
		break;
	}
	*/


	

	return 0;
}