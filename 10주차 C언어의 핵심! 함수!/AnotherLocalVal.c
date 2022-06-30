#include <stdio.h>

int main(void)
{
	int cnt;  // int형 변수 선언
	for (cnt = 0; cnt < 3; cnt++)  // cnt 초기화, 3미만 반복, 후위증가
	{
		int num = 0;  // int형 변수 선언 및 초기화
		num++;  // 후위증가
		printf("%d번째 반복, 지역변수 num은 %d. \n", cnt + 1, num);  // num 출력
	}  // 중괄호의 탈출 및 진입 반복, 탈출 시 지역변수 소멸

	if (cnt == 3)  // cnt가 3이라면
	{
		int num = 7;  // num 선언 및 초기화
		num++;  // 후위증가
		printf("if문 내에 존재하는 지역변수 num은 %d. \n", num);  // num 출력
	}  // 중괄호 탈출 시 지역변수 소멸
	return 0;
}