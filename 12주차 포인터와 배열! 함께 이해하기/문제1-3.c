//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5] = { 1,2,3,4,5 };  // int형 배열 선언
//	int* ptr = &arr[4];  // int형 포인터 변수 선언, 마지막 배열요소 주소 값 저장
//	int total=0, i;  // int형 변수 선언
//
//	for (i = 0; i < 5; i++)  // 5번 반복
//		total += *(ptr--);  // 후위감소로 배열요소 감소 및 total에 더하기
//
//	printf("%d \n", total);  // total 출력
//	return 0;
//}