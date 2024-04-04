#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int width = 320; // 방의 가로
	int height = 200; // 방의 세로
	int size = 60; // 타일의 사이즈

	int need_tile = ((width / size + (width % size != 0)) * ((height / size + (height % size != 0))));
	                // 가로 / 타일 + (나머지가 있으면 안됨) *   세로   /  타일 +  (나머지가 있으면 안됨)
 	// 필요한 타일의 개수 

	printf("필요한 타일 개수 :%d\n", need_tile);



	return 0;
}