#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> // 표준 c 라이브러리가 아님

// ' ' 문자 " " 문자열 문자열은 무조건 연속된 주소를 가진다.
// 문자열의 끝에는 \0 NULL문자가 들어간다.
// 버퍼가 있다면 enter를 치지않는이상 그 다음을 실행하지 않는다.
// 버퍼가 없다면 입력받은걸 바로 출력함


struct day
{
	int year;
	int month;
	int day;

};
struct student
{
	struct day day1;
	int number;
	char name[10];
	double grade;
	
};
struct Army
{
	struct Army* next;
};

int main()
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

	struct student s1;
	struct student* p_s1 = &s1; // 포인터로 구조체의 주소를 저장해야한다.

	p_s1->day1.year = 2024;
	p_s1->day1.month = 6;
	p_s1->day1.day = 4;
	p_s1->number = 20203324;
	strcpy(p_s1->name, "최종현");
	p_s1->grade = 4.5;

	printf("%d\n", p_s1->day1.year);
	printf("%d\n", p_s1->day1.month);
	printf("%d\n", p_s1->day1.day);
	printf("%d\n", p_s1->number);
	printf("%s\n", p_s1->name);
	printf("%f\n", p_s1->grade);
	
	
	// 배열을 선언하여 값이 같다고 표현 하려면 p1.x1==p2.x1 이렇게 표현해야한다.  


	return 0;
}