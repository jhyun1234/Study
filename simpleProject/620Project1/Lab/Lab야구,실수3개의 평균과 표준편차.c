#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // pow() 함수와 sqrt() 함수를 사용하기 위해 필요
#define KMH_TO_MS (1000/3600.0) // km/h 를 m/s로 변환하기 위한 상수 
int main()
{

	double distance = 18.4; // 단위 m
	double speed = 160 * KMH_TO_MS;// km/h 를 m/s로 변환하여 속도 계산
	double time = distance / speed; // 시간 계산

	printf("홈플레이트에 도달하는데 걸리는 시간 : %f\n", time);


	// 실수 3개의 평균과 표준편차

	double num1, num2, num3;
	double sum = 0.0;
	double mean, variance, std_deviation; // 평균, 분산, 표준편차를 저장할 변수

	printf("3개의 실수를 입력하세요 :");
	scanf("%lf %lf %lf", &num1, &num2, &num3);

	sum = num1 + num2 + num3;
	mean = sum / 3;
	// 각 실수에서 평균을 뺀 값의 제곱을 모두 더한 후, 개수로 나누어 분산을 계산
	variance = (pow(num1 - mean, 2) + pow(num2 - mean, 2) + pow(num3 - mean, 2)) / 3;
	// 분산의 제곱근을 구하여 표준편차를 계산
	std_deviation = sqrt(variance);


	// pow() 함수(거듭제곱을 계산)와 sqrt() 함수(제곱근을 계산)
	printf("평균 : %.2lf\n", mean);
	printf("표준편차 : %.2lf\n", std_deviation);
	


	return 0;

}