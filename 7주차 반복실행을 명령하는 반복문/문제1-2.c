#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num, re = 0;  // int형 변수 선언, 횟수계산을 위한 변수 초기화
	printf("양의 정수 입력: ");
	scanf("%d", &num);  // 정수 입력

	while (re < num)  // 반복조건 설정
	{
		printf("%d ", 3 * (re + 1));  //3*1부터 시작해야하므로 re+1
		re++;  // re=re+1
	}
	return 0;
}