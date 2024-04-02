#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	 char c = 'A';
	 
	 printf("%c의 아스키 코드 =%d\n", c, c); // 문자와 아스키 코드값 출력
	 printf("%c의 아스키 코드 =%d\n", c+1, c+1); // 문자와 아스키 코드값 출력
	 printf("%c의 아스키 코드 =%d\n", c+2, c+2); // 문자와 아스키 코드값 출력
	 
	 
	 char c1;
	 printf("문자를 입력하시오");
	 
	 c = getchar(); // 함수는 한 번에 하나의 문자만 입력받는다. 
	                // 문자열을 입력받기 위해서는 여러 번 호출하거나 다른 함수를 사용해야 한다.
	 
	 printf("%c의 아스키코드 =%d\n", c, c);

	
	return 0;

	
}