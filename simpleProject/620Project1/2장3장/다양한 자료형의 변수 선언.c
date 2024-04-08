#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	// char c='A'; //문자형 변수 c 선언 문자 A를 저장
	// int i = 7; // 정수형 변수 i 선언 정수 7을 저장
	// double interet_rate = 0.001; // 부동소수점형 변수 interet_rate 선언 실수 0.001 저장

	// unsigned int speed; // 부호없는 int형 변수 speed
	// unsigned speed; // int를 생략하여도 된다.
	
	// unsigned를 붙이면 부호를 나타내는 첫 번째 비트를 사용할 수 있어서 
	// 더 큰 범위를 나타낼 수 있습니다.



	// 오버플로우 
	unsigned short b = 65535; // short의 unsigned 의 범위는 65535 까지이다.
	
	unsigned int a = 4294967295; // int의 unsigned 의 범위는 4294967295 까지이다.
	b = b + 1; // 오버플로우 발생 
	a = a + 1; // 오버플로우 발생
	
	
	printf("b=%d a=%d", b,a); 

	// float x = 1e39;
	// float y = 1.23456e-46;
	// 
	// printf("x=%e\n", x); 
	// printf("y=%e\n", y); 

	return 0;

}