#include <stdio.h>

int Add(int num1, int num2)  // Add함수, 반환형 int, 매개변수 num1, num2선언
{
	return num1 + num2;  // 값의 반환
}

int main(void)
{
	int result;  // int형 변수 선언
	result = Add(3, 4);  // result값 초기화
	printf("덧셈결과1: %d \n", result);  // 결과값 출력
	result = Add(5, 8);  // result값 재할당
	printf("덧셈결과2: %d \n", result);  // 결과값 출력
	return 0;  // 0반환, 프로그램 종료
}