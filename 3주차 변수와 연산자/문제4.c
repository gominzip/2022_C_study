//두 정수를 나누었을 때 얻게 되는 몫과 나머지 출력
#include <stdio.h>

int main(void)
{
	int num1, num2;  // 변수 num1, num2 선언
	printf("나누고 싶은 두 정수를 입력하세요 :");
	scanf("%d %d", &num1, &num2);  // 정수 입력
	printf("몫 : %d   나머지 : %d \n", num1/num2, num1%num2);
	return 0;
}