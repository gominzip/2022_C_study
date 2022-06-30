#include <stdio.h>

int main(void)
{
	int arr[] = { 1,2,3,4,5 };  // int형 배열 선언
	int* ptr = arr;  // int형 포인터 변수 선언
	int i;  // int형 변수 선언
	for (i = 0; i < 5; i++)  // 5번 반복
	{
		*ptr += 2;  // 배열요소 값 2 증가
		ptr++;  // ptr 1 증가 >> 4 증가
	}

	for (i = 0; i < 5; i++)  // 5번 반복
		printf("%d ", arr[i]);  // i번째 배열 요소 출력
	
	printf("\n");
	return 0;
}