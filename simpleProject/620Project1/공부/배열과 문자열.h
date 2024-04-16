#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
#pragma region 배열
	/*
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2,};
	
	int ar1Len, ar2Len, ar3Len,i;

	printf("배열 arr1의 크기 :%d\n", sizeof(arr1));
	printf("배열 arr2의 크기 :%d\n", sizeof(arr2));
	printf("배열 arr3의 크기 :%d\n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int);
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1Len; i++)
		printf("%d", arr1[i]);
	printf("\n");

	for (i = 0; i < ar2Len; i++)
		printf("%d", arr2[i]);
	printf("\n");
	for (i = 0; i < ar3Len; i++)
		printf("%d", arr3[i]);
	printf("\n");
	*/

	//int num[5];
	//int max, min, sum, i;
	//for (i = 0; i < 5; i++)
	//{
	//   scanf("%d", &num[i]); // 배열 num[5]에 값을 하나씩 집어 넣는다.
	//
	//}
	//max = min = num[0];
	//sum = 0; // 최댓값과 최솟값의 기준을 잡는다.배열의 0번째 인덱스가 기준
	//
	//for (i = 0; i < 5; i++)
	//{
	//	sum += num[i]; // 입력된 값을 i로 돌려서 sum에 다 넣는다.
	//	if (max < num[i]) 
	//		max = num[i]; // 입력된 값중에 가장큰 값이 max가 된다.
	//	if (min > num[i]) 
	//		min = num[i]; // 입력된 값중에 가장 작은 값이 min이 된다.
	//}
	//printf("최댓값 %d", max);
	//printf("최솟값 %d", min);
	//printf("총합 %d", sum);

	//char str[] = { 'G','o','o','d',' ','t','i','m','e' };
    //int str1 = sizeof(str) / sizeof(char);
	//printf("%d", str1);
	//int i;
	//printf("\n");
	//for (i = 0; i < str1; i++)
	//{
	//	printf("%c", str[i]);
	//}
#pragma endregion

#pragma region 문자열
	// char str[13] = "Good Morning!";
	// printf("%d\n", sizeof(str));
	// printf("%c\n", str[13]); // 배열의 크기를 정해놓고 \0 문자가 들어갈 공간이 없으므로 표현을 할 수 없다.
	// printf("%d\n", str[13]); // 표현을 할 수 없으니 값도 당연히 0이 아니다.

	//char str[] = "Good Morning!";
	//printf("%d\n", sizeof(str));
	//printf("%c\n", str[13]);
	//printf("%d\n", str[13]);
	//// 길이는 13이지만 바이트는 14이다.
	//str[12] = '?'; // 12번째 인덱스에있는 값을 !->? 바꿀 수 있다. 12번째 인덱스는 !이다. 13은 \0 이다.
	//printf("%s", str); 


	//char str[50];
	//int len = 0;
	//scanf("%s", str); // 문자열을 입력받아 str에 저장
	//printf("%s", str); // 입력받은 문자열
	//
	//while (str[len] != 0)
	//{
	//	printf("%c", str[len]);
	//	len++;
	//
	//}
	//printf("\n");
	//printf("%d\n", len);


	//char str[50];
	//int len = 0,i;
	//scanf("%s", str); // 입력받은 문자열을 str에 저장
	//printf("%s", str); //입력받은 문자열
	//char temp;
	//while (str[len] != 0) // 단어의 길이 계산
	//	len++;
	//
	//for (i = 0; i < len/2; i++) // 영단어 뒤집기
	//{
	//	temp = str[i];
	//	str[i] = str[(len - i) - 1]; // 뒤의 문자를 앞으로
	//	str[(len - i) - 1] = temp;   // 앞의 문자를 뒤로
	//}
	//printf("뒤집힌 영단어 %s\n", str);

    //char str[50];
	//int len = 0, i;
	//char max = 0;
	//
	//scanf("%s", str);
	//while (str[len] != 0)
	//	len++;
	//for (i = 0; i < len; i++)
	//{
	//	if (max < str[i])
	//		max = str[i];
	//
	//
	//}
	//printf("%c %d\n", max,max);



#pragma endregion



	return 0;

}