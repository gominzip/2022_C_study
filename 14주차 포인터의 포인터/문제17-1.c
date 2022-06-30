//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void MaxAndMin(int* arr, int size, int** mxPtr, int** mnPtr)  // 포인터 매개변수 arr, 이중 포인터 매개변수 mxPtr mnPtr 선언
//{
//	int i;  // int형 변수 선언
//	int* max, * min;  // int형 포인터 변수 선언
//
//	max = min = &arr[0];  // 포인터 변수에 arr[0]의 주소값 저장
//	for (i = 0; i < size; i++)
//	{
//		if (*max < arr[i])  // max가 가리키는 대상의 값보다 arr[i]가 크면
//			max = &arr[i];  // max에 arr[i] 주소 값 저장
//		if (*min > arr[i])  // min가 가리키는 대상의 값보다 arr[i]가 작으면
//			min = &arr[i];  // min에 arr[i] 주소 값 저장
//	}
//
//	*mxPtr = max;  // *mxPtr=maxPtr=max
//	*mnPtr = min;  // *mnPtr=minPtr=min
//}
//
//int main(void)
//{
//	int* maxPtr;  // int형 포인터 변수 선언
//	int* minPtr;  // int형 포인터 변수 선언
//	int arr[5];  // 길이 5 int형 배열 선언
//	int i;  // int형 변수 선언
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("입력: ");
//		scanf("%d", &arr[i]);  // 배열요소 입력
//	}
//
//	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);  // 배열 이름, 배열요소 개수, maxPtr과 minPtr 주소값 전달
//	printf("최대: %d  최소: %d \n", *maxPtr, *minPtr);  // 최댓값 최솟값 출력
//	return 0;
//}