#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b;  // 입력받을 두 변수 선언
	int total = 0;  // 합계 변수 선언 및 초기화

	printf("두 개의 정수를 입력(작은 값부터 작성) :");
	scanf("%d %d", &a, &b);  // 정수 입력

	for (; a <= b; a++)  // a=b까지 반복, a는 1씩 증가
		total += a;  // total = total+a

	printf("합계: % d \n", total);  // 합계 출력
	return 0;
}