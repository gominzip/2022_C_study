//#include <stdio.h>
//
//void SimpleFunc(void)  // 인자X, 반환X
//{
//	static int num1 = 0;  // 초기화하지 않으면 0 초기화
//	int num2 = 0;  // 초기화하지 않으면 쓰레기 값 초기화
//	num1++, num2++;  // 후위증가
//	printf("static: %d, local: %d \n", num1, num2);  // static변수, 지역변수 출력
//}
//
//int main(void)
//{
//	int i;  // int형 변수 선언
//	for (i = 0; i < 3; i++)  // i 초기화, 3번 반복, 후위증가
//		SimpleFunc();  // 함수호출
//	return 0;
//}