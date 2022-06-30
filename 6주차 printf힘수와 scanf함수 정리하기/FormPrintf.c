#include <stdio.h>

int main(void)
{
	int myAge = 12;  // int형 변수 선언 및 초기화 
	printf("제 나이는 10진수 %d살, 16진수로 %X살입니다. \n", myAge, myAge);  // 변수 myAge를 서식문자 %d를 이용해 10진수 출력, %X를 이용해 16진수 출력
	return 0;  // 0반환
}