#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>


// �Լ��� ���� ���� ��ȯ��, �Լ��̸�, �Ű����� parameter �� �Է��ؾ��Ѵ�. ������ int x, int y �̷��� �����

// stack -> Last In First Out
// Queue -> Last In Last Out , First In First Out 

int add(int x,int y)
{
	int result;
	result = x+y;
	return result; 
	
	 

}
int add1()
{
	int x = 5;
	return x; // X�� ��ȯ�ϴ°� �ƴ϶� x�� �޸𸮿� ����ִ� ������ ���� ��ȯ�Ѵ�.
	return 5; // �Ȱ���
}
// �ٸ� �޸��̱⶧���� �����͸� ���� �ʴ��̻� ���� �������ʴ´�.
int main_1()
{
	
	// printf("%d ", add(4, 4));
	int x = 10;
	int y = 20;
	int value=add(10,20); // int value(10,20) �����ϴ� ������ �޸𸮰� �ٸ��� �Լ��� ���� �����ؼ� �����´�.
	printf("%d ", value);   
	

	return 0;
}