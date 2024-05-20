#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20


void fillFibonacci(int arr[], int n);

int main() {
    int arr[SIZE];

    // 계산되지 않은 값을 나타내기 위해 배열을 -1로 초기화
    // -1로 하는 이유는 피보나치 수열의 첫번째 값이 0이므로 배열의 인덱스 0번째의 값이랑
    // 혼동이 올 수 있음 그렇기 때문에 계산에 관계 없는 -1로 배열을 초기화 함으로써
    // 재귀함수를 호출할 수 있음
    for (int i = 0; i < SIZE; i++) {
        arr[i] = -1;
    }

    // 피보나치 수열로 배열 채우기
    fillFibonacci(arr, SIZE - 1);

   
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void fillFibonacci(int arr[], int n) {
    
    if (n == 0) {
        arr[n] = 0;
        return;
    }
    else if (n == 1) {
        arr[n] = 1;
        return;
    }

    // 이미 계산된 값이 있는 경우 반환
    if (arr[n] != -1) {
        return;
    }

    // 이전 두 값을 채우기 위해 재귀 호출
    fillFibonacci(arr, n - 1);
    fillFibonacci(arr, n - 2);

    // 현재 값을 계산
    arr[n] = arr[n - 1] + arr[n - 2];
}