#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // �����޸𸮸� ����ϱ� ���� �����

// �����޸�(satic) �����Ͽ��� ����� ���Ѵ�.
// �����޸�(daymic) ��Ÿ���߿� ���� �Ҵ� ���� �� �ִ�.
// �迭�� ���� ������ �� �� ����.
// malloc(�ʿ��� ����Ʈ ���� ���´�)
// malloc�� heap �޸𸮿� ����ȴ�.
// �ʿ��� ������ Ÿ���� ������Ѵ�.
// stack ��������
// 

int main_struct()
{
	int* score=(int*)malloc(100*sizeof(int) /*== 400*/ );


	// ����ü�� �����޸𸮷� ����� �� �ִ�.
	free(score);



	return 0;
}