#include <stdio.h>
int Add(int val);  // 함수 선언
int num = 1;  // 전역변수 1로 초기화

int main(void)
{
	int num = 5;  // int형 변수 선언 및 초기화
	printf("num: %d \n", Add(3));  // 함수 호출
	printf("num: %d \n", num+9); 
	return 0;  
}

int Add(int val)  // 함수 정의
{
	int num = 9;  // 동일 이름 지역 변수 선언 및 초기화
	num += val;  // num=num+val
	return num;  // num 반환
}