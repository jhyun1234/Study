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
// 정적변수와 전역변수는 memory에 잡히고 지역변수는 stack에 잡힌다.
// 정적변수와 전역변수는 컴파일 실행시 생성 지역변수는 함수가 호출이 될 때 생성된다.
// 전역변수와 정적변수는 프로그램이 완전히 종료될 때 없어진다.지역변수는 함수가 종료될 때 없어진다.
// 정적변수는 함수안에서 선언된 static은 함수안에서만 사용할 수 있다.함수가 종료될 때 도 값을 저장하고 싶으면
// static을 사용하는게 좋다.
// static은 memory가 만들어질 때 딱 한번 초기화 된다.
// extern 파일이 여러개 일 때 많이 사용하게 된다. 다른파일이라는 말로 지정한다 라는것만 지금은 알면된다.
// 재귀함수 함수가 자기자신을 호출하는것이다.종료조건을 정해서 종료시키는게 중요하다.
// 속도면에서는 반복문이 더 빠르다.하지만 반복문을 계속 사용하면 가독성이 떨어질 수 있다.
// 동적메모리는 생성을 하고 난 뒤 직접 free()함수를 이용해서 없애줘야한다.

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

void sub(void);

int a=0;
int fact(int n);
int main_Class()
{
	/*
	printf("%d ", add(4, 4));
	
	int x = 10;
	int y = 20;
	int value=add(10,20); // int value(10,20) 가능하다 하지만 메모리가 다르다 함수는 값을 복사해서 가져온다.
	printf("%d ", value);   
	
	int arr[] = { 1,2,3,4,5 }; // 배열은 이미 주소를 가지고있기 때문에 값을 변경하면 그대로 값이 변경된다.
	int sum = 0;
	
	sum = Sum(arr, 5);
	printf("Sum %d \n", sum);
	int length = sizeof(arr) / sizeof(int);
	for (int i = 0; i < length; i++)
	{
	  printf("Sum %d %p \n",i, (int*)&arr[i]);
	}
	int c=100000;
	c = ff(c);
	
	printf("%d", c);
	*/

	/*
	sub();
	sub();
	sub();
	*/

	int a = 3;
	int* ptr = &a;
	*ptr = 10;
	printf("%d %d \n",*ptr, a);

	int result = fact(5);
	printf("%d", result);

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
void sub(void)
{
	int count = 0;
	static int count2 = 0;

	count++;
	count2++;
	printf("cout %d ", count);
	printf("count2 %d \n", count2);
}
int fact(int n)
{

	if (n <= 1)
		return 1;
	else return n * fact(n - 1);
}
