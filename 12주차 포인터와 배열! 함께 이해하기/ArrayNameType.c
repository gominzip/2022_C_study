#include <stdio.h>

int main(void)
{
	int arr[3] = { 0,1,2 };  // 길이 3인 int형 배열 선언, 초기화 
	printf("배열의 이름: %p \n", arr);  // 서식문자 %p = 주소 값의 출력에 사용
	printf("첫 번째 요소: %p \n", &arr[0]);  // 배열의 첫 번째 요소의 주소 값 출력
	printf("두 번째 요소: %p \n", &arr[1]);  // 배열의 두 번째 요소의 주소 값 출력
	printf("세 번째 요소: %p \n", &arr[2]);  // 배열의 세 번째 요소의 주소 값 출력
	// arr = &arr[i];  // 이 문장은 컴파일 에러를 일으킨다.
	return 0;
}