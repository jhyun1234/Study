#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ������: �ٸ� ������ �ּҸ� ������ ����
// int a=10;
// ���� : int *b;
// b=&a; -> a��� ������ �ּ� ���� &-> �ּ� ������  
// pointer -> reference : �ٸ� ������ �ּҸ� ���� &�� ��� ���� ���� �Ǿ���� b=&a;
//         -> dereference : ����� �ּ��� ������ acces printf("%d",*b);
// b pointer�� �̿��ؼ� a ������ read�� write�� �� �� �ִ�.
// �޸𸮴� byte������ �̷������.
void printArray(int arr[], int size);
int main()
{
	int a = 10;
	int* b;
	b = &a;
	int* g = b;
	printf("���� a�� �� : %d\n", a);
	printf("���� a�� �ּ� :%p\n", &a);
	printf("������ ����b�� ����Ű�� �ּ� :%p\n", b);
	printf("������ ����b�� �������ִ� ���� �ּ�:%p\n", &b);
	*b = 2;
	printf("������ b�� �ٲ� ������ �� :%d\n", *b); // b�� ����Ű�� �ּ��� ���� ��ȯ�Ѵ�.
	printf("������ b�� �ٲ� a������ �� :%d\n", a);
	*g = 5;
	printf("������ g�� �ٲ� a�� �� :%d\n", a);

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

	printf("main �Լ� ������ �迭�� �ּ�: %p\n", (void*)myArray);
	printf("main �Լ� ������ �迭�� ����Ű�� �������� �ּ� %p\n", (void*)&myArray);
	// �迭�� �Լ��� ����
	printArray(myArray, 5);

	char chr = 'a';
	char* pc = &chr;
	pc = pc + 1; // ���� �޸��� �ּҸ� �������ؼ� ���� ������ �ؾ���
	printf("%p\n",&chr);
	printf("%p\n",pc);
	printf("%c %c\n", chr, pc);

	return 0;
}
void printArray(int arr[], int size) {
	printf("�Լ� ������ �迭�� �ּ�: %p\n", (void*)arr);
	printf("�Լ� ������ �迭�� ����Ű�� �������� �ּ�%p\n", (void*)&arr);
	for (int i = 0; i < size; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}