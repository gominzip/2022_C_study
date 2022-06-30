//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//{
//	int n, k;  // int형 변수 선언
//	int value = 1;  // 거듭제곱의 값을 저장할 변수
//
//	printf("상수 n 입력: ");
//	scanf("%d", &n);  // 정수 입력
//
//	if (n < 1)  // 1 미만일 경우
//		printf("만족하는 k값 없음 \n");
//	else
//	{ 
//		for (k = 0; value <= n; k++)  // value가 n을 초과하는 경우 정지
//			value *= 2;  // 2 곱하기
//		printf("공식을 만족하는 k의 최댓값은 %d \n", k-1);  // k 최댓값 출력
//	}
//	return 0;
//}