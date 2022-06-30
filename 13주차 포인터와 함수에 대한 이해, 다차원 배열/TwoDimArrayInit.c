#include <stdio.h>

int main(void)
{
	int i, j;

	/* 2차원 배열 초기화의 예 1 */
	int arr1[3][3] = {
		{1, 2, 3},  // 1행
		{4, 5, 6},  // 2행
		{7, 8, 9}   // 3행
	};

	/* 2차원 배열 초기화의 예 2 */
	int arr2[3][3] = {
		{1},       // 1행, 1 0 0
		{4, 5},    // 2행, 4 5 0
		{7, 8, 9}  // 3행, 7 8 9
	};

	/* 2차원 배열 초기화의 예 3 */
	int arr3[3][3] = { 1, 2, 3, 4, 5, 6, 7 };  // 3행, 7 0 0

	for (i = 0; i < 3; i++)  // 세로 3 반복
	{
		for (j = 0; j < 3; j++)  // 가로 3 반복
			printf("%d ", arr1[i][j]);  // arr1 배열요소 출력
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++)  // 세로 3 반복
	{
		for (j = 0; j < 3; j++)  // 가로 3 반복
			printf("%d ", arr2[i][j]);  // arr2 배열요소 출력
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++)  // 세로 3 반복
	{
		for (j = 0; j < 3; j++)  // 가로 3 반복
			printf("%d ", arr3[i][j]);  // arr3 배열요소 출력
		printf("\n");
	}
	return 0;
}