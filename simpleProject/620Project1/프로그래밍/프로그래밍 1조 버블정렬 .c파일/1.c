#include <stdio.h>
#define SIZE 10

int main()
{
    int i, k;
    int list[SIZE] = { 10, 20, 4, 27, 45, 31, 1, 100, 24, 33 };

    for (k = 0; k < SIZE; k++) {
        for (i = 0; i < SIZE - 1; i++) {
            if (list[i] > list[i + 1]) {
                int tmp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = tmp;
            }
        }
    }
    for (i = 0; i < SIZE; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}