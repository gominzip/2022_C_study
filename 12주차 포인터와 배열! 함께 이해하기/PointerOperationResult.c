//#include <stdio.h>
//
//int main(void)
//{
//	int* ptr1 = 0x0010;  // int형 포인터 변수, 16진수, 10진수로 16
//	double* ptr2 = 0x0010;  // double형 포인터 변수, 16진수, 10진수로 16
//
//	printf("%p %p \n", ptr1 + 1, ptr1 + 2);  // 4 증가, 8 증가
//	printf("%p %p \n", ptr2 + 1, ptr2 + 2);  // 8 증가, 16 증가
//
//	printf("%p %p \n", ptr1, ptr2);  // 포인터 변수 저장 값 출력
//	ptr1++;  // 4 증가
//	ptr2++;  // 8 증가
//	printf("%p %p \n", ptr1, ptr2);  // 연산 결과 확인
//	return 0;
//}