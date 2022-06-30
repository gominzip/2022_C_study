#include <stdio.h>

int main(void)
{
	int num = 3;
	num = num << 3;  // 8 곱하기, 비트의 열을 왼쪽으로 3칸 이동
	num = num >> 2;  // 4 나누기, 비트의 열을 오른쪽으로 2칸 이동
	printf("%d \n", num);
	return 0;
}