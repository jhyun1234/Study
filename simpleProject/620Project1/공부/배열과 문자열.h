#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
#pragma region �迭
	/*
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2,};
	
	int ar1Len, ar2Len, ar3Len,i;

	printf("�迭 arr1�� ũ�� :%d\n", sizeof(arr1));
	printf("�迭 arr2�� ũ�� :%d\n", sizeof(arr2));
	printf("�迭 arr3�� ũ�� :%d\n", sizeof(arr3));

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
	//   scanf("%d", &num[i]); // �迭 num[5]�� ���� �ϳ��� ���� �ִ´�.
	//
	//}
	//max = min = num[0];
	//sum = 0; // �ִ񰪰� �ּڰ��� ������ ��´�.�迭�� 0��° �ε����� ����
	//
	//for (i = 0; i < 5; i++)
	//{
	//	sum += num[i]; // �Էµ� ���� i�� ������ sum�� �� �ִ´�.
	//	if (max < num[i]) 
	//		max = num[i]; // �Էµ� ���߿� ����ū ���� max�� �ȴ�.
	//	if (min > num[i]) 
	//		min = num[i]; // �Էµ� ���߿� ���� ���� ���� min�� �ȴ�.
	//}
	//printf("�ִ� %d", max);
	//printf("�ּڰ� %d", min);
	//printf("���� %d", sum);

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

#pragma region ���ڿ�
	// char str[13] = "Good Morning!";
	// printf("%d\n", sizeof(str));
	// printf("%c\n", str[13]); // �迭�� ũ�⸦ ���س��� \0 ���ڰ� �� ������ �����Ƿ� ǥ���� �� �� ����.
	// printf("%d\n", str[13]); // ǥ���� �� �� ������ ���� �翬�� 0�� �ƴϴ�.

	//char str[] = "Good Morning!";
	//printf("%d\n", sizeof(str));
	//printf("%c\n", str[13]);
	//printf("%d\n", str[13]);
	//// ���̴� 13������ ����Ʈ�� 14�̴�.
	//str[12] = '?'; // 12��° �ε������ִ� ���� !->? �ٲ� �� �ִ�. 12��° �ε����� !�̴�. 13�� \0 �̴�.
	//printf("%s", str); 


	//char str[50];
	//int len = 0;
	//scanf("%s", str); // ���ڿ��� �Է¹޾� str�� ����
	//printf("%s", str); // �Է¹��� ���ڿ�
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
	//scanf("%s", str); // �Է¹��� ���ڿ��� str�� ����
	//printf("%s", str); //�Է¹��� ���ڿ�
	//char temp;
	//while (str[len] != 0) // �ܾ��� ���� ���
	//	len++;
	//
	//for (i = 0; i < len/2; i++) // ���ܾ� ������
	//{
	//	temp = str[i];
	//	str[i] = str[(len - i) - 1]; // ���� ���ڸ� ������
	//	str[(len - i) - 1] = temp;   // ���� ���ڸ� �ڷ�
	//}
	//printf("������ ���ܾ� %s\n", str);

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