#include <stdio.h>

int main(void)
{
	int arr[3][9];  // 세로3, 가로9의 int형 배열 선언
	int i, j;  // 반복문에 사용할 int형 변수 선언

	for (i = 0; i < 3; i++)  // 세로 3 반복
	{
		for (j = 0; j < 9; j++)  // 가로 9 반복
		{
			arr[i][j] = (i + 2) * (j + 1);  // 구구단 값으로 초기화
		}
	}

	for (i = 0; i < 3; i++)  // 세로 3 반복
	{
		for (j = 0; j < 9; j++)  // 가로 9 반복
			printf("%4d ", arr[i][j]);  // 배열요소 값 출력, 필드 폭 4칸 확보 및 오른쪽 정렬
		printf("\n");  // 행 구별
	}
	return 0;
}