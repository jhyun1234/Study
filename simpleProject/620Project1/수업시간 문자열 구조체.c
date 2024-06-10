#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> // 표준 c 라이브러리가 아님
#include <stdlib.h> // 동적메모리를 사용하기 위해 써야함

// 정적메모리(satic) 컴파일에서 사이즈를 정한다.
// 동적메모리(daymic) 런타임중에 새로 할당 받을 수 있다.
// 배열은 절대 동적이 될 수 없다.
// malloc(필요한 바이트 수를 적는다)
// malloc은 heap 메모리에 저장된다.
// 필요한 데이터 타입을 적어야한다.
// stack 지역변수
// 삽입 삭제가 빈번하면 연결리스트가 무조건 유리하다

// ' ' 문자 " " 문자열 문자열은 무조건 연속된 주소를 가진다.
// 문자열의 끝에는 \0 NULL문자가 들어간다.
// 버퍼가 있다면 enter를 치지않는이상 그 다음을 실행하지 않는다.
// 버퍼가 없다면 입력받은걸 바로 출력함
// 연결리스트 Queue, stack 
// 연결리스트는 연속된 메모리가 아니어도 된다.
// 포인터는 같은 타입을 선언해야한다.
// 
// typedef <data_type> <user_type>
typedef struct day
{
	int year;
	int month;
	int day;

}day2; // 구조체의 이름을 쓰는것이 좋음
typedef struct student  // 
{
	//struct day *day1;
	int number;
	char name[20];
	double grade;
	struct student* next;
}Student;
typedef struct Army
{
	struct Army* next;
}army;

Student f(Student a)
{
	Student b;
	b.number = a.number;
	b.grade = a.grade;
	strcpy(b.name, a.name);
	return b; // 메모리 안에 있는 데이터를 main d에 복사하는것이다.
}

// union 가장 큰 메모리 사이즈가 잡힌다 
// IP주소값을 저장할 때 union이 유용하게 사용된다.
//{
	//unsigned int ipint;
	//unsigned short b[2];
	//unsigned char[4];
  // 전체 4바이트 이기때문에 이 구조체는 4바이트로 잡힌다.
//}

// enum을 이용해서 선언하면 특정 수로 초기화 하지않으면
// 첫 번째 변수는 자동으로 0이 된다.
// 다른 수로 초기화해도 된다.
// 문자를 숫자로 바꿀 수 있다. -> 가독성이 높음

int main_Struct()
{
	//int c = _getch();  // 입력받은걸 바로 출력함
	//printf("%c", c);

	//char name[100];
	//char address[100];
	//printf("이름을 입력하시오");
	////scanf("%s", name);
	//gets_s(name, sizeof(name));
	//printf("현재 거주하는 주소를 입력하시오");
	//gets_s(address, sizeof(address));
	////scanf("%s", address); // 스페이스바를 누르는 순간 처리가 된다.
	//printf("안녕하세요, % s에 사는 % s씨 \n", address, name);
   
	
	//struct student s1;
	//
	//s1.number = 20203324;
	//strcpy(s1.name, "최종현"); // 배열에 문자를 넣을 때는 strcpy를 써야함
	//s1.grade = 4.0;
	//
	//printf("%d\n%s\n%f\n", s1.number, s1.name, s1.grade);

	//struct student s1;
	//struct student* p_s1 = &s1; // 포인터로 구조체의 주소를 저장해야한다.
	//
	//p_s1->day1.year = 2024;
	//p_s1->day1.month = 6;
	//p_s1->day1.day = 4;
	//p_s1->number = 20203324;
	//strcpy(p_s1->name, "최종현");
	//p_s1->grade = 4.5;
	//
	//printf("%d\n", p_s1->day1.year);
	//printf("%d\n", p_s1->day1.month);
	//printf("%d\n", p_s1->day1.day);
	//printf("%d\n", p_s1->number);
	//printf("%s\n", p_s1->name);
	//printf("%f\n", p_s1->grade);
	
	//Student a = { 1,"최종현",0.5 }; // 초기화
	//
	//Student b;
	//b.number = 20203324;
	//b.grade = 2.5;
	//// b.name = a.name; // 불가능
	//strcpy(b.name, a.name);
	//
	//printf("%d %s %f\n", b.number, b.name, b.grade);
	//
	//Student* c = &b;
	//printf("%d %s %f\n", c->number,c->name,c->grade);
	//
	//
	//Student d = f(a);
	//
	//printf("%d %s %f\n", d.number, d.name, d.grade);
	//
	//Student e = d; // 구조체끼리는 복사가 가능하다. -> 위험한 복사이다.
	//
	//// 구조체에 포인터를 사용하여 쓰는것은 매우 조심해야 한다.
	//
	//printf("%d %s %f\n", e.number, e.name, e.grade);
	//// 배열을 선언하여 값이 같다고 표현 하려면 p1.x1==p2.x1 이렇게 표현해야한다. 
	// 
	//Student i;
	//Student j;
	//i.next = &j;
	//Student* p = &i;
	//p->number=30;
	//p->next->number = 20;
	//
	//
	//printf("%d %d", p->number, p->next->number);


	int* ptr = (int*)malloc(5 * sizeof(int));
	
	*ptr = 1;
	ptr++;
	printf("%d ,%p \n",ptr[0],ptr);
	*ptr = realloc(ptr, sizeof(int) * 7); // 7 = 2개가 더 필요할 경우,total 메모리사이즈
	// realloc이 생성되면 새로운 메모리가 잡힌다 그전에 ptr의 메모리안에 있는 값을 복사해서 사용된다.
	// 메모리 주소가 달라진다.하지만 값을 복사하니 보장이 된다.
	// 결과적으로 느림 
	
	printf("%d ,%p\n", *ptr, ptr);

	//Student* ptr = (Student*)calloc(5,10 * sizeof(Student));
	//
	//ptr->number = 10;
	//
	//printf("ptr[0] %d ptr[1] %d\n", ptr[0].number, ptr[1].number);


	return 0;
}