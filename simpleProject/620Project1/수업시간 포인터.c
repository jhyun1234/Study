#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
// 포인터: 다른 변수의 주소를 저장한 변수
// int a=10;
// 선언 : int *b;
// b=&a; -> a라는 변수의 주소 저장 &-> 주소 연산자  
// pointer -> reference : 다른 변수의 주소를 저장 &를 사용 먼저 지정 되어야함 b=&a;
//         -> dereference(간접참조): 저장된 주소의 내용(data)을 acces printf("%d",*b);
// b pointer를 이용해서 a 변수에 read와 write를 할 수 있다.
// 메모리는 byte단위로 이루어진다.
// int *z=g; int *g=p int *p; p=&a -> 다 a의 값에 acces 할 수 있다.
// 함수는 int ff(int *b) 이렇게 적어야한다.f(&a)
// 원본 데이터를 다른 변수로 제어하는것이 Pointer이다.
// 포인터의 증감 1순위 ( ) 2순위 ++ -- 3순위 *
// v=*++p , v=++*p p에 먼저있는것부터 연산
// v=*++p p의 주소값을 1을 증가 시킨 후 v에 대입한다. -> 주소값 증가
// v=++*p p가 가리키는 값을 가져온 뒤 증가시킨 뒤 v에 대입한다. -> 값 증가
// v=*p++ -> 먼저 p가 가리키는 값을 v에 대입한 뒤에 p를 증가한다 주소가 증가한다+1. 후증가이기때문 -> 주소값 증가
// v=(*p)++ -> p가 가리키는 값을 v에 대입한 후에 p가 가리키는 값을 증가한다.주소가 증가하는게 아님  -> 값 증가
// *p=2 이면 v에는 2가 대입된다. 그 후 *p값은 3이 된다.
// 포인터로 형변환을 할 수 있다. 
void printArray(int arr[], int size);
void print_p(int x, int* p);
void print_arr(int a[]);
int main_ClassPointer()
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
	

	int arr[] = { 1,3,5,7,9 };

	int* ptr = arr; // p==&arr[0] 
	printf("P = %u\n",(unsigned int)ptr);

	int v = *ptr++;
	
	print_p(v, ptr); // p-> 2번 째 인덱스의 주소 값 3 주소값 증가
	
	v = (*ptr)++;  // 값을 증가
	print_p(v, ptr);
	print_arr(arr);

	v = *++ptr; // 3번 주소를 가르키고 해당값을 저장 주소값 증가 후 그 값을 저장
	print_p(v, ptr);
	print_arr(arr);

	v = ++ * ptr; // 5가 6으로 값이 바뀜 주소값은 변동이 없음 
	print_p(v, ptr);
	print_arr(arr);

	unsigned long long data = 0x0A0B0C0D0E0F1011; // double 형식은 찍히지 않음 왜 와이? 검색
	char* pc2;                                    // 정수형은 가능함
	
	pc2 = (char*)&data;
	for (int i = 0; i < 8; i++)
	{
		printf("*(pc+%d)=%02X\n", i, *(pc2 + i)); // 인텔은 반대로 찍힌다. 
		// 인텔은 리틀 인디안
		// 모토로라는 빅 인디안
		// 빅 인디안으로 통합되었다.
	}
	




	return 0;
}
void printArray(int arr[], int size) {
	printf("함수 내에서 배열의 주소: %p\n", (void*)arr);
	printf("함수 내에서 배열을 가리키는 포인터의 주소%p\n", (void*)&arr);
	for (int i = 0; i < size; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}

void print_p(int x, int* p)
{
	printf("V:%d, P=%u\n", x, (unsigned int)p);
}

void print_arr(int a[])
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}