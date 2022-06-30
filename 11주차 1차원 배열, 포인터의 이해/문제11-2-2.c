#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char voca[100];  // 길이 100의 char형 배열 선언
	char temp;  // 역순을 저장할 변수 선언
	int i, len = 0;  // int형 변수 선언 및 초기화

	printf("단어 입력: ");
	scanf("%s", voca);  // 문자열 입력 받은 후 voca에 저장

	while (voca[len] != '\0')  // 널 문자 시 반복 중단
		len++;  // 길이 계산

	for (i = 0; i < len/2; i++)  // 영단어 뒤집기
	{
		temp = voca[i];  // 앞의 문자 임시 저장
		voca[i] = voca[(len - i) - 1];  // 뒤의 문자를 앞으로
		voca[(len - i - 1)] = temp;  // 앞의 문자를 뒤로
	}
	printf("%s \n", voca);  // 뒤집힌 단어 출력
	return 0;
}