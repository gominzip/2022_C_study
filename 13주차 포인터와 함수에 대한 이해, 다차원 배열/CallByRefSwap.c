#include <stdio.h>

void Swap(int * ptr1, int * ptr2)  // 포인터 매개변수 ptr1, ptr2선언 및 num1과 num2의 주소값 복사
{
	int temp = *ptr1;  // 매개변수 temp 선언 및 *ptr1의 값으로 초기화
	*ptr1 = *ptr2;  // *ptr1에 *ptr2의 값 할당
	*ptr2 = temp;  // *ptr2에 temp의 값, 즉 기존 *ptr1의 초기화값을 할당
}

int main(void)
{
	int num1 = 10;  // int형 변수 선언 및 초기화
	int num2 = 20;  // int형 변수 선언 및 초기화
	printf("num1 num2: %d %d \n", num1, num2);  // num1, num2 값 출력

	Swap(&num1, &num2);  // 함수호출, 주소 값으로 인자전달
	printf("num1 num2: %d %d \n", num1, num2);  // num1, num2 값 출력
	return 0;
}