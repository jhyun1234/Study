#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	// char c='A'; //������ ���� c ���� ���� A�� ����
	// int i = 7; // ������ ���� i ���� ���� 7�� ����
	// double interet_rate = 0.001; // �ε��Ҽ����� ���� interet_rate ���� �Ǽ� 0.001 ����

	// unsigned int speed; // ��ȣ���� int�� ���� speed
	// unsigned speed; // int�� �����Ͽ��� �ȴ�.
	
	// unsigned�� ���̸� ��ȣ�� ��Ÿ���� ù ��° ��Ʈ�� ����� �� �־ 
	// �� ū ������ ��Ÿ�� �� �ֽ��ϴ�.



	// �����÷ο� 
	unsigned short b = 65535; // short�� unsigned �� ������ 65535 �����̴�.
	
	unsigned int a = 4294967295; // int�� unsigned �� ������ 4294967295 �����̴�.
	b = b + 1; // �����÷ο� �߻� 
	a = a + 1; // �����÷ο� �߻�
	
	
	printf("b=%d a=%d", b,a); 

	// float x = 1e39;
	// float y = 1.23456e-46;
	// 
	// printf("x=%e\n", x); 
	// printf("y=%e\n", y); 

	return 0;

}