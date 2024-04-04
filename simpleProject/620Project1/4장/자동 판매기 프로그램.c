#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int money=0;
	int price=0;

	

	printf("투입한 돈 :\n", money);

	scanf("%d", &money);

	printf("물건값 :\n", price);

	scanf("%d", &price);

	int change = money-price;

	printf("거스름돈 :%d\n", change);


	int coin100 = change / 100; // 거스름돈에서 100원짜리의 개수 계산
	change = change % 100; // 거스름돈에서 100원짜리의 개수를 뺀 나머지를 구한다.
	int coin10 = change / 10; // 나머지에서 10원짜리의 개수를 계산
	change = change % 10; // 10원짜리의 개수를 뺀 나머지를 구한다. ->1원짜리

	printf("100원 동전의 개수 :%d\n", coin100);
	printf("10원 동전의 개수 :%d\n", coin10);
	printf("1원 동전의 개수 :%d\n", change);


	return 0;
}