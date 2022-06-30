#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num1, num2, result;  // int형 변수 선언
	printf("두 정수 입력: ");
	scanf("%d %d", &num1, &num2);  // 정수 입력

	result = (num1 < num2) ? (num2 - num1) : (num1 - num2);  // 삼 항 연산자 사용
	printf("%d \n", result);  // 결과값 출력
	
	return 0;
}