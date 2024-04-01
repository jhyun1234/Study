#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int value;

	printf("정수형 int의 크기는 %zu \n", sizeof(int)); // -2,147,483,648 ~2,147,483,647
	printf("정수형 long의 크기는 %zu \n", sizeof(long));//-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
	printf("정수형 long long의 크기는 %zu \n", sizeof(long long));

	// int 와 long 의 차이점은 저장할 수 있는 데이터의 크기 표현할 수 있는 숫자의 범위이다.


	printf("\n 정수 입력(10진수) :\n");
	scanf("%d", &value);
	printf("%d는 10진수로 %d,8진수로 %#o ,16진수로 %#x이다.", value, value, value, value, value);

	printf("\n 정수 입력(16진수) :\n");
	scanf("%x", &value);
	printf("%d는 10진수로 %d,8진수로 %#o ,16진수로 %#x이다.", value, value, value, value, value);


	float fvalue = 1234567890.1234567891234567890;
	double dvalue = 1234567890.1234567891234567890;

	printf("\nfloat형 변수 =%.25f\n", fvalue); // 6개 정도의 유효숫자를 가질 수 있다 8번째 이후로는 정확한 값이 나오지 않는다.

	printf("\ndouble형 변수 =%.25lf\n", dvalue); // 15자리 정도의 유효숫자를 가질 수 있다. %.25lf는 25자리로 출력하라는 의미이다.


	// 부동 소수점 사용시 주의사항 

	float value1 = 0.1; // 2진법으로는 정확하게 나타낼 수 없는 값들이 있기 때문 0.1도 그중 하나
	printf("%.20f\n", value); // %.20f는 소수점 이하를 20자리로 출력하라는 의미


	// 부동 소수점 오차

	float a = 0.1f;
	float b = 0.2f;
	float c = a + b;
	printf("%f+%f=%.10f\n", a, b, c); // 오차값 0.3000000119가 출력된다.

	return 0;
}