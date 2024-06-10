#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // 동적메모리를 사용하기 위해 써야함

// 정적메모리(satic) 컴파일에서 사이즈를 정한다.
// 동적메모리(daymic) 런타임중에 새로 할당 받을 수 있다.
// 배열은 절대 동적이 될 수 없다.
// malloc(필요한 바이트 수를 적는다)
// malloc은 heap 메모리에 저장된다.
// 필요한 데이터 타입을 적어야한다.
// stack 지역변수
// 

int main_struct()
{
	int* score=(int*)malloc(100*sizeof(int) /*== 400*/ );


	// 구조체를 동적메모리로 사용할 수 있다.
	free(score);



	return 0;
}