#include <stdio.h>

int main(void)
{
	int num1 = 3, num2 = 4;  // int형 변수 선언 및 초기화
	double divResult;  // double형 변수 선언
	divResult = (double)num1 / num2;  // 형 변환 연산자를 이용해 변수 num1의 값을 double형으로 강제 변환
	printf("나눗셈 결과: %f \n", divResult);  // double형 변수 출력
	return 0;
}