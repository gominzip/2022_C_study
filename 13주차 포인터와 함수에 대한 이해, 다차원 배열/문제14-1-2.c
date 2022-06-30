//#include <stdio.h>
//
//void Swap3(int* ptr1, int* ptr2, int* ptr3)  // 포인터 매개변수 선언 및 전달받은 변수의 주소값 저장
//{
//	int temp = *ptr3;  // 매개변수 temp에 num3의 값 저장
//	*ptr3 = *ptr2;  // num3에 num2값 저장
//	*ptr2 = *ptr1;  // num2에 num1값 저장
//	*ptr1 = temp;  // num1에 temp값 = num3값 저장
//}
//
//int main(void)
//{
//	int num1 = 2;  // int형 변수 선언 및 초기화
//	int num2 = 3;
//	int num3 = 4;
//	printf("num1: %d  num2: %d  num3: %d \n", num1, num2, num3);  // 기존 num1, num2, num3 출력
//	Swap3(&num1, &num2, &num3);  // 함수호출, 주소값 전달
//	printf("num1: %d  num2: %d  num3: %d \n", num1, num2, num3);  // 뒤바뀐 num1, num2, num3 출력
//	return 0;
//}