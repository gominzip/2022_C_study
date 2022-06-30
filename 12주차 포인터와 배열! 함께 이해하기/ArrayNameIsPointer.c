#include <stdio.h>

int main(void)
{
	int arr[3] = { 15, 25, 35 };  // 길이 3인 int형 배열 선언 및 초기화
	int* ptr = &arr[0];  // int * ptr=arr; 과 동일 문장

	printf("%d %d \n", ptr[0], arr[0]);  // 포인터 변수, 포인터 상수로 각각 출력
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);  // 포인터 변수, 포인터 상수로 * 연산

}