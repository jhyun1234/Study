#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>


// 함수를 만들 때는 반환형, 함수이름, 매개변수 parameter 를 입력해야한다. 무조건 int x, int y 이렇게 써야함

// stack -> Last In First Out  값을 넣는건 push 꺼내는건 pop
// Queue -> Last In Last Out , First In First Out 
// 함수들은 다 각자의 스텍이 있다
// 반복 code 모듈과 복잡한문제를 단순화하는것은 연관관계가 있다.
// 함수를 쓰는 이유는 가독성도 좋아지고 단순 값 변경을 할 때 아주 유용하다.
// main 함수에 다 쓸 경우 복잡해진다.
// 함수의 이름은 가독성이 높은이름으로 정해야한다.
// libray 형식의 함수 printf scanf 시스템에서 제공
// 사용자가 정의하는 함수 ex) int add(int x,int y)
// void -> return X   return 1-> error , return O 함수를 종료하라는말과 같다 
// int -> return O
// parameter는 데이터 타입이 무조건 있어야한다.
// int max=add(d,e); 반복적으로 호출할 때
// int max=add(3,4); 한번만 호출할 때
// 함수 호출 return 값은 컴파일러가 값을 복사해서 출력해서 나온다.

int add(int x,int y)
{
	int result;
	result = x+y;
	return result; 
	
	 

}
int add1()
{
	int x = 5;
	return x; // X를 반환하는게 아니라 x의 메모리에 들어있는 데이터 값을 반환한다.
	return 5; // 똑같다
}

// 다른 메모리이기때문에 포인터를 쓰지 않는이상 값이 변하지않는다.

int f(int a, int b);

int Sum(int arr[], int a);

int ff(int* a);
int main()
{
	
	// printf("%d ", add(4, 4));
	
	//int x = 10;
	//int y = 20;
	//int value=add(10,20); // int value(10,20) 가능하다 하지만 메모리가 다르다 함수는 값을 복사해서 가져온다.
	//printf("%d ", value);   
	
	int arr[] = { 1,2,3,4,5 }; // 배열은 이미 주소를 가지고있기 때문에 값을 변경하면 그대로 값이 변경된다.
	int sum = 0;
	
	sum = Sum(arr, 5);
	printf("Sum %d \n", sum);
	int length = sizeof(arr) / sizeof(int);
	for (int i = 0; i < length; i++)
	{
	  printf("Sum %d %p \n",i, arr[i]);
	}
	int c=100000;
	c = ff(c);
	
	printf("%d", c);
	return 0;
}
int f(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int Sum(int arr[], int a)
{
	int sum = 0;
	
	for (int i = 0; i < a; i++)
	{
		 sum+= arr[i];
	}
	return sum;
}
int ff(int *a)
{
	int c = 10;
	
	int *b = &c;

	return c;
}