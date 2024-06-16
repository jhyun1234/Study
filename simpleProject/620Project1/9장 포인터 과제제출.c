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
	printf("주소 : %p\n", &a);
	printf("주소 : %p\n", &b);
	printf("주소 : %p\n", &c);
	printf("주소 : %p\n", &d);

	printf("\n");
	int* e = &a;
	printf("%d\n", *e);
	printf("변수 a의 주소 %p\n", &a);
	printf("포인터의 값 %p\n", e);
	printf("변수 a의 값 %d\n", a);
	printf("포인터 e 가 가리키는 값 %d\n", *e);


	*e = 20;
	printf("포인터를 이용해 바뀐 값 %d\n", *e);
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

	(*pf)++; // 값을 1증가
	printf("f=%c, pf=%p\n", f, pf);

	*pf++; // 주소값을 1증가
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
		printf("에러\n");
	else
		printf("기울기는 %.2f\n y절편은 %.2f\n", h, i);

	printf("\n");

	int j = 10, k = 30;
	printf("swap함수 호출전 %d %d\n", j, k);
	swap(&j, &k);
	printf("swap함수 호출후 %d %d\n", j, k);

	printf("\n");

	int l[] = { 10,20,30,40,50 };
	printf("배열의 주소 %p\n", l);
	printf("첫 번째 인덱스의 주소 %p\n", &l[0]);

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
	printf("오늘의 충고 : %s\n", p);

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
	printf("add함수를 포인터로 호출 %d\n", q);

	pq = subtraction;
	q = pq(10, 20);
	printf("sub3함수를 포인터로 호출 %d\n", q);

	printf("\n");

	/*
	int choice, result, x, y;
	int(*ps[4])(int, int) = {add,subtraction,multipl,div};

	while (1)
	{

		menu();
		printf("원하는 계산을 선택하세요.");
		printf("\n");
		scanf("%d", &choice);

		if (choice < 0 || choice >=4)
			break;
		printf("2개의 정수를 입력하세요.");
		printf("\n");
		scanf("%d %d", &x, &y);

		result = ps[choice](x, y); // 함수 포인터를 이용해서 함수 호출
		printf("연산결과 =%d\n", result);

	}
	*/

	int score[ROWS][COLS] = {
		{10,20,30},
		{40,50,60},
		{70,80,90}
	};

	double avg = get_total_avg(score);
	printf("평균성적=%.2f\n", avg);

	printf("\n");
	char u[] = "어이없는 날의 연속";
	char v[] = "나는 항상 사고뭉치";
	const char* pu = u;
	char *const pv = u;

	//p[3]='이' p가 가리키는 곳의 내용을 변경할 수 없다.

	pu = v; // 하지만 pu는 가능하다.

	pv[3] = '망'; // pv가 가리키는 곳의 내용은 변경 할 수 있다.

	// pv=v; 하지만 pv는 변경이 불가능하다.

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
	printf("배열 원소들의 평균 :%f\n", result);



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

void sub2(int* b, int size) // sub과 동일한 방법
{
	*b = 1;
	*(b + 1) = 2;
	*(b + 2) = 3;
}

void set_pointer(char** q)
{
	*q = "기분이 행동이 되어서는 안된다.";
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
	printf("0.덧셈\n");
	printf("1.뺄셈\n");
	printf("2.곱셈\n");
	printf("3.나눗셈\n");
	printf("4.종료\n");
	printf("==========================\n");

}

double get_total_avg(int m[][COLS])
{

	int* p=NULL, * endp=NULL;
	double sum = 0.0;

	p = &m[0][0];  // p는 0행의 시작 주소
	endp = &m[ROWS - 1][COLS - 1]; // endp는 (ROWS-1)행의 종료 주소

	while (p <= endp)  // p가 종료 주소보다 작거나 같으면
		sum += *p++;  // sum에 p가 가리키는 값 누적 

	sum /= ROWS * COLS; // 평균 계산
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


