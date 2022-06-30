#include <stdio.h>

void SwapIntPtr(int* p1, int* p2)  // 포인터 매개변수 선언, p1=ptr, p2=ptr2로 복사
{
	int* temp = p1;  // p1과 p2에 저장된 주소값 서로 변경
	p1 = p2;  
	p2 = temp;
}

int main(void)
{
	int num1 = 10, num2 = 20;  // int형 변수 선언 및 초기화
	int* ptr1, *ptr2;  // int형 포인터 변수 선언
	ptr1 = &num1, ptr2 = &num2;  // 포인터 변수에 각각 주소 값 저장
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);  // num1, num2 출력

	SwapIntPtr(ptr1, ptr2);  // 함수 호출, 포인터 인자로 전달
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);  // num1, num2 출력 > but 변화 X
	return 0;
}