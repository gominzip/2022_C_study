//#include <stdio.h>
//
//void Recursive(int num)  // 인자 O, 반환 X
//{
//	if (num <= 0)  // 재귀의 탈출조건
//		return;  // 재귀의 탈출
//	printf("Recursive call! %d \n", num);  // 출력문
//	Recursive(num - 1);  // 자신을 재 호출, 인자의 값 1 감소
//}
//
//int main(void)
//{
//	Recursive(3);  // 함수호출
//	return 0;  // 프로그램 종료
//}