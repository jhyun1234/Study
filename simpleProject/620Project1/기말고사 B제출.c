#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int StringLength(char str[]);
char* concatenateStrings(char* str1, char* str2);
void updateSalary(struct Employee* e, float newSalary);
struct Student* createStudent(char* name, int age, float grade);

struct Employee
{
	int id;
	char name[20];
	float salary;
	struct Employee* emp;
	
};
struct Student
{
	char name[20];
	int age;
	float grade;
	
};

int main()
{
	// 1�� ����
	printf("1�� ����\n");
	printf("���ڿ� �Է�\n");
	char chararr[20];
	StringLength(chararr);
	printf("\n");
    
	// 2�� ����
	printf("2�� ����\n");
	char* ptr = (char*)malloc(sizeof(char));
	char arr[20];
	char arr1[20];
	char* concatenateStrings(char arr,char arr1);
	// �����Ұ�
	free(ptr);

	printf("\n");

	// 3�� ����
	printf("3�� ����\n");
	struct Employee emp;
	struct Employee* emp2 = &emp;
	updateSalary(emp2, emp2->salary);
	
	printf("\n");
	printf("\n");
    // 4�� ����
	printf("4�� ����\n");
	struct Student s1;
	struct Student* ptrs1 = &s1;
	struct Student * ptrs2 = (struct Student*)malloc(sizeof(struct Student));
	createStudent(ptrs1->name, ptrs1->age, ptrs1->grade);

	free(ptrs2);


	return 0;
}
int StringLength(char str[])
{
	scanf("%s", &str);
	
}
char* concatenateStrings(char* str1, char* str2)
{
	char arr[20] = { "Hello" };
	char arr1[20] = { "World" };


}
void updateSalary(struct Employee* e, float newSalary)
{

	struct Employee emp;
	struct Employee *emp2 = &emp;
	emp2->id = 2024;
	emp2->salary = 5000000;
	strcpy(emp2->name, "ȫ�浿");
	printf("id : %d\n", emp2->id);
	printf("�̸� : %s\n", emp2->name);
	printf("�޿� : %f\n", emp2->salary);
}

struct Student* createStudent(char* name, int age, float grade)
{

	struct Student s1;
	struct Student* ptrs1 = &s1;
	strcpy(ptrs1->name, "¯��");
	ptrs1->age = 5;
	ptrs1->grade = 3.6;
	printf("�̸� : %s\n", ptrs1->name);
	printf("���� : %d\n", ptrs1->age);
	printf("���� : %f\n", ptrs1->grade);

	printf("\n");
	strcpy(ptrs1->name, "ö��");
	ptrs1->age = 5;
	ptrs1->grade = 4.3;
	printf("�̸� : %s\n", ptrs1->name);
	printf("���� : %d\n", ptrs1->age);
	printf("���� : %f\n", ptrs1->grade);

	printf("\n");
	strcpy(ptrs1->name, "�ͱ�");
	ptrs1->age = 5;
	ptrs1->grade = 3.7;
	printf("�̸� : %s\n", ptrs1->name);
	printf("���� : %d\n", ptrs1->age);
	printf("���� : %f\n", ptrs1->grade);

	printf("\n");
	strcpy(ptrs1->name, "����");
	ptrs1->age = 5;
	ptrs1->grade = 3.9;
	printf("�̸� : %s\n", ptrs1->name);
	printf("���� : %d\n", ptrs1->age);
	printf("���� : %f\n", ptrs1->grade);

	return;
}