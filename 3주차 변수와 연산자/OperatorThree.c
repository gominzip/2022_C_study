#include <stdio.h>

int main(void)
{
	int num1 = +2;  // + 연산자를 통해 양의 정수 표현
	int num2 = -4;  // - 연산자를 통해 음의 정수 표현
	
	num1 = -num1;  // num1 부호 변경
	printf("num1: %d \n", num1);
	num2 = -num2;  // num2 부호 변경
	printf("num2: %d \n", num2);
	return 0;
}