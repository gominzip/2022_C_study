#include <stdio.h>

void Swap(int n1, int n2)  // 매개변수 n1, n2선언
{
	int temp = n1;  // 매개변수 temp 선언 및 n1의 값으로 초기화
	n1 = n2;  // n1에 n2의 값 할당
	n2 = temp;  // n2에 temp의 값, 즉 기존 n1의 초기화값을 할당
	printf("n1 n2: %d %d \n", n1, n2);  // n1, n2 출력
}

int main(void)
{
	int num1 = 10;  // int형 변수 선언 및 초기화
	int num2 = 20;  // int형 변수 선언 및 초기화
	printf("num1 num2: %d %d \n", num1, num2);  // num1, num2 값 출력

	Swap(num1, num2);  // num1과 num2에 저장된 값이 서로 바뀌길 기대!
	printf("num1 num2: %d %d \n", num1, num2);  // num1, num2 값 출력
	return 0;
}