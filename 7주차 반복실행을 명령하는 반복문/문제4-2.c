#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int total = 1;  // 곱할 것이므로 1로 변수 초기화
	int n;  // 변수 선언 및 초기화

	printf("n 입력: ");
	scanf("%d", &n);  // 정수 입력

	for (int i = 1; i <= n; i++)  // i 선언 및 곱할 것이므로 1로 초기화, n까지 반복, 1씩 증가
		total *= i;  //  total = total*i

	printf("%d! = %d \n", n, total);  // 결과 출력
	return 0;
}