#include <stdio.h>

int main(void)
{
	int arrA[2][4] =  // 세로2 가로4의 int형 2차원 배열 선언 및 초기화
	{
		{1, 2, 3, 4},  // 1행 초기화
		{5, 6, 7, 8}   // 2행 초기화
	};
	int arrB[4][2];  // 세로4 가로2의 int형 2차원 배열 선언
	int i, j;  // int형 변수 선언

	for (i = 0; i < 4; i++)  // 세로 4만큼 반복
		for (j = 0; j < 2; j++)  // 가로 2만큼 반복
			arrB[i][j] = arrA[j][i];  // arrB 초기화

	for (i = 0; i < 4; i++)  // 세로 4만큼 반복
	{
		for (j = 0; j < 2; j++)  // 가로 2만큼 반복
		{
			printf("%-4d ", arrB[i][j]);  // arrB 배열요소 출력, 필드 4확보 및 왼쪽 정렬
		}
		printf("\n");  // 행 구분
	}
	return 0;
}