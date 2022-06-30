#include <stdio.h>

int main(void)
{
	int arr1[3][4];  // 세로 3, 가로 4인 int형 2차원 배열
	int arr2[7][9];  // 세로 7, 가로 9인 int형 2차원 배열
	printf("세로3, 가로4: %d \n", sizeof(arr1));  // arr1 크기 출력
	printf("세로7, 가로9: %d \n", sizeof(arr2));  // arr2 크기 출력
	return 0;
}