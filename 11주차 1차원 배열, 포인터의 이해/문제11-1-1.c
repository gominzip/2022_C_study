//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5];  // 길이 5인 int형 배열 선언
//	int max, min,i, sum=0;  // int형 변수 선언
//
//	for (i = 0; i < 5; i++)  // 5번 반복
//	{
//		printf("정수 입력: ");
//		scanf("%d", &arr[i]);  // i번째 배열요소에 정수 값 입력
//	}
//
//	max = min = sum = arr[0];  // 모두 1번째 배열요소 값으로 초기화
//	for (i = 1; i < 5; i++)
//	{
//		sum += arr[i];  // 모든 배열 요소의 합 계산
//		if (max < arr[i])
//			max = arr[i];  // 최댓값으로 max 재할당
//		if (min > arr[i])
//			min = arr[i];  // 최솟값으로 min 재할당
//	}
//	
//	printf("최댓값: %d \n", max);  // 최댓값 출력
//	printf("최솟값: %d \n", min);  // 최솟값 출력
//	printf("총 합: %d \n", sum);  //  총 합 출력
//	return 0;
//}