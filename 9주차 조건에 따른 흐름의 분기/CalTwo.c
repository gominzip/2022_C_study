//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//{
//	int opt;  // int형 변수 선언
//	double num1, num2;  // double형 변수 선언
//	double result;  // double형 변수 선언
//
//	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
//	printf("선택? ");
//	scanf("%d", &opt);  // 정수형 번호 입력
//	printf("두 개의 실수 입력: ");
//	scanf("%lf %lf", &num1, &num2);  // 실수 입력
//
//	if (opt == 1)  // 1번 입력 시 덧셈
//		result = num1 + num2;
//	else if (opt == 2)  // 2번 입력 시 뺄셈
//		result = num1 - num2;
//	else if (opt == 3)  // 3번 입력 시 곱셈
//		result = num1 * num2;
//	else  // 그 외의 경우 나눗셈
//		result = num1 / num2;
//
//	printf("결과: %f \n", result);  // 결과 출력
//	return 0;
//}