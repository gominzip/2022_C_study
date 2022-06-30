#include <stdio.h>

int main(void)
{
	int num1 = 10;  // 변수 num1의 선언 및 초기화
	int num2 = 12;  // 변수 num2의 선언 및 초기화
	int result1, result2, result3;  // 변수 result1, result2, result3의 선언

	result1 = (num1 == num2); // 변수 result1의 초기화
	result2 = (num1 <= num2); // 변수 result2의 초기화
	result3 = (num1 > num2); // 변수 result3의 초기화

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
	return 0;
}