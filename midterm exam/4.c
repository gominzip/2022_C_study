#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int length;
	printf("가로, 세로 길이 입력(3이상 50이하의 홀수):");
	scanf("%d", &length);

	for (int i = 0; i < length; i += 2)
	{
		for (int k = 0; k < (length - i) / 2; k++) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 2; i < length; i += 2)
	{
		for (int k = 0; k < i / 2; k++) {
			printf(" ");
		}
		for (int j = 0; j < (length - i); j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}