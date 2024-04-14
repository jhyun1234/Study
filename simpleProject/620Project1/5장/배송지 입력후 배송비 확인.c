#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{

	char location;
	int price,price_fee;
	printf("제품의 가격을 입력하세요.\n 배송지를 입력하세요.(A,B)\n");
	scanf("%d %c", &price,&location);

	if(location=='A')
		if (price >= 50000)
		{
			printf("배송비 무료");
		}
		else
		{
			printf("배송비 5천원");
		}
	if(location =='B')
		if (price >= 30000)
		{
			printf("배송비 무료");
		}
		else
		{
			printf("배송비 3천원");
		}


	return 0;
}