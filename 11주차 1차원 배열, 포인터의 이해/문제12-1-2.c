//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 10, num2 = 20;  // int형 변수 선언 및 초기화
//	int* ptr1 = &num1;  // int형 포인터 변수 선언 및 num1 주소 값 저장
//	int* ptr2 = &num2;  // int형 포인터 변수 선언 및 num2 주소 값 저장
//
//	(*ptr1) += 10;  // num1+=10과 동일
//	(*ptr2) -= 10;  // num2-=10과 동일
//
//	ptr1 = &num2;  // 대상을 num2로 변경
//	ptr2 = &num1;  // 대상을 num1으로 변경
//
//	printf("ptr1: %d \n", *ptr1);  // prt1이 가르키는 변수 값 출력
//	printf("ptr2: %d \n", *ptr2);  // prt2가 가르키는 변수 값 출력
//
//	return 0;
//}