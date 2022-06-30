//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int Add(int num1, int num2)  // 인자전달 o, 반환 값 o
//{
//	return num1 + num2;
//}
//
//void ShowAddResult(int num) // 인자전달 o, 반환 값 x
//{
//	printf("덧셈결과 출력: %d \n", num);
//}
//
//int ReadNum(void) // 인자전달 x, 반환 값 o
//{
//	int num;
//	scanf("%d", &num);
//	return num;
//}
//
//void HowToUseThisProg(void) // 인자전달 x, 반환 값 x
//{
//	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
//	printf("자! 그럼 두 개의 정수를 입력하세요. \n");
//}
//
//int main(void)
//{
//	int result, num1, num2;  // int형 변수 선언
//	HowToUseThisProg();  // 함수 실행
//	num1 = ReadNum();  // 정수 입력
//	num2 = ReadNum();  // 정수 입력
//	result = Add(num1, num2);  // 덧셈 함수, result값 초기화
//	ShowAddResult(result);  // 결과 출력
//	return 0;  // 0반환, 프로그램 종료
//}
