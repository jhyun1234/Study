#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>


// 함수를 만들 때는 반환형, 함수이름, 매개변수 parameter 를 입력해야한다. 무조건 int x, int y 이렇게 써야함

// stack -> Last In First Out
// Queue -> Last In Last Out , First In First Out 

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
int main_1()
{
	
	// printf("%d ", add(4, 4));
	int x = 10;
	int y = 20;
	int value=add(10,20); // int value(10,20) 가능하다 하지만 메모리가 다르다 함수는 값을 복사해서 가져온다.
	printf("%d ", value);   
	

	return 0;
}