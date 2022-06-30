#include <stdio.h>

int main(void)
{
	int num1, num2;  // int형 변수 선언
	num1 = printf("12345\n");  // num1 초기화
	num2 = printf("I love my home\n");  // num2 초기화
	printf("%d %d \n", num1, num2);  // printf함수 문자열의 길이 반환
	return 0;  // 0반환, 프로그램 종료
}