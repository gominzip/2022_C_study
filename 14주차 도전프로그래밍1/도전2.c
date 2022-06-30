//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void Gugudan(int n1, int n2)  // 인자 값 복사
//{
//	int a = (n1 < n2) ? (n1) : (n2);  // 지역변수 선언, 인자 중 작은 수로 a 초기화
//	int b = (n1 < n2) ? (n2) : (n1);  // 지역변수 선언, 인자 중 큰 수로 b 초기화
//	int i;
//
//	for (; a < b + 1; a++)  // a단 출력 반복문
//	{
//		for (i = 1; i < 10; i++)  // 1~9까지 반복
//		{
//			printf("%d x %d = %d \n", a, i, a * i);  // a단 출력
//		}
//		printf("\n");
//	}
//}
//
//int main(void)
//{
//	int n1, n2;  // int형 변수 선언
//	printf("두 개의 정수 입력: ");
//	scanf("%d %d", &n1, &n2);  // 정수 입력
//	Gugudan(n1, n2);  // 함수 호출, 인자 전달
//	return 0;
//}