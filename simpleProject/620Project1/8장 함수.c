#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<math.h>

#define SIZE 10

int get_integer();
int compare();
int power(int x, int y);

double FtoC(double tempf);

int Checkprime(int x);

int average(int score[], int size);

void Plus_arr(int arr[], int size);
void Source_arr(int arr[], int size);

int Sum_integer(int x);

int integer = 10; // �������� ����
void Integer_Plus(); 
void Integer_print();

void Car(int car_n, int dis);
void Car_dis_rand(int *car1_dis, int *dsdscar2_dis); // main�Լ� ������ ����ؼ� rand�� �����°ͺ��� �����͸� ����ؼ�
// �������� ����
float Get_Point(float x, float y);
void Sub();
int Fact(int x);
int Fibonacci(int arr[], int x);
int main()
{

	//int a = get_integer();
	//int b = get_integer();
	//
	//int result = a + b;
	//printf("�μ��� ��: %d\n", result);
	//
	//int c = compare();
	//
	//printf("�� ū ����: %d\n", c);
	//
	//int d = get_integer();
	//int e = get_integer();
	//int f = power(d,e);
	//printf("%d�� %d�� : %d\n",a,b,f);

	//double c, f;
	//printf("ȭ���µ��� �Է��ϼ��� : \n");
	//scanf("%lf", &f);
	//printf("%lf�� �����µ��� %lf �Դϴ�.\n", f, FtoC(f));

	//int h;
	//printf("1��100���̿��� �Ҽ��� ã���ϴ�.\n");
	//for (int i = 0; i < 100; i++)
	//{
	//	if (Checkprime(i) == 1)
	//		printf("%d ", i);
	//}

	//int score[SIZE] = { 100,100,100,100,100 };
	//int avg;
	//avg = average(score, SIZE);
	//printf("��� %d \n", avg);

	//int list[SIZE] = { 1,2,3,4,5 };
	//Source_arr(list, SIZE);
	//Plus_arr(list, SIZE);
	//Source_arr(list, SIZE);
	//Plus_arr(list, SIZE);
	//Source_arr(list, SIZE);

	//int sum = 0;
	//sum = Sum_integer(100);
	//printf("1���� 100������ �� %d\n", sum);

	//int integer = 100; // main �������� ����
	//
	//printf("%d\n", integer); // main�� integer�� ���� 
	//Integer_Plus(); // global integer�� ���� 1����
	//Integer_print();// global integer�� ���� ���

	//srand(time(NULL));
	//int car1dis = 0;
	//int car2dis = 0;
	//for (int i = 0; i < 20; i++)
	//{
	//	system("cls");
	//	Car_dis_rand(&car1dis,&car2dis);
	//	Car(1, car1dis);
	//	Car(2, car2dis);
	//	if (car1dis > car2dis) // �����ϰ� ���� �� ���� ���� �̰���� �Ǻ�
	//	{
	//		printf("car1 win");
	//	}
	//	else 
	//		printf("car2 win");
	//	_getch();
	//
	//}

	//int j ,check= 0;
	//printf("���� ������ �Է��ϼ���.");
	//scanf("%d", &j);
	//for (int i = 2; i < j; i++)
	//{
	//	if (Checkprime(i) == 1)
	//	{
	//		if (Checkprime(j - i) == 1) // j-i�� �Է¹��� ������ i�� ������ �Ҽ��̸� ����� �Ѵٴ� �ǹ�
	//		{
	//			printf("%d=%d+%d\n", j, i, j - i);
	//			check = 1; // check�� 1�̸� ����� �Ѵ�.
	//		}
	//	}
	//}
	//// �Ҽ����� ������ ������ ��Ÿ�� �� ������ ����ȴ�.
	//// ����Ǵ� ����
	//if (check == 0)
	//	printf("%d�� �Ҽ����� ������ ��Ÿ�� �� �����ϴ�.\n", j);

	//float x=0, y=0;
	//srand(time(NULL)); // ���� �Լ��� �̿��ؼ� ��Ʈ�� ��ġ �ֱ�
	//x = rand() % 5;
	//y = rand() % 5;
	//printf("��Ʈ�� x,y�� ��ǥ�� �������� �������ϴ�(�÷��̾ �����ٰ� ħ).\n"); // ��Ʈ ������
	//float point = Get_Point(x, y);
	//printf("������ ��ǥ�� %f %f �Դϴ�.\n", x, y);
	//printf("ȹ���� ������ %f�� �Դϴ�.\n", point);

	//Sub(); // static�� ����ϸ� �Լ�ȣ���� ����Ǿ �������� �ʴ´� ���� ����ؼ� ��������
	//Sub();
	//Sub();
	//Sub();

    //int result = 0;
	//
	//printf("������ �Է��ϼ���.\n");
	//scanf("%d", &result);  
	//printf("%d!=%d", result, Fact(result)); // ������ �Է¹޾Ƽ� ���丮���� ������ �� �ִ�.

    int x = 10;
	int arr[SIZE];
	Fibonacci(arr, x);



	return 0;
}
int get_integer()
{
	int value;
	printf("������ �Է��ϼ���.");
	scanf("%d", &value);
	return value;

}

int compare()
{

	int value,value2;
	printf("ũ�⸦ ���� ������ �Է��ϼ���.");
	scanf("%d %d", &value,&value2);
	
	if (value > value2)
		return value;
	else
		return value2;
        

}

int power(int x, int y)
{
	
	int result=1;
	for (int i = 0; i < y; i++)
	{
		result *= x;
	}
	return result;


}

double FtoC(double tempf)
{
	double tempc;
	tempc = ((tempf - 32) * 5.0) / 9;
	return tempc;
}

int Checkprime(int x)
{
	if (x == 1)
		return 0;
	int prime = 1;
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			prime = 0;
			break;
		}
	}
	return prime;
}

int average(int score[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += score[i];
	}
	return sum / size;
}

void Plus_arr(int arr[],int size)
{
	for (int i = 0; i < size; i++)
		++arr[i];
}
void Source_arr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int Sum_integer(int x)
{
	int result = 0;
	for (int i = 0; i <= x; i++)
	{
		result += i;
	}
	return result;
}

void Integer_Plus()
{
	integer++;
}
void Integer_print()
{
	printf("global integer : %d\n", integer);
}

void Car(int car_n, int dis)
{
	printf("CAR #%d", car_n);
	for (int i = 0; i < dis; i++)
	{
		printf("*");
	}
	printf("\n");
}
void Car_dis_rand(int *car1_dis,int *car2_dis)
{
	*car1_dis = rand() % 100; // +=�� �ϸ� ��� ���� �߰��� ���� ������ = �� �ϰ� �Ǹ� Ű�� �Է� ���� ������
	*car2_dis = rand() % 100; // ������ �Դ��� �� �� ����

}

float Get_Point(float x, float y)
{
	float dis = sqrt(x * x + y * y); // ��Ʈ�Լ��� �̿��ؼ� �Ÿ��� ��� 
	if (dis > 10) 
	{
		return 0; 
	}
	else if (dis>5)
	{
		return 1;
	}
	else if (dis > 1) 
	{
		return 5;
	}
	else// ���� 1,1�� �¾��� �� 10��
	{
		return 10;
	}
}

void Sub()
{
	int count = 0;
	static int count2 = 0;

	count++;
	count2++;
	printf("int count=%d\n", count);
	printf("static count=%d\n", count2);

}

int Fact(int x)
{
	if (x <= 1)
	{
		return 1;
	}
	else
		return x * Fact(x - 1);

}

int Fibonacci(int arr[], int x)
{
	int a, b = 0;
	int sum = 0;
	
	for (int i = 0; i < x; i++)
	{
		if (i == 0)
		{
			arr[0] = 1;
			
		}
		else 
		{
			a = arr[i - 1];
			if (i > 1)
			{
				b = arr[i - 2];
			}
			sum = a + b;
			arr[i] = sum;
		}
		printf("%d ", sum);
	}
}