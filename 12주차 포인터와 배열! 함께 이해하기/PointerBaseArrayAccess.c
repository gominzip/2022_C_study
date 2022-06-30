#include <stdio.h>

int main(void)
{
	int arr[3] = { 11,22,33 };  // 길이 3, int형 배열
	int* ptr = arr;  // int * ptr = &arr[0];과 동일 문장
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));  // 주소 그대로 출력, 4 증가, 8 증가 >> 저장된 값은 변경 X

	printf("%d ", *ptr); ptr++;  // 그대로, 후위증가  >> 저장된 값 자체를 변경
	printf("%d ", *ptr); ptr++;  // 4 증가, 후위증가
	printf("%d ", *ptr); ptr--;  // 4 증가, 후위감소
	printf("%d ", *ptr); ptr--;  // 4 감소, 후위감소
	printf("%d ", *ptr); printf("\n");  // 4 감소
	return 0;
}