#include <stdio.h>
int NumberCompare(int num1, int num2);  // 함수의 선언

int main(void)
{
	printf("3과 4중에서 큰 수는 %d 이다. \n", NumberCompare(3, 4));  // 정수 대신 함수의 호출
	printf("7과 2중에서 큰 수는 %d 이다. \n", NumberCompare(7, 2));
	return 0;  // 0반환 프로그램 종료
}

int NumberCompare(int num1, int num2)  // 함수의 정의
{
	if (num1 > num2)  // num1이 num2보다 클 시 아래의 문장 실행
		return num1;  // num1값 반환
	else  // 그 외
		return num2;  // num2값 반환
}