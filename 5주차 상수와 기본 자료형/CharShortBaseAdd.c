#include <stdio.h>

int main(void)
{
	char num1 = 1, num2 = 2, result1 = 0;  // char자료형으로 변수 선언 및 초기화
	short num3 = 300, num4 = 400, result2 = 0;  // short자료형으로 변수 선언 및 초기화

	printf("size of num1 & num2: %d, %d \n", sizeof(num1), sizeof(num2));  // 8~9행 sizeof연산자로 변수 크기 확인
	printf("size of num3 & num4: %d, %d \n", sizeof(num3), sizeof(num4));

	printf("size of char add: %d \n", sizeof(num1 + num2));  // num1과 num2의 합의 값을 sizeof 연산, 반환값을 printf 함수로 호출
	printf("size of short add: %d \n", sizeof(num3 + num4));  // num3과 num4의 합의 값을 sizeof 연산, 반환값을 printf 함수로 호출

	result1 = num1 + num2;  // 14~15행 두 변수의 합을 result에 저장
	result2 = num3 + num4;
	printf("size of result1 & result2: %d, %d \n", sizeof(result1), sizeof(result2));  // result1, 2 출력
	return 0;
}