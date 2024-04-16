#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

#pragma region 배수출력,최소 공배수,최대 공약수
	/*
	int i = 0;
	for (i = 1; i < 100; i++)
	{

		if (i % 7 == 0 || i % 9 == 0)
		{
			printf("7또는 9의 배수 %d\n", i);
		}
		
	}
     */
	//int num1, num2, max;
	//scanf("%d %d", &num1, &num2);
	//
	//max = (num1 > num2) ? num1 : num2;
	//
	//while (1)
	//{
	//	if (max % num1 == 0 && max % num2 == 0)
	//	{
	//		printf("최소 공배수 %d\n", max);
	//		break;
	//	}
	//	max++;
	//}
	//
	//
	//printf("%d 와 %d 의 공배수 \n", num1, num2);
	//for (int i = 1; i<=num1*num2; i++)
	//{
	//	if (i % num1 == 0 && i % num2 == 0)
	//	{
	//		printf("%d\n", i);
	//	}
	//	
	//}

	//int num1, num2, min;
	//scanf("%d %d", &num1, &num2);
	//
	//min = (num1 < num2) ? num1 : num2;
	//
	//printf("%d 와 %d 의 공약수 \n", num1, num2);
	//for (int i = 1; i <= min; i++)
	//{
	//	if (num1 % i == 0 && num2 % i == 0)
	//	{
	//		printf("%d\n", i);
	//	}
	//}

	//int num1, num2, gcd,temp;
	//scanf("%d %d", &num1, &num2);
	//
	//while (num2 != 0)
	//{
	//	temp = num2;
	//	num2 = num1 % num2;
	//	num1 = temp;
	//}
	//
	//gcd = num1; // 이 시점에서 num1에는 최대공약수가 저장되어 있다.
	//
	//printf("최대 공약수 %d\n", gcd);

#pragma endregion


#pragma region 두 수의 차
	/*
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		printf("%d", num1 - num2);
	}
	else
	{
		printf("%d", -1*(num1 - num2));
	}
	
	int num1;
	int num2;
	int num3;
	scanf("%d %d", &num1, &num2);

	num3 = num1 > num2 ? (num1 - num2) : (num1 - num2) * -1;
	printf("%d", num3);
	*/
#pragma endregion


#pragma region 성적의 평균과 학점
	/*
	int kor = 0;
	int eng = 0;
	int mat = 0;
	scanf("%d %d %d", &kor, &eng, &mat);
	int av = (kor+eng+mat)/3;
	printf("평균 : %d\n", av);
	if (av >= 90)
		printf("A\n", av);
	else if (av >= 80)
		printf("B\n", av);
	else if (av >= 70)
		printf("C\n", av);
	else if (av >= 60)
		printf("D\n", av);
	else
		printf("F\n", av);
    */


#pragma endregion


#pragma region 구구단 특정부분까지만 출력

//int i, j;
//for (i = 0; i < 10; i++)
//{
//
//	if (i %2 != 0)
//		continue;
//		for (j = 1; j < 10; j++)
//		{
//			if (i < j)
//				break;
//			printf("%d %d =%d\n", i, j, i * j);
//		}
//	
//	printf("\n");
//
//	}

#pragma endregion

#pragma region AZ+ZA=99

//int A, Z;
//int result;
//
//for (A = 0; A < 10; A++)
//{
//	for (Z = 0; Z < 10; Z++)
//	{
//		if (A == Z)
//			continue;
//		result = (10 * A + Z) + (10 * Z + A);
//		if (result == 99)
//		{
//			printf("%d%d+%d%d=%d\n", A, Z, Z, A, result);
//		}
//	}
//}
  

#pragma endregion

#pragma region 스위치문

/*
int num;

scanf("%d", &num);

switch (num)
{
case 1:
	for (int i = 1; i < 10; i++)
	{
		for (int j = 2; j < 10; j++)
		{
			printf("%d * %d =%d\n", i, j, j * i);
		}
		printf("\n");
	}
	break;
case 2:

  for (int A = 0; A < 10; A++)
  {
  	  for (int Z = 0; Z < 10; Z++)
  	  {
  	  	  if (A == Z)
  	  	  	continue;
  	  	  int result = (10 * A + Z) + (10 * Z + A);
  	  	  if (result == 99)
  	  	  {
  	  	  	printf("%d%d+%d%d=%d\n", A, Z, Z, A, result);
  	  	  }
  	  }
  }
break;

}
*/
#pragma endregion

return 0;
}