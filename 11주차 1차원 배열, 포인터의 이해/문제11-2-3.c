//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//{
//	char voca[100];  // 길이 100의 char형 배열 선언
//	int i, len = 0;  // int형 변수 선언 및 초기화
//	char max = 0;
//
//	printf("단어 입력: ");
//	scanf("%s", voca);  // 문자열 입력 받은 후 voca에 저장
//
//	while (voca[len] != '\0')  // 널 문자 시 반복 중단
//		len++;  // 길이 계산
//
//	for (i = 0; i < len; i++)  // 가장 큰 아스키 코드 구하기
//		if (max < voca[i])
//			max = voca[i];  //  큰 것을 max에 저장
//
//	printf("가장 큰 아스키 코드 값의 문자: %c \n", max);  // 문자 출력
//	return 0;
//}