#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	 char c = 'A';
	 
	 printf("%c�� �ƽ�Ű �ڵ� =%d\n", c, c); // ���ڿ� �ƽ�Ű �ڵ尪 ���
	 printf("%c�� �ƽ�Ű �ڵ� =%d\n", c+1, c+1); // ���ڿ� �ƽ�Ű �ڵ尪 ���
	 printf("%c�� �ƽ�Ű �ڵ� =%d\n", c+2, c+2); // ���ڿ� �ƽ�Ű �ڵ尪 ���
	 
	 
	 char c1;
	 printf("���ڸ� �Է��Ͻÿ�");
	 
	 c = getchar(); // �Լ��� �� ���� �ϳ��� ���ڸ� �Է¹޴´�. 
	                // ���ڿ��� �Է¹ޱ� ���ؼ��� ���� �� ȣ���ϰų� �ٸ� �Լ��� ����ؾ� �Ѵ�.
	 
	 printf("%c�� �ƽ�Ű�ڵ� =%d\n", c, c);

	
	return 0;

	
}