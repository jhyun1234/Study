#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region �迭
	//int arr[5];
	//int max, min, sum;
	//for (int i = 0; i < 5; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}
	//
	//max = min = arr[0];
	//sum = 0;
	//
	//for (int i = 0; i < 5; i++)
	//{
	//
	//	sum += arr[i];
	//	if (max < arr[i])
	//		max = arr[i];
	//	if (min > arr[i])
	//		min = arr[i];
	//}
	//
	//printf("���� %d\n", sum);
	//printf("�ִ� %d\n", max);
	//printf("�ּڰ� %d\n", min);



#pragma endregion

#pragma region ���ڿ�

	//char arr[] = { 'G','o','o','d',' ','M','o','r','n','i','n','g' };
	//
	//int i;
	//int arren = sizeof(arr) / sizeof(char);
	//for (i = 0; i < arren; i++)
	//{
	//	printf("%c", arr[i]);
	//}
	//printf("\n");

#pragma endregion

#pragma region ���� ¦��,Ȧ�� ������ ���ϴ� ���

	//int n;
	//int arr[100];
	//scanf("%d", &n);
	//for (int i = 0; i < n; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}
	//int cnt = 0;
	//int sum = 0;
	//int nnt = 0;
	//int sum1 = 0;
	//for (int i = 0; i < n; i++)
	//{
	//	if (arr[i] % 2 == 0)
	//	{
	//		sum += arr[i];
	//		cnt++;
	//     printf("¦�� %d \n", arr[i]);
	//
	//	}
	//	else
	//	{
	//		sum1 += arr[i];
	//		nnt++;
	//		printf("Ȧ�� %d\n", arr[i]);
	//	}
	//}
	//printf("Ȧ���� ���� :%d\n", nnt);
	//printf("Ȧ������ �� :%d\n", sum1);
	//printf("¦���� ���� :%d\n", cnt);
	//printf("¦������ �� :%d\n", sum);

#pragma endregion

#pragma region ���ڿ� �Է°� ���

	//char voca[100];
	//int len = 0;
	//printf("�ܾ� �Է�");
	//scanf("%s",&voca);
	//
	//while (voca[len] != '\0')
	//	len++;
	//printf("%d", len);


	//char voca[100];
	//int len = 0;
	//int temp = 0;
	//printf("���ܾ� �Է�");
	//scanf("%s", &voca);
	//
	//while (voca[len] != '\0')
	//	len++;
	//for (int i = 0; i < len / 2; i++)
	//{
	//	temp = voca[i];
	//	voca[i] = voca[(len - i) - 1];
	//	voca[(len - i) - 1] = temp;
	//}
	//printf("%s", voca);

	  //char voca[100];
	  //int len = 0;
	  //char max = 0;
	  //printf("�ܾ� �Է�");
	  //scanf("%s", &voca);
	  //char min = voca[0];
	  //while (voca[len] != 0)
		//  len++;
	  //for (int i = 0; i < len; i++)
	  //{
		//  if (max < voca[i])
		//	  max = voca[i];
		//  if (min > voca[i])
		//	  min = voca[i];
		//	  
	  //}
	  //printf("�ܾ��� �ƽ�Ű �ڵ尪�� ���� ū ���� : %c\n", max);
	  //printf("�ܾ��� �ƽ�Ű �ڵ尪�� ���� ū ������ �� : %d\n", max);
	  //printf("�ܾ��� �ƽ�Ű �ڵ尪�� ���� ���� ���� : %c\n", min);
	  //printf("�ܾ��� �ƽ�Ű �ڵ尪�� ���� ���� ������ �� : %d\n", min);


#pragma endregion

#pragma region ���� ����

   //int n; // �Է��� ������ ����
	//int arr[100]; // �迭�� ���� ����
	//int i = 0;
	//int j = 0;
	//int target = 0; // � ���� ã���� �����ϴ� ����
	//int sum = 0; // target�� ���� � �ִ��� ��Ÿ���� ����
	//scanf("%d", &n);

	//for (int i = 0; i < n; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}

	//scanf("%d", &target);
	//for (int j = 0; j < n; j++)
	//{
	//	if (arr[j] == target)
	//		sum++;
	//}
	///printf("%d", sum);

#pragma endregion

#pragma region X���� ���� ��

	//int N;
	//int X;
	//int A[1000];
	//
	//int i = 0;
	//scanf("%d %d",&N,&X);
	//for (i = 0; i < N; i++)
	//{
	//
	//	scanf("%d", &A[i]);
	//}
	//for (i = 0; i < N; i++)
	//{
	//	if (i < X)
	//	{
	//		printf("%d ", A[i]);
	//	}
	//}   





#pragma endregion


#pragma region �ִ�,�ּ�
 
    //int n;
	//int i = 0;
	//int* arr;
	//scanf("%d", &n);
	//arr = (int*)malloc(n * sizeof(int));
	//if (arr == NULL) { // �޸� �Ҵ� ���� ó��
	//	printf("�޸� �Ҵ� ����\n");
	//	return -1;
	//}
	//
	//for (i = 0; i < n; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}
	//
	//int max = arr[0];
	//int min = arr[0];
	//for (i = 1; i < n; i++)
	//{
	//	if (max < arr[i])
	//	{
	//		max = arr[i];
	//	}
	//	if (min > arr[i])
	//	{
	//		min = arr[i];
	//	}
	//
	//}
	//printf("%d %d", min, max);
	//
	//free(arr);


#pragma endregion

#pragma region �ִ�

   
	//int arr[9];
	//int i;
   
	//for (i = 0; i < 9; i++)
	//{
	//   scanf("%d", &arr[i]);
   
	//}
	//
	//int max = arr[0];
	//int place = 0;
	//for (i = 0; i < 9; i++)
	//{
	//	if (max <= arr[i])
	//	{
	//		max = arr[i];
	//		place = i;
	//	}
	//}
	//
	//printf("%d\n", max);
	///printf("%d", place + 1);
	

#pragma endregion

#pragma region �Ǻ���ġ ����
     

	int arr[10];
	int i = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i == 0)
			arr[0] = 1;
		else
		{
          int a=0, b=0, sum=0;
	
			a = arr[i - 1];
		 if (i > 1)
		 {
		 
		 	b = arr[i - 2];
		 }
		 sum = a + b;
		 arr[i] = sum;
		}
	 printf("%d ", arr[i]);
	}

#pragma endregion


#pragma region �ڵ��

    //char a[2001];
	//gets(a);
	//puts(a);
    
    //int a, b;
	//scanf("%d.%d", &a, &b);
	//printf("%d\n%d", a, b);
     
     //char arr[10];
	 //int i;
	 //scanf("%s", &arr);
	 //
	 //for (i = 0; arr[i]!=0; i++)
	 //{
	//	 
	 //  printf("%c\n", arr[i]);
	 //}

      //int a, b, c, d, e;
	  //scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	  //printf("%d\n", a * 10000);
	  //printf("%d\n", b * 1000);
	  //printf("%d\n", c * 100);
	  //printf("%d\n", d * 10);
	  //printf("%d\n", e * 1);

   

   
#pragma endregion



	return 0;
}