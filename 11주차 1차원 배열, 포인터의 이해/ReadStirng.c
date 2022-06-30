#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char str[50];  // 길이 50의 char형 배열 선언
	int idx = 0;  // int형 변수 선언 및 초기화

	printf("문자열 입력: ");
	scanf("%s", str);  // 문자열 입력 받은 후 str에 저장, &연산자 X
	printf("입력 받은 문자열: %s \n", str);  // 문자열 출력

	printf("문자 단위 출력: ");
	while (str[idx] != '\0')  // null 문자면 반복 종료
	{
		printf("%c", str[idx]);  // 문자 단위 출력
		idx++;  // 후위증가
	}
	printf("\n");
	return 0;
}