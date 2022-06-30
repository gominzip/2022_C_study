#include <stdio.h>

int main(void)
{
	int i;
	float num = 0.0;  // 실수 저장을 위한 float 변수 선언

	for (i = 0; i < 100; i++)  // for 반복문
		num += 0.1;  // 이 연산을 총 100회 진행

	printf("0.1을 100번 더한 결과: %f \n", num);
	return 0;
}
