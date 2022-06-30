#include <stdio.h>

int main(void)
{
	int num1 = 3;  // 변수 num1의 선언 및 초기화
	int num2 = 4;  // 변수 num2의 선언 및 초기화
	int result = num1 + num2;  // 변수 result의 선언 및 초기화

	printf("덧셈 결과: %d \n", result);
	printf("%d + %d = %d \n", num1, num2, result);
	printf("%d와(과) %d의 합은 %d입니다. \n", num1, num2, result);
	return 0;
}