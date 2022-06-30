//#include <stdio.h>
//
//int Factorial(int n)  // 함수정의
//{
//	if (n == 0)  // n이 0이 되면
//		return 1;  // 정상종료
//	else  // 그 외
//		return n * Factorial(n - 1);  // 재귀, n * (n-1)!
//}
//
//int main(void)
//{
//	printf("1! = %d \n", Factorial(1));  // 1! 출력
//	printf("2! = %d \n", Factorial(2));  // 2! 출력
//	printf("3! = %d \n", Factorial(3));  // 3! 출력
//	printf("4! = %d \n", Factorial(4));  // 4! 출력
//	printf("9! = %d \n", Factorial(9));  // 5! 출력
//	return 0;  // 프로그램 종료
//}