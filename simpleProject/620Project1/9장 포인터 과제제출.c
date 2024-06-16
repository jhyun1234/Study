#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROWS 3
#define COLS 3
#define SIZE 5
void modify(int *value);
int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept);
void swap(int* x, int* y);
void sub(int a[], int b);
void set_pointer(char** q);
int add(int x, int y);
int subtraction(int x, int y);
int multipl(int x, int y);
int div(int x, int y);
void menu();
double get_total_avg(int m[][COLS]);
void memzero(void* ptr, size_t len);
double get_array_avg(int values[], int n);
void print_array(int values[], int n);
int main_pointer()
{
	int a = 10;
	char b = 69;
	float c = 21.3;
	double d = 25.4;
	printf("�ּ� : %p\n", &a);
	printf("�ּ� : %p\n", &b);
	printf("�ּ� : %p\n", &c);
	printf("�ּ� : %p\n", &d);

	printf("\n");
	int* e = &a;
	printf("%d\n", *e);
	printf("���� a�� �ּ� %p\n", &a);
	printf("�������� �� %p\n", e);
	printf("���� a�� �� %d\n", a);
	printf("������ e �� ����Ű�� �� %d\n", *e);


	*e = 20;
	printf("�����͸� �̿��� �ٲ� �� %d\n", *e);
	printf("\n");

	char* pc = NULL;
	int* pi = NULL;
	double* pd = NULL;
	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;

	printf("pc=%u, pc+1=%u, pc+2=%u\n", pc, pc + 1, pc + 2);
	printf("pi=%u, pi+1=%u, pi+2=%u\n", pi, pi + 1, pi + 2);
	printf("pd=%u, pd+1=%u, pd+2=%u\n", pd, pd + 1, pd + 2);

	printf("\n");
	char f = 69;
	char* pf = &f;
	printf("f=%c, pf=%p\n", f, pf);

	(*pf)++; // ���� 1����
	printf("f=%c, pf=%p\n", f, pf);

	*pf++; // �ּҰ��� 1����
	printf("f=%c, pf=%p\n", f, pf);

	printf("\n");
	int data = 0x0A0B0C0D;

	char* pt = (char*) & data;
	for (int i = 0; i < 4; i++)
	{
		printf("*(pd+%d)=%02X\n", i, *(pt + i));
	}
	printf("\n");

	int g = 10;
	modify(&g);
	printf("g=%d\n", g);
	printf("\n");

	float h, i;
	if (get_line_parameter(3, 3, 6, 6, &h, &i) == -1)
		printf("����\n");
	else
		printf("����� %.2f\n y������ %.2f\n", h, i);

	printf("\n");

	int j = 10, k = 30;
	printf("swap�Լ� ȣ���� %d %d\n", j, k);
	swap(&j, &k);
	printf("swap�Լ� ȣ���� %d %d\n", j, k);

	printf("\n");

	int l[] = { 10,20,30,40,50 };
	printf("�迭�� �ּ� %p\n", l);
	printf("ù ��° �ε����� �ּ� %p\n", &l[0]);

	int n[] = { 1,2,3,4,5 };
	int* pn = n;
	printf("n[0]=%d,n[0]=%d,n[0]=%d\n", n[0], n[1], n[2]);
	printf("pn[0]=%d,pn[0]=%d,pn[0]=%d\n", pn[0], pn[1], pn[2]);


	int m[3] = { 4,5,6 };
	printf("%d %d %d\n", m[0], m[1], m[2]);
	sub(m, 3);
	printf("%d %d %d\n", m[0], m[1], m[2]);

	printf("\n");

	int o = 100;
	int* po = &o;
	int** qo = &po;
	*po = 200;
	printf("o=%d\n", o);
	**qo = 300;
	printf("o=%d\n", o);

	printf("\n");

	char* p = NULL;
	set_pointer(&p);
	printf("������ ��� : %s\n", p);

	printf("\n");


	int arr1[] = { 1,2,3 };
	int arr2[] = { 4,5,6 };
	int arr3[] = { 7,8,9 };
	int* arr[] = { arr1,arr2,arr3 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	int q;
	int (*pq)(int, int);
	pq = add;
	q = pq(10, 20);
	printf("add�Լ��� �����ͷ� ȣ�� %d\n", q);

	pq = subtraction;
	q = pq(10, 20);
	printf("sub3�Լ��� �����ͷ� ȣ�� %d\n", q);

	printf("\n");

	/*
	int choice, result, x, y;
	int(*ps[4])(int, int) = {add,subtraction,multipl,div};

	while (1)
	{

		menu();
		printf("���ϴ� ����� �����ϼ���.");
		printf("\n");
		scanf("%d", &choice);

		if (choice < 0 || choice >=4)
			break;
		printf("2���� ������ �Է��ϼ���.");
		printf("\n");
		scanf("%d %d", &x, &y);

		result = ps[choice](x, y); // �Լ� �����͸� �̿��ؼ� �Լ� ȣ��
		printf("������ =%d\n", result);

	}
	*/

	int score[ROWS][COLS] = {
		{10,20,30},
		{40,50,60},
		{70,80,90}
	};

	double avg = get_total_avg(score);
	printf("��ռ���=%.2f\n", avg);

	printf("\n");
	char u[] = "���̾��� ���� ����";
	char v[] = "���� �׻� ���ġ";
	const char* pu = u;
	char *const pv = u;

	//p[3]='��' p�� ����Ű�� ���� ������ ������ �� ����.

	pu = v; // ������ pu�� �����ϴ�.

	pv[3] = '��'; // pv�� ����Ű�� ���� ������ ���� �� �� �ִ�.

	// pv=v; ������ pv�� ������ �Ұ����ϴ�.

	char w[10];
	memzero(w, sizeof(w));

	int r[10];
	memzero(r, sizeof(r));

	double s[10];
	memzero(s, sizeof(s));

	int data2[SIZE] = { 10,20,30,40,50 };
	double result;
	print_array(data2, SIZE);
	result = get_array_avg(data2, SIZE);
	printf("�迭 ���ҵ��� ��� :%f\n", result);



	return 0;
}
void modify(int *value)
{
	*value = 100;
}

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

void swap(int *x, int *y)
{
	int *temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void sub(int a[], int b)
{
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
}

void sub2(int* b, int size) // sub�� ������ ���
{
	*b = 1;
	*(b + 1) = 2;
	*(b + 2) = 3;
}

void set_pointer(char** q)
{
	*q = "����� �ൿ�� �Ǿ�� �ȵȴ�.";
}

int add(int x, int y)
{
	return x + y;
}

int subtraction(int x, int y)
{
	return x - y;
}

int multipl(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("==========================\n");
	printf("0.����\n");
	printf("1.����\n");
	printf("2.����\n");
	printf("3.������\n");
	printf("4.����\n");
	printf("==========================\n");

}

double get_total_avg(int m[][COLS])
{

	int* p=NULL, * endp=NULL;
	double sum = 0.0;

	p = &m[0][0];  // p�� 0���� ���� �ּ�
	endp = &m[ROWS - 1][COLS - 1]; // endp�� (ROWS-1)���� ���� �ּ�

	while (p <= endp)  // p�� ���� �ּҺ��� �۰ų� ������
		sum += *p++;  // sum�� p�� ����Ű�� �� ���� 

	sum /= ROWS * COLS; // ��� ���
	return sum;

}

void memzero(void* ptr, size_t len)
{
	for (; len > 0; len--) {
		*(char*)ptr = 0;
	}
}

double get_array_avg(int values[], int n)
{
	double sum = 0.0;

	for (int i = 0; i < n; i++)
	{
		sum += values[i];
	}
	return sum / n;

}

void print_array(int values[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", values[i]);
	}

}


