//#include <stdio.h>
//
//int SquareByValue(int n)  // Call-by-value 기반
//{
//	return n * n;  // 제곱값 반환
//}
//
//void SquareByReference(int* ptr)  // Call-by-reference 기반
//{
//	int num = *ptr;  // 매개변수에 *ptr에 저장된 값 저장
//	*ptr = num * num;  // *ptr=num에 제곱값 저장
//}
//
//int main(void)
//{
//	int num = 7;  // int형 변수 선언 및 초기화
//	printf("%d \n", SquareByValue(num));  // 함수호출, 반환값 출력
//	SquareByReference(&num);  // 인자 주소값 전달
//	printf("%d \n", num);  // num 출력
//	return 0;
//}