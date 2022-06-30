#include <stdio.h>

int main(void)
{
	double num1 = 245;  // int형 정수 245를 double형으로 자동 형 변환
	int num2 = 3.1415;  // double형 실수 3.1415를 int형으로 자동 형 변환
	int num3 = 129;  // 129의 비트 열 00000000 00000000 00000000 10000001
	char ch = num3;  // 상위바이트 손실 -> 10000001

	printf("정수 245를 실수로: %f \n", num1);  // 10~12행 자동 형 변환 결과 출력
	printf("실수 3.1415를 정수로: %d \n", num2);
	printf("큰 정수 129를 작은 정수로: %d \n", ch);
	return 0;
}