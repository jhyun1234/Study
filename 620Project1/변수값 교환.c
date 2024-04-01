#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    int a, b, temp;

    temp = 10;
    a = 100;
    b = 50;

    temp = a;
    a = b;
    b = temp;
    printf("a=%d ,b=%d\n", a, b);

    return 0;
}