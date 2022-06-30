//세 정수 연산 (num1 - num2) x (num2 + num3) x (num3 % num1)
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;  // 변수 num1, num2, num3 선언
	int result; // 변수 result 선언
	printf("세 정수를 입력하세요 :");
	scanf("%d %d %d", &num1, &num2, &num3);  // 정수 입력
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);  // 변수 result에 값 할당
	printf("연산결과 : %d \n", result);
	return 0;
}