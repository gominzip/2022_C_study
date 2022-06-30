#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num;  // 변수 선언
	int i=0, total = 0;  // 횟수계산, 합계를 위한 변수 선언 및 초기화

	while (i < 5)  // 5번 정수 입력을 위한 반복문
	{
		printf("1 이상의 정수 입력 : ");
		scanf("%d", &num);  // 정수 입력
		while (num<1)  // 1미만의 정수 입력 시 반복문 실행
		{
			printf("1 이상의 정수로 다시 입력하세요 : ");
			scanf("%d", &num);  //다시 정수 입력
		}
		total += num;  // 1이상 정수 입력시 total에 더해짐
		i++;  // 횟수 추가
	}
	printf("합계 : %d \n", total);  //합계 출력
	return 0;
}