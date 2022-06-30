#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[200][200];  // 506부터 컴파일오류 발생
int main(void)
{
	int N, sign = 1;
	int i, k, j;
	int num = 1, x = 0, y = 0;


	printf("크기 입력: ");
	scanf("%d", &N);
	for (k = 0; k < N; ++k)
	{
		arr[y][x] = num++;
		x += sign;
	}
	x -= 1;
	for (i = N - 1; i > 0; --i)
	{
		for (j = 0; j < i; ++j)
		{
			y += sign;
			arr[y][x] = num++;
		}
		sign *= -1;
		for (k = 0; k < i; ++k)
		{
			x += sign;
			arr[y][x] = num++;
		}
	}
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
			printf("%3d ", arr[i][j]);
		printf("\n\n");
	}
	return 0;
}