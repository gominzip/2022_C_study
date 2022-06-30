#include <stdio.h>

int main(void)
{
	int num = 100;  // int형 변수 선언 및 초기화
	int* ptr = &num;  // num을 가리키는 int형 포인터 변수 ptr
	int** dptr = &ptr;  // 포인터 변수 ptr을 가리키는 이중 포인터 변수 dptr
	int*** tptr = &dptr;  // 이중 포인터 dptr을 가리키는 삼중 포인터 변수 tptr

	printf("%d %d \n", **dptr, ***tptr);
	return 0;
}