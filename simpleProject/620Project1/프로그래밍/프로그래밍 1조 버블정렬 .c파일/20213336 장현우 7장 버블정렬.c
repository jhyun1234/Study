#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main()
{

    int list[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &list[i]);
    }

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                int tmp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = tmp;
            }
        }
    }
    for (int j = 0; j < SIZE; j++)
    {
        printf("%d\n", list[j]);
    }

    return 0;
}