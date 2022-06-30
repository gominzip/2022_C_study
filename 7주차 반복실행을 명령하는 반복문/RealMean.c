#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double total = 0.0;  // double형 변수 선언 및 초기화
	double input = 0.0;  // double형 변수 선언 및 초기화
	int num = 0;  // int형 변수 선언 및 초기화, 초기식
	
	for (; input >= 0.0;)  // 조건식만 설정, 전부 비워지면 무조건 '참'으로 무한루프 형성
	{
		total += input;  // 합계에 input 덧셈
		printf("실수 입력(minus to quit) : ");
		scanf("%lf", &input);  // double형 데이터 입력을 위한 %lf 사용
		num++;  // 증감식
	}
	printf("평균: %f \n", total / (num - 1));  // 결과값(평균) 출력
	return 0;
}