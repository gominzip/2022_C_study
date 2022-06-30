#include <stdio.h>

int main(void)
{
	int arr1[2][3][4];  // 높이2, 세로3, 가로4 int형 배열 선언
	double arr2[5][5][5];  //높이5, 세로5, 가로5 double형 배열 선언
	printf("높이2, 세로3, 가로4 int형 배열: %d \n", sizeof(arr1));  // int형 배열 arr1 크기 출력
	printf("높이5, 세로5, 가로5 double형 배열: %d \n", sizeof(arr2));  // double형 배열 arr2 크기 출력
	return 0;
}