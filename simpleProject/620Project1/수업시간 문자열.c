#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> // ǥ�� c ���̺귯���� �ƴ�

// ' ' ���� " " ���ڿ� ���ڿ��� ������ ���ӵ� �ּҸ� ������.
// ���ڿ��� ������ \0 NULL���ڰ� ����.
// ���۰� �ִٸ� enter�� ġ���ʴ��̻� �� ������ �������� �ʴ´�.
// ���۰� ���ٸ� �Է¹����� �ٷ� �����
int main()
{
	//int c = _getch();  // �Է¹����� �ٷ� �����
	//printf("%c", c);

	char name[100];
	char address[100];
	printf("�̸��� �Է��Ͻÿ�");
	//scanf("%s", name);
	gets_s(name, sizeof(name));
	printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ�");
	gets_s(address, sizeof(address));
	//scanf("%s", address); // �����̽��ٸ� ������ ���� ó���� �ȴ�.
	printf("�ȳ��ϼ���, % s�� ��� % s�� \n", address, name);

	return 0;
}