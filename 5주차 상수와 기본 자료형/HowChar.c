#include <stdio.h>

int main(void)
{
	char ch1 = 'A', ch2 = 65;  // char 자료형으로 변수 ch1, ch2 선언 및 초기화
	int ch3 = 'Z', ch4 = 90;  // int 자료형으로 변수 ch3, ch4 선언 및 초기화

	printf("%c %d \n", ch1, ch1);  // 서식문자 %d로 데이터를 숫자의 형태로 출력
	printf("%c %d \n", ch2, ch2);  // 서식문자 %c로 데이터를 문자의 형태로 출력
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);
	return 0;
}