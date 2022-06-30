#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int h, m, s;  // 시, 분,초 int형 변수 선언
	printf("초(second) 입력: ");
	scanf("%d", &s);  // 변수 s에 정수 입력
	h = s / 3600;  // 시 계산
	m = (s % 3600) / 60;  // 분 계산
	s = (s % 3600) % 60; // 초 계산
	printf("[h: %d, m: %d, s: %d] \n", h, m, s);  // 시, 분, 초 출력
	return 0;
}