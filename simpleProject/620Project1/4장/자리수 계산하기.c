#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{


	int num,value,sum=0; // 더해지는 값이니 0으로 초기값을 설정 
	scanf("%d", &num);

	value = num;  // 1.입력받는 값을 보존하기 위해서 변수 선언.

	sum += value % 10; // 2. 1의 자리를 구하기 위해서 % 10을 하고 sum에 더한다. 

	value /= 10; // 3. 입력받은 값을 10으로 나누어 2자리수가 되게한다. 

	sum += value % 10; // 4. 2자리수에 다시 %10을 하여 나머지를 구하고 sum에 더한다.

	value /= 10; // 5. 3에서 나눠진값을 다시 10으로 나눠서 마지막 값을 구한다.

	sum += value % 10; // 6. 다시 %10을 사용해 마지막 나머지 값을 구해서 sum에 더한다.

	printf("%d의 자릿수 합은 %d 입니다.\n", value, sum);



	return 0;
}