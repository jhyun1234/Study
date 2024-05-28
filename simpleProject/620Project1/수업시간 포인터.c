#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

#define MAXARR 100000000
int arr1[MAXARR];
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
// 포인터를 쓰레기 값으로 초기화 하지말고 NULL로 초기화를 반드시 해야한다. C++ nullptr
// 배열은 이름은 포인터처럼 사용할 수 있지만 값은 변경할 수 없다. const
// API를 써야하면 포인터를 쓰는게 좋다
// 연결List 포인터는 떨어져있는 메모리를 읽을 때 유용하게 사용된다.
// Search tree  
void printArray(int arr[], int size);
void print_p(int x, int* p);
void print_arr(int a[]);
void modify(int *value);
void modify1(int value);
int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept);
int* add3(int x, int y);
void swap(int* px, int* py);
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
	double data1 = 10;
	double* pi = &data1;
	int* pd = (int*)pi; 
	
	int data2 = 100;
	int* pi1 = &data2;
	double* pd2 = (double*)pi1; 

	printf("%d\n", *pd);
	printf("%d\n", *pd2);

	int number1 = 1;
	modify(&number1);
	printf("number1 = %d\n", number1);
	int number2 = 1;
	modify1(number2);
	printf("number2 = %d\n", number2);

	float s, y;
	if (get_line_parameter(3, 3, 6, 6, &s, &y) == -1) // slope 기울기 y절편 y축과 만나는 점 y=ax+b 에서 b값
		                                              // b=(y-ax)
		printf("에러\n");                             // yintercept y절편
	else
		printf("기울기는 %.2f \n y절편은 %.2f\n", s, y);

	int* pi3 = add3(3, 4);
	printf("%d\n", *pi3);

	int n = 10, l = 20;
	printf("swap()함수 호출 전 h=%d,l=%d\n", n, l);
	swap(&n, &l);
	printf("swap()함수 호출 후 h=%d,l=%d\n", n, l);


	//int i;
	//double* pd4;
	//pd4 = &i;
	//*pd4 = 36.5;
	//printf("%f", *pd4);

	int a3[] = { 10,2,30,4,50 };
	int b3[] = { 1,20,3,40,5 };
	int* pi4 = a3;
	printf("배열의 이름: %p\n", a3);
	printf("첫 번째 원소: %p\n", &a3[0]);
	printf("pi4 = %p\n", pi4);
	printf("%d\n", *a3);
	printf("%d\n", *a3+1); //a3[0]의 값에 1을 더하고 출력하는 경우
	printf("%d\n", *(a3+2)); // a3[2]의 값을 출력하는 경우
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", pi4[i]);  // *(a3+i)와 같다
	}
	printf("\n");

	pi4 = b3; // a=c; c=a; Xs
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", pi4[i]);  // pi4[i]와 같다
	}
	printf("\n");


	int b4 = 10;
	int* ptr3 = &b4;
	printf("%d\n", ptr3[0]); // 가능하지만 연속된 메모리가 아니기 떄문에 이렇게 사용하지 않는다.


	

	for (int i = 0; i < MAXARR; i++)
	{
		arr1[i] = i + 1;
	}
	int sum1 = 0, sum2 = 0;
	clock_t start1 = clock();
	for (int i = 0; i < MAXARR; i++)
	{
		sum1 += arr1[i];
	}
	clock_t end1 = clock();

	int* ptr4 = arr1;
	clock_t start2 = clock();
	for (int i = 0; i < MAXARR; i++,ptr4++)
	{
		sum2 += *ptr4; // == *ptr4++;
	}
	clock_t end2 = clock();
	printf("1st running time=%d\n", (int)(end1 - start1));
	printf("2nd running time=%d\n", (int)(end2 - start2));

	// 이중 포인터
	
	// int i=100; 
	// int*p=&i;
	// int **q=&p;
	// ' ' 아스키 코드 값 " " 문자열의 첫번쟤 주소 값

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

void modify(int *value)
{
	*value = 99; // 매개 변수를 변경한다.
}
void modify1(int value)
{
	value = 99; // 매개 변수를 통하여 원본을 변경한다.
}
// 기울기와 y절편을 계산한다.
int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept)
{
	if (x1 == x2)
		return -1;
	else
	{
		*slope = (float)(y2 - y1) / (float)(x2 - x1);
		*yintercept = y1 - (*slope) * x1;
		return 0;
	}
}
int* add3(int x, int y)
{
	int result;
	result = x + y;
	return &result;  //지역변수는 함수 호출이종료되면 사라지므로 지역변수의 주소를 반환하면 안됩니다.
	
}

void swap(int* px, int* py)
{

	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
	
}

