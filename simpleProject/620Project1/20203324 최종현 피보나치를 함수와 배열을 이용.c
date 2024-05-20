#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20


void fillFibonacci(int arr[], int n);

int main() {
    int arr[SIZE];

    // ������ ���� ���� ��Ÿ���� ���� �迭�� -1�� �ʱ�ȭ
    // -1�� �ϴ� ������ �Ǻ���ġ ������ ù��° ���� 0�̹Ƿ� �迭�� �ε��� 0��°�� ���̶�
    // ȥ���� �� �� ���� �׷��� ������ ��꿡 ���� ���� -1�� �迭�� �ʱ�ȭ �����ν�
    // ����Լ��� ȣ���� �� ����
    for (int i = 0; i < SIZE; i++) {
        arr[i] = -1;
    }

    // �Ǻ���ġ ������ �迭 ä���
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

    // �̹� ���� ���� �ִ� ��� ��ȯ
    if (arr[n] != -1) {
        return;
    }

    // ���� �� ���� ä��� ���� ��� ȣ��
    fillFibonacci(arr, n - 1);
    fillFibonacci(arr, n - 2);

    // ���� ���� ���
    arr[n] = arr[n - 1] + arr[n - 2];
}