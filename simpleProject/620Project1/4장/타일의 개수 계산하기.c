#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int width = 320; // ���� ����
	int height = 200; // ���� ����
	int size = 60; // Ÿ���� ������

	int need_tile = ((width / size + (width % size != 0)) * ((height / size + (height % size != 0))));
	                // ���� / Ÿ�� + (�������� ������ �ȵ�) *   ����   /  Ÿ�� +  (�������� ������ �ȵ�)
 	// �ʿ��� Ÿ���� ���� 

	printf("�ʿ��� Ÿ�� ���� :%d\n", need_tile);



	return 0;
}