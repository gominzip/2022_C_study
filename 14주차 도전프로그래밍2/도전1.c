#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void Odd(int* ptr)  // 홀수 출력 함수, 포인터 매개변수 선언
{
	int i;  // int형 변수 선언
	printf("홀수 출력: ");
	for (i = 0; i < 10; i++)  // 10번 반복
	{
		if (ptr[i] % 2 != 0)  // ptr[i]가 홀수면
			printf("%d ", ptr[i]);  // 홀수 출력
	}
	printf("\n");
}

void Even(int* ptr)  // 짝수 출력 함수, 포인터 매개변수 선언
{
	int i;
	printf("짝수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (ptr[i] % 2 == 0)  // ptr[i]가 짝수면
			printf("%d ", ptr[i]);  // 짝수 출력
	}
	printf("\n");
}

int main(void)
{
	int arr[10];  // 길이10 int형 배열 선언
	int i;  // int형 변수 선언

	printf("총 10개의 숫자 입력 \n");
	for (i = 0; i < 10; i++)  // 10번 반복
	{
		printf("입력: ");
		scanf("%d", &arr[i]);  // 정수 입력 및 배열 초기화
	}

	printf("\n");
	Odd(arr);  // 함수호출 및 인자로 배열 전달
	Even(arr);  // 함수호출 및 인자로 배열 전달
	return 0;
}