#include <stdio.h>

int main(void)
{
	char str[] = "Good morning!";  // char형 배열 선언, 문자열 초기화
	printf("배열 str의 크기: %d \n", sizeof(str));  // 문자열 크기 출력
	printf("널 문자 문자형 출력: %c \n", str[13]);  // 널 문자 정체 확인
	printf("널 문자 정수형 출력: %d \n", str[13]);

	str[12] = '?';  // 문자열 데이터 변경
	printf("문자열 출력: %s \n", str);  // 서식문자 %s로 문자열 출력
	return 0;
}