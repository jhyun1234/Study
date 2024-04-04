#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>





int main() 
{
    int num;
    scanf("%d", &num);

    printf("%o %#o\n", num, num);
    printf("%x %#x\n", num, num);
    
    return 0;
}


