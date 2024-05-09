#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 15

int main(void)
{
	int i, k;
	int list[SIZE];


	printf("배열의 요소를 입력하세요:\n");
	for (i = 0; i < SIZE; i++) {
		printf("list[%d]: ", i);
		scanf("%d", &list[i]);
	}

	for (k = 0; k < SIZE; k++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (list[i] > list[i + 1]) {
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
	}
	printf("정렬된 배열:\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}
	return 0;
}