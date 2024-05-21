#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
// ������: �ٸ� ������ �ּҸ� ������ ����
// int a=10;
// ���� : int *b;
// b=&a; -> a��� ������ �ּ� ���� &-> �ּ� ������  
// pointer -> reference : �ٸ� ������ �ּҸ� ���� &�� ��� ���� ���� �Ǿ���� b=&a;
//         -> dereference(��������): ����� �ּ��� ����(data)�� acces printf("%d",*b);
// b pointer�� �̿��ؼ� a ������ read�� write�� �� �� �ִ�.
// �޸𸮴� byte������ �̷������.
// int *z=g; int *g=p int *p; p=&a -> �� a�� ���� acces �� �� �ִ�.
// �Լ��� int ff(int *b) �̷��� ������Ѵ�.f(&a)
// ���� �����͸� �ٸ� ������ �����ϴ°��� Pointer�̴�.
// �������� ���� 1���� ( ) 2���� ++ -- 3���� *
// v=*++p , v=++*p p�� �����ִ°ͺ��� ����
// v=*++p p�� �ּҰ��� 1�� ���� ��Ų �� v�� �����Ѵ�. -> �ּҰ� ����
// v=++*p p�� ����Ű�� ���� ������ �� ������Ų �� v�� �����Ѵ�. -> �� ����
// v=*p++ -> ���� p�� ����Ű�� ���� v�� ������ �ڿ� p�� �����Ѵ� �ּҰ� �����Ѵ�+1. �������̱⶧�� -> �ּҰ� ����
// v=(*p)++ -> p�� ����Ű�� ���� v�� ������ �Ŀ� p�� ����Ű�� ���� �����Ѵ�.�ּҰ� �����ϴ°� �ƴ�  -> �� ����
// *p=2 �̸� v���� 2�� ���Եȴ�. �� �� *p���� 3�� �ȴ�.
// �����ͷ� ����ȯ�� �� �� �ִ�. 
void printArray(int arr[], int size);
void print_p(int x, int* p);
void print_arr(int a[]);
int main_ClassPointer()
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
	

	int arr[] = { 1,3,5,7,9 };

	int* ptr = arr; // p==&arr[0] 
	printf("P = %u\n",(unsigned int)ptr);

	int v = *ptr++;
	
	print_p(v, ptr); // p-> 2�� ° �ε����� �ּ� �� 3 �ּҰ� ����
	
	v = (*ptr)++;  // ���� ����
	print_p(v, ptr);
	print_arr(arr);

	v = *++ptr; // 3�� �ּҸ� ����Ű�� �ش簪�� ���� �ּҰ� ���� �� �� ���� ����
	print_p(v, ptr);
	print_arr(arr);

	v = ++ * ptr; // 5�� 6���� ���� �ٲ� �ּҰ��� ������ ���� 
	print_p(v, ptr);
	print_arr(arr);

	unsigned long long data = 0x0A0B0C0D0E0F1011; // double ������ ������ ���� �� ����? �˻�
	char* pc2;                                    // �������� ������
	
	pc2 = (char*)&data;
	for (int i = 0; i < 8; i++)
	{
		printf("*(pc+%d)=%02X\n", i, *(pc2 + i)); // ������ �ݴ�� ������. 
		// ������ ��Ʋ �ε��
		// ����ζ�� �� �ε��
		// �� �ε������ ���յǾ���.
	}
	




	return 0;
}
void printArray(int arr[], int size) {
	printf("�Լ� ������ �迭�� �ּ�: %p\n", (void*)arr);
	printf("�Լ� ������ �迭�� ����Ű�� �������� �ּ�%p\n", (void*)&arr);
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