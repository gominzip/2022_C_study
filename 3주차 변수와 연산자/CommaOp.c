#include <stdio.h>

int main(void)
{
	int num1 = 1, num2 = 2;  // 변수 num1, num2의 선언 및 초기화
	printf("hello "), printf("world! \n");
	num1++, num2++;  // 후위 증가
	printf("%d ", num1), printf("%d ", num2), printf("\n");
	return 0;
}