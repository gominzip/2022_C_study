#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num;  // int형 변수 선언
	printf("정수를 입력하세요: ");
	scanf("%d", &num);  // 정수 입력

	printf("%c \n", num);  // 서식문자 %c를 통해 입력받은 정수 문자형으로 출력
	return 0;
}