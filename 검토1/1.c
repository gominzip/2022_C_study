#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int size, save = 1;
	int i, k, j;
	int num = 1, x = 0, y = 0;
	int arr[505][505]; // 506이상 선언 시 크기 초과 문제로 프로그램 실행이 안 됨

	printf("크기 입력: ");
	scanf("%d", &size);
	for (k = 0; k < size; ++k)
	{
		*(arr[y] + x) = num++;
		x += save;
	}
	x -= 1;
	for (i = size - 1; i > 0; --i)
	{
		for (j = 0; j < i; ++j)
		{
			y += save;
			*(arr[y] + x) = num++;
		}
		save *= -1;
		for (k = 0; k < i; ++k)
		{
			x += save;
			*(arr[y] + x) = num++;
		}
	}
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
			printf("%3d ", arr[i][j]);
		printf("\n\n");
	}
	return 0;
}