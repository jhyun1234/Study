#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

#define MAXARR 100000000
int arr1[MAXARR];
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
// �����͸� ������ ������ �ʱ�ȭ �������� NULL�� �ʱ�ȭ�� �ݵ�� �ؾ��Ѵ�. C++ nullptr
// �迭�� �̸��� ������ó�� ����� �� ������ ���� ������ �� ����. const
// API�� ����ϸ� �����͸� ���°� ����
// ����List �����ʹ� �������ִ� �޸𸮸� ���� �� �����ϰ� ���ȴ�.
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
	if (get_line_parameter(3, 3, 6, 6, &s, &y) == -1) // slope ���� y���� y��� ������ �� y=ax+b ���� b��
		                                              // b=(y-ax)
		printf("����\n");                             // yintercept y����
	else
		printf("����� %.2f \n y������ %.2f\n", s, y);

	int* pi3 = add3(3, 4);
	printf("%d\n", *pi3);

	int n = 10, l = 20;
	printf("swap()�Լ� ȣ�� �� h=%d,l=%d\n", n, l);
	swap(&n, &l);
	printf("swap()�Լ� ȣ�� �� h=%d,l=%d\n", n, l);


	//int i;
	//double* pd4;
	//pd4 = &i;
	//*pd4 = 36.5;
	//printf("%f", *pd4);

	int a3[] = { 10,2,30,4,50 };
	int b3[] = { 1,20,3,40,5 };
	int* pi4 = a3;
	printf("�迭�� �̸�: %p\n", a3);
	printf("ù ��° ����: %p\n", &a3[0]);
	printf("pi4 = %p\n", pi4);
	printf("%d\n", *a3);
	printf("%d\n", *a3+1); //a3[0]�� ���� 1�� ���ϰ� ����ϴ� ���
	printf("%d\n", *(a3+2)); // a3[2]�� ���� ����ϴ� ���
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", pi4[i]);  // *(a3+i)�� ����
	}
	printf("\n");

	pi4 = b3; // a=c; c=a; Xs
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", pi4[i]);  // pi4[i]�� ����
	}
	printf("\n");


	int b4 = 10;
	int* ptr3 = &b4;
	printf("%d\n", ptr3[0]); // ���������� ���ӵ� �޸𸮰� �ƴϱ� ������ �̷��� ������� �ʴ´�.


	

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

	// ���� ������
	
	// int i=100; 
	// int*p=&i;
	// int **q=&p;
	// ' ' �ƽ�Ű �ڵ� �� " " ���ڿ��� ù���� �ּ� ��

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

void modify(int *value)
{
	*value = 99; // �Ű� ������ �����Ѵ�.
}
void modify1(int value)
{
	value = 99; // �Ű� ������ ���Ͽ� ������ �����Ѵ�.
}
// ����� y������ ����Ѵ�.
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
	return &result;  //���������� �Լ� ȣ��������Ǹ� ������Ƿ� ���������� �ּҸ� ��ȯ�ϸ� �ȵ˴ϴ�.
	
}

void swap(int* px, int* py)
{

	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
	
}

