#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char ch;  // char형 변수 선언
	printf("문자를 입력하세요: ");
	scanf("%c", &ch);  // 문자 입력

	printf("%d \n", ch);  // 서식문자 %d를 통해 입력받은 문자를 정수형으로 출력
	return 0;
}