#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double num1, num2 ;  // double형 변수 선언
	printf("두 개의 실수를 입력하세요: ");
	scanf("%lf %lf", &num1, &num2);  // 실수 입력, double형 데이터 입력 시 서식문자 %lf 사용

	printf("두 수의 덧셈: %f \n", num1 + num2);  // 11~14행 사칙연산 결과 출력, double형 데이터 출력 시 서식문자 %f 사용
	printf("두 수의 뺄셈: %f \n", num1 - num2);
	printf("두 수의 곱셈: %f \n", num1 * num2);
	printf("두 수의 나눗셈: %f \n", num1 / num2);
	return 0;
}