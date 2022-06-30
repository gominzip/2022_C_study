#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int dan = 0, num = 1;  // int형 변수 선언 및 초기화
	printf("몇 단? ");
	scanf("%d", &dan);  // dan 초기화값 입력

	while (num < 10)  // 10회 반복
	{
		printf("%d x %d = %d \n", dan, num, dan * num);  // 구구단 출력
		num++;  // num=num+1
	}  // 10회 반복 후 종료
	return 0;
}