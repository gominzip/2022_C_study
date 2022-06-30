#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void GCD(int n1, int n2)
{
	int i, GCD;  // int형 변수 선언
	for (i = 1; i < n1 + 1; i++)  // 1부터 n2까지 최대공약수 찾기
	{
		if ((n1 % i == 0) && (n2 % i == 0))  // 두 수를 나눈 나머지가 모두 0이면 아래 문장 실행
			GCD = i;  // 최대공약수으로 i 저장
	}

	printf("두 수의 최대공약수: %d \n", GCD);  // 최종 최대공약수 출력
}

int main(void)
{
	int n1, n2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &n1, &n2);  // 두 정수 입력
	
	if (n1 < n2)  // n1이 작으면
		GCD(n1, n2);  // n1을 첫 번째 인자로
	else  // 그 외는
		GCD(n2, n1);  // n2를 첫 번째 인자로

	return 0;
}