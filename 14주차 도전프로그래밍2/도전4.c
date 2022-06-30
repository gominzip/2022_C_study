#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char str[50];  // 길이50 char형 문자열 선언
	int i, len=0;  

	printf("문자열 입력: ");
	scanf("%s", str);  // 문자열 입력, 배열 str에 저장
	
	while (str[len] != '\0')  // null문자가 나오면 반복문 탈출
		len++;  // 문자열 길이 구하기

	for (i = 0; i < len / 2; i++)  // 회문 검사 반복문
	{
		if (str[i] != str[len - 1 - i])  // 대치되는 위치의 문자가 일치하지 않을 시
		{
			printf("회문이 아닙니다.");  // 회문 아님을 알림
			return 0;  // 프로그램 종료
		}
	}
	printf("회문 입니다. \n");  // 모두 일치하고 반복문을 마쳤을 시 출력
	return 0;  // 프로그램 종료
}
