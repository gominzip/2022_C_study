#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int total = 0;  // int형 변수 선언 및 초기화
	int i, num;  // int형 변수 선언
	printf("0부터 num까지의 덧셈, num은? ");
	scanf("%d", &num);  // 변수 num 초기화 값 입력

	for (i = 0; i < num + 1; i++) //for문, i 초기화, i=0부터 num까지 반복, 1씩 증가
		total += i;  // total=total+1

	printf("0부터 %d까지의 덧셈결과: %d \n", num, total);  // 덧셈결과 출력
	return 0;
}