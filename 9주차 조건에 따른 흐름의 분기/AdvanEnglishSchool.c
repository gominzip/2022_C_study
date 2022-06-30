#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char sel;  // char형 변수 선언
	printf("M 오전, A 오후, E 저녁 \n");
	printf("입력: ");
	scanf("%c", &sel);  // 문자 입력

	switch (sel)  // 인자 sel의 정보 입력
	{
	case 'M':
	case 'm':
		printf("Morning \n");  // M이나 m이면 실행
		break;  // 반복문 탈출
	case 'A':
	case 'a':
		printf("Afternoon \n");  // A나 a면 실행
		break;  // 반복문 탈출
	case 'E':  
	case 'e':
		printf("Evening \n");  // E나 e면 실행
		break;  // 사실상 불필요
	}
	return 0;
}