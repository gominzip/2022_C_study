#include <stdio.h>

int main(void)
{
	char str[50] = "I like C programming";  // 길이 50의 char형 배열 선언 및 문자열 초기화
	printf("string: %s \n", str);  // 문자열 출력

	str[8] = '\0';  // 9번째 요소에 널 문자 저장
	printf("string: %s \n", str);  // 문자열 출력

	str[6] = '\0';  // 7번째 요소에 널 문자 저장
	printf("string: %s \n", str);  // 문자열 출력

	str[1] = '\0';  // 2번째 요소에 널 문자 저장
	printf("string: %s \n", str);  // 문자열 출력
	return 0;
}