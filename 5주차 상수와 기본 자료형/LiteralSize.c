#include <stdio.h>

int main(void)
{
	printf("literal int size: %d \n", sizeof(7));  // 정수형 상수
	printf("literal double size: %d \n", sizeof(7.14));  // 실수형 상수
	printf("literal char size: %d \n", sizeof('A'));  // 문자형 상수
	return 0;
}