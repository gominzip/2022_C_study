#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num;
	int result;
	printf("부호를 바꾸고 싶은 정수 입력 : ");
	scanf("%d", &num);  // 정수 입력

	result = ~num;  // 1의 보수를 취함
	result += 1;  // 1을 더함

	printf("%d \n", result);
	return 0;
}