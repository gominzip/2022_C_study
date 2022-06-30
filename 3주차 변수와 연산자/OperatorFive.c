#include <stdio.h>

int main(void)
{
	int num1 = 10;  // 변수 num1의 선언 및 초기화
	int num2 = (num1--) + 2;  // 변수 num2의 선언 및 초기화, 후위 감소

	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);
	return 0;
}