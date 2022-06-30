//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//int BiggestNum(int num1, int num2, int num3)  // 큰 수를 구하는 함수 정의
//{
//	if (num1 > num2)  // num1이 num2보다 크면 아래 문장 실행
//		return (num1 > num3) ? num1 : num3;  // 삼 항 연산자
//	else  // num2가 num1보다 크면 아래 문장 실행
//		return (num2 > num3) ? num2 : num3;  // 삼 항 연산자
//}
//
//int SmallestNum(int num1, int num2, int num3)  // 작은 수를 구하는 함수 정의
//{
//	if (num1 < num2)  // num1이 num2보다 작으면 아래 문장 실행
//		return (num1 < num3) ? num1 : num3;  // 삼 항 연산자
//	else  // num2가 num1보다 작으면 아래 문장 실행
//		return (num2 < num3) ? num2 : num3;  // 삼 항 연산자
//}
//
//int main(void)
//{
//	int num1, num2, num3;  // int형 변수 선언
//	printf("세 개의 정수 입력: ");
//	scanf("%d %d %d", &num1, &num2, &num3);  // 정수 입력 및 변수 초기화
//	printf("가장 큰 수는 %d \n", BiggestNum(num1, num2, num3));  // 함수의 호출
//	printf("가장 작은 수는 %d \n", SmallestNum(num1, num2, num3));  // 함수의 호출
//	return 0;  // 0 반환, 프로그램 종료
//}
//
//
