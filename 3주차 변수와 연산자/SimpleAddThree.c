#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2;

	printf("정수 one: ");
	scanf("%d", &num1);  // 키보드로 입력된 정수를 변수 num1에 저장
	printf("정수 two: ");
	scanf("%d", &num2);  // 키보드로 입력된 정수를 변수 num2에 저장

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
	return 0;
}