#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> // ǥ�� c ���̺귯���� �ƴ�

// ' ' ���� " " ���ڿ� ���ڿ��� ������ ���ӵ� �ּҸ� ������.
// ���ڿ��� ������ \0 NULL���ڰ� ����.
// ���۰� �ִٸ� enter�� ġ���ʴ��̻� �� ������ �������� �ʴ´�.
// ���۰� ���ٸ� �Է¹����� �ٷ� �����


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
	//int c = _getch();  // �Է¹����� �ٷ� �����
	//printf("%c", c);

	//char name[100];
	//char address[100];
	//printf("�̸��� �Է��Ͻÿ�");
	////scanf("%s", name);
	//gets_s(name, sizeof(name));
	//printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ�");
	//gets_s(address, sizeof(address));
	////scanf("%s", address); // �����̽��ٸ� ������ ���� ó���� �ȴ�.
	//printf("�ȳ��ϼ���, % s�� ��� % s�� \n", address, name);
   
	
	//struct student s1;
	//
	//s1.number = 20203324;
	//strcpy(s1.name, "������"); // �迭�� ���ڸ� ���� ���� strcpy�� �����
	//s1.grade = 4.0;
	//
	//printf("%d\n%s\n%f\n", s1.number, s1.name, s1.grade);

	struct student s1;
	struct student* p_s1 = &s1; // �����ͷ� ����ü�� �ּҸ� �����ؾ��Ѵ�.

	p_s1->day1.year = 2024;
	p_s1->day1.month = 6;
	p_s1->day1.day = 4;
	p_s1->number = 20203324;
	strcpy(p_s1->name, "������");
	p_s1->grade = 4.5;

	printf("%d\n", p_s1->day1.year);
	printf("%d\n", p_s1->day1.month);
	printf("%d\n", p_s1->day1.day);
	printf("%d\n", p_s1->number);
	printf("%s\n", p_s1->name);
	printf("%f\n", p_s1->grade);
	
	
	// �迭�� �����Ͽ� ���� ���ٰ� ǥ�� �Ϸ��� p1.x1==p2.x1 �̷��� ǥ���ؾ��Ѵ�.  


	return 0;
}