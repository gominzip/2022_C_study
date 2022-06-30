//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//int AbsoCompare(int num1, int num2);  // 함수의 선언, 절댓값이 큰 정수 반환
//int GetAbsoValue(int num);  // 함수의 선언, 전달인자의 절댓값을 반환
//
//int main(void)
//{
//	int num1, num2;  // int형 변수 선언
//	printf("두 개의 정수 입력: ");
//	scanf("%d %d", &num1, &num2);  // 정수 입력, 변수 초기화
//	printf("%d와 %d중 절댓값이 큰 정수: %d \n",
//		num1, num2, AbsoCompare(num1, num2));  // AbsoCompare 함수 호출
//	return 0;  // 프로그램 종료
//}
//
//int AbsoCompare(int num1, int num2)  // AbsoCompare 함수 정의
//{
//	if (GetAbsoValue(num1) > GetAbsoValue(num2))  // GetAbsoValue 함수 호출, num1의 절댓값이 크다면 아래 문장 실행
//		return num1;  // num1 반환
//	else  // num2의 절댓값이 크다면
//		return num2;  // num2 반환
//}
//
//int GetAbsoValue(int num)  // GetAbsoValue 함수 정의
//{
//	if (num < 0)  // num이 음수라면
//		return num * (-1);  // num * (-1) 반환
//	else  // num이 양수라면
//		return num;  // num 반환
//}
