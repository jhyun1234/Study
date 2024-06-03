#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> // 표준 c 라이브러리가 아님

// ' ' 문자 " " 문자열 문자열은 무조건 연속된 주소를 가진다.
// 문자열의 끝에는 \0 NULL문자가 들어간다.
// 버퍼가 있다면 enter를 치지않는이상 그 다음을 실행하지 않는다.
// 버퍼가 없다면 입력받은걸 바로 출력함
int main()
{
	//int c = _getch();  // 입력받은걸 바로 출력함
	//printf("%c", c);

	char name[100];
	char address[100];
	printf("이름을 입력하시오");
	//scanf("%s", name);
	gets_s(name, sizeof(name));
	printf("현재 거주하는 주소를 입력하시오");
	gets_s(address, sizeof(address));
	//scanf("%s", address); // 스페이스바를 누르는 순간 처리가 된다.
	printf("안녕하세요, % s에 사는 % s씨 \n", address, name);

	return 0;
}