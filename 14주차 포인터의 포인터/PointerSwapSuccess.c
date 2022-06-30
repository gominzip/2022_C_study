//#include <stdio.h>
//
//void SwapIntPtr(int** dp1, int** dp2)  // 이중포인터 선언 *dp1=ptr1, *dp2=ptr2
//{
//	int* temp = *dp1;  // *연산자로 prt1과 ptr2 직접적으로 변경
//	*dp1 = *dp2;
//	*dp2 = temp;
//}
//
//int main(void)
//{
//	int num1 = 10, num2 = 20;  // int형 변수 선언 및 초기화
//	int* ptr1, * ptr2;  // int형 포인터 변수 선언
//	ptr1 = &num1, ptr2 = &num2;  // 포인터 변수에 각각 주소 값 저장
//	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);  // num1, num2 출력
//
//	SwapIntPtr(&ptr1, &ptr2);  // 함수 호출, ptr1 ptr2 주소 값 전달
//	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);  // num1, num2 출력 > 변화 O
//	return 0;
//}