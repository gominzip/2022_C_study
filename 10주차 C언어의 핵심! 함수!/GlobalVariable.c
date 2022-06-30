#include <stdio.h>
void Add(int val);  // 한수 선언, 반환 x
int num;  // 전역변수는 기본 0으로 초기화됨

int main(void)
{
	printf("num: %d \n", num);  // 전역변수 num 출력
	Add(3);  // 함수호출
	printf("num: %d \n", num);  // 전역변수 num 출력  
	num++;  // 전역변수 num 후위증가
	printf("num: %d \n", num);  // 전역변수 num 출력
	return 0;
}

void Add(int val)  // 함수정의
{
	num += val;  // 전역변수 num의 값 val만큼 증가
}