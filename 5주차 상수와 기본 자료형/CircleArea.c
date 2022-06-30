#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double rad;  // double형으로 변수 선언
	double area;  // double형으로 변수 선언
	printf("원의 반지름 입력: ");
	scanf("%lf", &rad);  // 원의 반지름 입력, double형 데이터를 입력 받을 시 서식문자 %lf 사용

	area = rad * rad * 3.1415;  // 원의 넓이 계산, 변수 area 초기화
	printf("원의 넓이: %f \n", area);  // double형 데이터 출력 시 서식문자 %f 사용
	return 0;
}