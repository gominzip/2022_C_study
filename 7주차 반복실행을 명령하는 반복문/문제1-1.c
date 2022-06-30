#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num, re=0;  // int형 변수 선언, 횟수계산을 위한 변수 초기화
	printf("양의 정수를 입력: ");
	scanf("%d", &num);  // 정수 입력
	
	while (re < num)  // re가 num-1이 될 때까지 반복 = num번 반복
	{
		printf("Hello world! \n");  // 문자열 출력
		re++;  // re = re+1
	}
	return 0;
}