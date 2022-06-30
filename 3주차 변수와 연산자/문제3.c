//하나의 정수 입력 받은 후, 제곱 출력하기
#include <stdio.h>

int main(void)
{
	int num;  // 변수 num 선언
	printf("제곱하고 싶은 정수를 입력하세요 :");
	scanf("%d", &num);  // 정수 입력
	printf("%d^2 = %d \n", num, num*num);
	return 0;
}