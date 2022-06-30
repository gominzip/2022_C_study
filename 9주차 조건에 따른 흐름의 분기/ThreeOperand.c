#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num, abs;  // int형 변수 선언
	printf("정수 입력: ");
	scanf("%d", &num);  // 정수 입력

	abs = num > 0 ? num : num * (-1); // 조건이 참이면 num, 거짓이면 -num 반환
	printf("절댓값: %d \n", abs);  // 반환 값 출력
	return 0;
}