//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int Power(int n)  // 반환값, 인자를 갖는 거듭제곱 계산 함수
//{
//	if (n == 0)  // n회 제곱이 끝나면
//		return 1;  // value 반환하면서 재귀 탈출
//	else
//		return Power(n - 1) * 2;  // n이 0이 될 때까지 2 곱하기
//}
//
//int main(void)
//{
//	int n;  // int형 변수 선언
//	printf("정수 입력: ");
//	scanf("%d", &n);  //  정수 입력
//	printf("2의 %d승은 %d \n", n, Power(n));  // 함수 호출 및 인자 전달, 결과값 출력
//	return 0;
//}
