#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;  // int형 변수 선언
	printf("0이상의 정수 입력: ");
	scanf("%d", &n);  // 정수 입력

	switch (n / 10)  // 인자 n/10의 정보 전달
	{
	case 0:  // 몫이 0
		printf("0 이상 10미만 \n");
		break;  // 조건문 탈출
	case 1: // 몫이 1
		printf("10 이상 20미만 \n");
		break;  // 조건문 탈출
	case 2:  // 몫이 2
		printf("20 이상 30미만 \n");
		break;  // 조건문 탈출
	default:  // 그 외
		printf("30 이상 \n");
		break;  // 조건문 탈출
	}
	return 0;
}