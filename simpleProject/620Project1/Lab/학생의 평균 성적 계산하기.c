#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{

	char name;
	float score1, score2, score3, score4;
	double id,average;
	// 사용자로부터 이름,학번,4과목 성적 입력 받기
	printf("이름");
	name = getchar();
	printf("학번");
	scanf("%lf", &id);
	printf("성적");
	scanf("%f %f %f %f", &score1, &score2, &score3, &score4);

	// 평균 계산하기
	
	average = (score1 + score2 + score3 + score4) / 4.0;

	printf("학생 %c (학번%lf) 의 평균성적은 %.2lf 입니다.\n",name,id,average);

	return 0;
}