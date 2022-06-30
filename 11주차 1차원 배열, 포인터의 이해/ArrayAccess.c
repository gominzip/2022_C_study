#include <stdio.h>

int main(void)
{
	int arr[5];  // 길이 5인 int형 배열, 이름 arr
	int sum = 0, i;  // int형 변수 선언

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;  // 첫 번째 배열요소부터 마지막 배열요소까지 값 저장 

	for (i = 0; i < 5; i++)  // 5번 반복
		sum += arr[i];  // 배열요소에 저장된 값 전부 sum에 더함

	printf("배열요소에 저장된 값의 합: %d \n", sum);  // sum 출력
	return 0;
}