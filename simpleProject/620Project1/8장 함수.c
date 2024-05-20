#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<math.h>
#include <windows.h>


#define SIZE1 10
#define SIZE 6
int get_integer();
int compare();
int power(int x, int y);

double FtoC(double tempf);

int Checkprime(int x);

int average(int score[], int size);

void Plus_arr(int arr[], int size);
void Source_arr(int arr[], int size);

int Sum_integer(int x);

int integer = 10; // 전역변수 선언
void Integer_Plus(); 
void Integer_print();

void Car(int car_n, int dis);
void Car_dis_rand(int *car1_dis, int *dsdscar2_dis); // main함수 내에서 계속해서 rand를 돌리는것보다 포인터를 사용해서
// 가독성을 높임
float Get_Point(float x, float y);
void Sub();
int Fact(int x);
int Fibonacci(int arr[], int x);
int Count_Ways(int x);
double rad(double degree);
int main()
{

	//int a = get_integer();
	//int b = get_integer();
	//
	//int result = a + b;
	//printf("두수의 합: %d\n", result);
	//
	//int c = compare();
	//
	//printf("더 큰 정수: %d\n", c);
	//
	//int d = get_integer();
	//int e = get_integer();
	//int f = power(d,e);
	//printf("%d의 %d승 : %d\n",a,b,f);

	//double c, f;
	//printf("화씨온도를 입력하세요 : \n");
	//scanf("%lf", &f);
	//printf("%lf의 섭씨온도는 %lf 입니다.\n", f, FtoC(f));

	//int h;
	//printf("1과100사이에서 소수를 찾습니다.\n");
	//for (int i = 0; i < 100; i++)
	//{
	//	if (Checkprime(i) == 1)
	//		printf("%d ", i);
	//}

	//int score[SIZE] = { 100,100,100,100,100 };
	//int avg;
	//avg = average(score, SIZE);
	//printf("평균 %d \n", avg);

	//int list[SIZE] = { 1,2,3,4,5 };
	//Source_arr(list, SIZE);
	//Plus_arr(list, SIZE);
	//Source_arr(list, SIZE);
	//Plus_arr(list, SIZE);
	//Source_arr(list, SIZE);

	//int sum = 0;
	//sum = Sum_integer(100);
	//printf("1부터 100까지의 합 %d\n", sum);

	//int integer = 100; // main 지역변수 선언
	//
	//printf("%d\n", integer); // main의 integer가 나옴 
	//Integer_Plus(); // global integer의 값을 1증가
	//Integer_print();// global integer의 값을 출력

	//srand(time(NULL));
	//int car1dis = 0;
	//int car2dis = 0;
	//for (int i = 0; i < 20; i++)
	//{
	//	system("cls");
	//	Car_dis_rand(&car1dis,&car2dis);
	//	Car(1, car1dis);
	//	Car(2, car2dis);
	//	if (car1dis > car2dis) // 간단하게 누가 더 많이 가서 이겼는지 판별
	//	{
	//		printf("car1 win");
	//	}
	//	else 
	//		printf("car2 win");
	//	_getch();
	//
	//}

	//int j ,check= 0;
	//printf("양의 정수를 입력하세요.");
	//scanf("%d", &j);
	//for (int i = 2; i < j; i++)
	//{
	//	if (Checkprime(i) == 1)
	//	{
	//		if (Checkprime(j - i) == 1) // j-i는 입력받은 값에서 i를 뺀값이 소수이면 출력을 한다는 의미
	//		{
	//			printf("%d=%d+%d\n", j, i, j - i);
	//			check = 1; // check가 1이면 출력을 한다.
	//		}
	//	}
	//}
	//// 소수들의 합으로 덧셈을 나타낼 수 없으면 종료된다.
	//// 종료되는 조건
	//if (check == 0)
	//	printf("%d는 소수들의 합으로 나타낼 수 없습니다.\n", j);

	//float x=0, y=0;
	//srand(time(NULL)); // 랜덤 함수를 이용해서 다트의 위치 넣기
	//x = rand() % 5;
	//y = rand() % 5;
	//printf("다트의 x,y의 좌표가 랜덤으로 던져집니다(플레이어가 던졌다고 침).\n"); // 다트 던지기
	//float point = Get_Point(x, y);
	//printf("떨어진 좌표는 %f %f 입니다.\n", x, y);
	//printf("획득한 점수는 %f점 입니다.\n", point);

	//Sub(); // static을 사용하면 함수호출이 종료되어도 없어지지 않는다 값이 계속해서 남아있음
	//Sub();
	//Sub();
	//Sub();

    //int result = 0;
	//
	//printf("정수를 입력하세요.\n");
	//scanf("%d", &result);  
	//printf("%d!=%d", result, Fact(result)); // 정수를 입력받아서 펙토리얼을 구현할 수 있다.

    //int x = 10;
	//int arr[SIZE1];
	//Fibonacci(arr, x);
       
    //int stair = 10;
	//printf("%d의 계단을 오르는 방법은 총 %d 가지입니다.\n", stair, Count_Ways(stair));
    
    //double n, result;
	//printf("실수 입력");
	//scanf("%lf", &n);
	//result = sqrt(n);
	//printf("%lf의 제곱근은 %lf 입니다.\n", n, result);
  
    //system("cls");
	//Sleep(1000);
	//system("cls");
	//system("ipconfig /all");

    //long start, end = 0;
	//start = time(NULL);
	//printf("10초가 됐다고 생각하시면 아무키나 눌러주세요.\n");
	//_getch();
	//printf("종료되었습니다.");
	//end = time(NULL);
	//printf("경과된 시간은 %ld 초였습니다.\n", end - start);

    //int arr1[SIZE];
	//srand(time(NULL));
	//for (int i = 0; i < 6; i++)
	//{
	//	arr1[i] = rand() % 45 + 1;
	//	printf("%d ",arr1[i]);
	//}

    //int degree, x, y = 0;
	//double radian, result;
	//
	//HWND hwnd = GetForegroundWindow();
	//HDC hdc = GetWindowDC(hwnd);
	//
	//MoveToEx(hdc, 30, 200, 0);
	//LineTo(hdc, 500, 200);
	//for (degree = 0; degree <= 500; degree++)
	//{
	//	result = sin(rad((double)degree));
	//	x = degree + 30;
	//	y = 200 - (int)(100.0 * result);
	//	SetPixel(hdc, x, y, RGB(255, 0, 0));
	//}
	//_getch();

    


	return 0;
}
int get_integer()
{
	int value;
	printf("정수를 입력하세요.");
	scanf("%d", &value);
	return value;

}

int compare()
{

	int value,value2;
	printf("크기를 비교할 정수를 입력하세요.");
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
	*car1_dis = rand() % 100; // +=는 하면 계속 별이 추가로 찍힘 하지만 = 를 하게 되면 키를 입력 받을 때마다
	*car2_dis = rand() % 100; // 어디까지 왔는지 알 수 있음

}

float Get_Point(float x, float y)
{
	float dis = sqrt(x * x + y * y); // 루트함수를 이용해서 거리를 계산 
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
	else// 원점 1,1에 맞았을 때 10점
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

int Count_Ways(int x)
{
	if (x == 1) 
		return 1; // 계단을 하나씩 오르는 방법
	else if (x == 2)
		return 2; // 계단을 두개씩 오르는 방법
	else
		return Count_Ways(x - 1) + Count_Ways(x - 2);
        // (n-1)의 계단을 오른후 하나씩 오르는방법+(n-2)의 계단을 오른후 두개씩 오르는 방법
	    // ex) 4개의 계단을 오르는 방법은 Count_Ways(4)=Count_Ways(3)+Count_Ways(2) 이다.
	    // Count_Ways(3)=Count_Ways(2)+Count_Ways(1)= 2+1 =3.
	    // Count_Ways(3)=3 Count_Ways(2)=2 Count_Ways(4)=Count_Ways(3)+Count_Ways(2)=5 가 나온다.
	   // 4개의 계단을 올라가는 방법은 총 5가지가 나온다.
}

double rad(double degree)
{
	return M_PI * degree / 180.0;
}

void Print_Money()
{
	printf("=========================");

	


}