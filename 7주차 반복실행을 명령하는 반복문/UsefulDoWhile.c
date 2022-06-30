#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int total = 0, num = 0;  // 변수 선언 및 초기화

	do  //do while문 시작
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);  // 정수 입력
		total += num;  // 정수 덧셈
	} while (num != 0);  // 0이면 종료
	printf("합계: %d \n", total);  // 합계 출력
	return 0;
}