#include <stdio.h>

int main(void)
{
	printf("%f \n", 0.1234);  // 10진수 방식의 부동소수점 실수를 표현하는 %f
	printf("%e \n", 0.1234);  // e 표기법 기반의 출력
	printf("%f \n", 0.12345678);
	printf("%e \n", 0.12345678);  // e 표기법 기반의 출력
	return 0;  // 0 반환
}