#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> // ǥ�� c ���̺귯���� �ƴ�
#include <stdlib.h> // �����޸𸮸� ����ϱ� ���� �����

// �����޸�(satic) �����Ͽ��� ����� ���Ѵ�.
// �����޸�(daymic) ��Ÿ���߿� ���� �Ҵ� ���� �� �ִ�.
// �迭�� ���� ������ �� �� ����.
// malloc(�ʿ��� ����Ʈ ���� ���´�)
// malloc�� heap �޸𸮿� ����ȴ�.
// �ʿ��� ������ Ÿ���� ������Ѵ�.
// stack ��������
// ���� ������ ����ϸ� ���Ḯ��Ʈ�� ������ �����ϴ�

// ' ' ���� " " ���ڿ� ���ڿ��� ������ ���ӵ� �ּҸ� ������.
// ���ڿ��� ������ \0 NULL���ڰ� ����.
// ���۰� �ִٸ� enter�� ġ���ʴ��̻� �� ������ �������� �ʴ´�.
// ���۰� ���ٸ� �Է¹����� �ٷ� �����
// ���Ḯ��Ʈ Queue, stack 
// ���Ḯ��Ʈ�� ���ӵ� �޸𸮰� �ƴϾ �ȴ�.
// �����ʹ� ���� Ÿ���� �����ؾ��Ѵ�.
// 
// typedef <data_type> <user_type>
typedef struct day
{
	int year;
	int month;
	int day;

}day2; // ����ü�� �̸��� ���°��� ����
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
	return b; // �޸� �ȿ� �ִ� �����͸� main d�� �����ϴ°��̴�.
}

// union ���� ū �޸� ����� ������ 
// IP�ּҰ��� ������ �� union�� �����ϰ� ���ȴ�.
//{
	//unsigned int ipint;
	//unsigned short b[2];
	//unsigned char[4];
  // ��ü 4����Ʈ �̱⶧���� �� ����ü�� 4����Ʈ�� ������.
//}

// enum�� �̿��ؼ� �����ϸ� Ư�� ���� �ʱ�ȭ ����������
// ù ��° ������ �ڵ����� 0�� �ȴ�.
// �ٸ� ���� �ʱ�ȭ�ص� �ȴ�.
// ���ڸ� ���ڷ� �ٲ� �� �ִ�. -> �������� ����

int main_Struct()
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

	//struct student s1;
	//struct student* p_s1 = &s1; // �����ͷ� ����ü�� �ּҸ� �����ؾ��Ѵ�.
	//
	//p_s1->day1.year = 2024;
	//p_s1->day1.month = 6;
	//p_s1->day1.day = 4;
	//p_s1->number = 20203324;
	//strcpy(p_s1->name, "������");
	//p_s1->grade = 4.5;
	//
	//printf("%d\n", p_s1->day1.year);
	//printf("%d\n", p_s1->day1.month);
	//printf("%d\n", p_s1->day1.day);
	//printf("%d\n", p_s1->number);
	//printf("%s\n", p_s1->name);
	//printf("%f\n", p_s1->grade);
	
	//Student a = { 1,"������",0.5 }; // �ʱ�ȭ
	//
	//Student b;
	//b.number = 20203324;
	//b.grade = 2.5;
	//// b.name = a.name; // �Ұ���
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
	//Student e = d; // ����ü������ ���簡 �����ϴ�. -> ������ �����̴�.
	//
	//// ����ü�� �����͸� ����Ͽ� ���°��� �ſ� �����ؾ� �Ѵ�.
	//
	//printf("%d %s %f\n", e.number, e.name, e.grade);
	//// �迭�� �����Ͽ� ���� ���ٰ� ǥ�� �Ϸ��� p1.x1==p2.x1 �̷��� ǥ���ؾ��Ѵ�. 
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
	*ptr = realloc(ptr, sizeof(int) * 7); // 7 = 2���� �� �ʿ��� ���,total �޸𸮻�����
	// realloc�� �����Ǹ� ���ο� �޸𸮰� ������ ������ ptr�� �޸𸮾ȿ� �ִ� ���� �����ؼ� ���ȴ�.
	// �޸� �ּҰ� �޶�����.������ ���� �����ϴ� ������ �ȴ�.
	// ��������� ���� 
	
	printf("%d ,%p\n", *ptr, ptr);

	//Student* ptr = (Student*)calloc(5,10 * sizeof(Student));
	//
	//ptr->number = 10;
	//
	//printf("ptr[0] %d ptr[1] %d\n", ptr[0].number, ptr[1].number);


	return 0;
}