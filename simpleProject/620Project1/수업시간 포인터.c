#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 포인터: 다른 변수의 주소를 저장한 변수
// int a=10;
// 선언 : int *b;
// b=&a; -> a라는 변수의 주소 저장 &-> 주소 연산자  
// pointer -> reference : 다른 변수의 주소를 저장 &를 사용 먼저 지정 되어야함 b=&a;
//         -> dereference : 저장된 주소의 내용을 acces printf("%d",*b);
// b pointer를 이용해서 a 변수에 read와 write를 할 수 있다.
// 메모리는 byte단위로 이루어진다.
void printArray(int arr[], int size);
int main()
{
	int a = 10;
	int* b;
	b = &a;
	int* g = b;
	printf("변수 a의 값 : %d\n", a);
	printf("변수 a의 주소 :%p\n", &a);
	printf("포인터 변수b가 가리키는 주소 :%p\n", b);
	printf("포인터 변수b가 가지고있는 원래 주소:%p\n", &b);
	*b = 2;
	printf("포인터 b가 바꿀 변수의 값 :%d\n", *b); // b가 가리키는 주소의 값을 반환한다.
	printf("포인터 b가 바꾼 a변수의 값 :%d\n", a);
	*g = 5;
	printf("포인터 g가 바꾼 a의 값 :%d\n", a);

	printf("\n\n");
	int c = 10;
	char d = 69;
	float f = 20.5;
	printf("%d\n", sizeof(b));
	printf("%p %d\n", &c ,sizeof(c));
	printf("%p\n", &d);
	printf("%p\n", &f);

	printf("\n\n");
	int number = 10;
	int* p = &number; // reference
	int h = *p; // dereference
	printf("%d\n", h);

	int myArray[5] = { 1, 2, 3, 4, 5 };

	printf("main 함수 내에서 배열의 주소: %p\n", (void*)myArray);
	printf("main 함수 내에서 배열을 가리키는 포인터의 주소 %p\n", (void*)&myArray);
	// 배열을 함수에 전달
	printArray(myArray, 5);

	char chr = 'a';
	char* pc = &chr;
	pc = pc + 1; // 다음 메모리의 주소를 보기위해서 따로 지정을 해야함
	printf("%p\n",&chr);
	printf("%p\n",pc);
	printf("%c %c\n", chr, pc);

	return 0;
}
void printArray(int arr[], int size) {
	printf("함수 내에서 배열의 주소: %p\n", (void*)arr);
	printf("함수 내에서 배열을 가리키는 포인터의 주소%p\n", (void*)&arr);
	for (int i = 0; i < size; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}