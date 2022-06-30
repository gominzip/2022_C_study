//서식문자 %d 이용해 출력하기
#include <stdio.h> // 헤더파일 선언

int main(void) // main 함수의 시작
{
	printf("제 이름을 홍길동입니다.\n");
	printf("제 나이는 %d살이고요.\n", 20); // 서식문자 %d를 이용해 문자열에 인자2 조합
	printf("제가 사는 곳의 번지수는 %d-%d입니다.\n", 123, 456);
	return 0; // 0 반환
} // main 함수의 끝