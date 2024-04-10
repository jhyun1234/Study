#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>




int main()
{	
	int x = 16;  // 1000
	int y = 2;   // 0010

	printf("%08X & %08X =%08X, %d\n", x, y, x & y, x & y); // 0000 0
	printf("%08X | %08X =%08X, %d\n" ,x, y, x | y, x | y); // 1010 18
	printf("%08X ^ %08X =%08X, %d\n", x, y, x ^ y, x ^ y); // 1010 18
	printf("~%08X =%08X, %d\n", x, ~x, ~x); // ffffffef ,-17

 	int a = 15;  //1111

	printf("%d << 1=%d\n", a, a << 1); // 11110  16 8 4 2 = 30
	printf("%d >> 1=%d\n", a, a >> 1); //  0111     4 2 1 = 7

	int b = 64; // 1000000

	b = ~b;  // NOT 연산자로 1의보수를 취한다. 0111111
	b= b + 0x01; // 1을 더한다. 1000001 
	printf("b=%d\n", b); // -64

	return 0;
}
