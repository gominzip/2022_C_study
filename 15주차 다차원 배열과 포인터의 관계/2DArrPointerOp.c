#include <stdio.h>

int main(void)
{
	int arr1[3][2];  // 세로3 가로2 int형 2차원 배열 선언
	int arr2[2][3];  // 세로2 가로3 int형 2차원 배열 선언

	printf("arr1: %p \n", arr1);  // 배열이름 arr1 출력
	printf("arr1+1: %p \n", arr1+1);  // 배열이름arr1+sizeof(int)+sizeof(int) 출력
	printf("arr1+2: %p \n\n", arr1+2);  // 배열이름arr1+sizeof(int)+sizeof(int)+sizeof(int)+sizeof(int) 출력

	printf("arr2: %p \n", arr2);  // 배열이름 arr2 출력
	printf("arr2+1: %p \n", arr2+1);  // 배열이름arr2+sizeof(int)+sizeof(int)+sizeof(int) 출력
	return 0;
}