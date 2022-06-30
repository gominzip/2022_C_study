//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//{
//	int n, cnt = 0;  // int형 변수 선언
//	int arr[50];  // 길이 50 int형 배열 선언
//
//	printf("10진수 정수 입력: ");
//	scanf("%d", &n);  // 정수 입력
//
//	while (n != 0)  // n==0이면 반복문 탈출
//	{
//		arr[cnt] = n % 2;  // 2진수 변환
//		n = n / 2;
//		cnt++;
//	}
//
//	while (cnt > 0)  // cnt번째부터 0번째 배열요소까지 출력 완료하면 탈출
//		printf("%d", arr[--cnt]); // 뒤의 배열 값부터 출력
//	printf("\n");
//	return 0;
//}