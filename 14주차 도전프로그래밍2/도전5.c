#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void DesSort(int ary[], int len)  // 함수 정의, 포인터 매개변수 ary 선언, 인자 값 복사
{
	int i, j;
	int temp;  // 배열 값 이동을 위한 변수

	for (i = 0; i < len - 1; i++)  // len-1번 반복, 내림차순 정렬
	{
		for (j = 0; j< len-1-i; j++)  
		{
			if (ary[j] < ary[j + 1])  // arr[j]가 arr[j+1]보다 작으면
			{
				temp = ary[j];  // arr[j]와 arr[j+1] 서로 변경
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}  // 조건 만족 안하면 다음 배열요소로 이동
		}
	}
}

int main(void)
{
	int arr[7];  // 길이7 int형 배열 선언
	int i;  // int형 변수 선언

	for (i = 0; i < 7; i++)  // arr 초기화 반복문
	{
		printf("입력: ");
		scanf("%d", &arr[i]);  // 정수 입력, arr초기화
	}

	DesSort(arr, sizeof(arr) / sizeof(int));  // 함수호출, 배열과 배열 길이 전달
	for (i = 0; i < 7; i++)  // 내림차순으로 정리된 배열 출력
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}
