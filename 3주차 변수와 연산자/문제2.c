//세 개의 정수 입력 받은 후 num1 x num2 + num3 결과 출력하기
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;  // 변수 num1, num2, num3 선언
	printf("세 개의 정수를 입력하세요 :"); 
	scanf("%d %d %d", &num1, &num2, &num3);  // 정수 입력
	printf("%d x %d + %d = %d \n", num1, num2, num3, num1 * num2 + num3);
	return 0;
}