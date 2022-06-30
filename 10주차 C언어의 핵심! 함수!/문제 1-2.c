#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
double CelToFah(double num)  // 화씨 온도 반환 함수 정의
{
	return 1.8 * num + 32;
}

double FahToCel(double num)  // 섭씨 온도 반환 함수 정의
{
	return (num - 32) / 1.8;
}

int main(void)
{
	int sel;  // 선택지를 위한 int형 변수 선언
	double num;  // double형 변수 선언
	printf("1. 섭씨를 화씨로  2. 화씨를 섭씨로 \n");
	scanf("%d", &sel);  // 변환 종류 입력
	
	if (sel == 1)  // 1 선택 시
	{
		printf("섭씨 입력: ");
		scanf("%lf", &num);
		printf("화씨: %f \n", CelToFah(num));  // CelToFah 함수 호출, 화씨 계산
	}
	else if (sel == 2)  // 2 선택 시
	{
		printf("화씨 입력: ");
		scanf("%lf", &num);  // num 초기화
		printf("섭씨: %f \n", FahToCel(num));  // FahToCel 함수 호출, 섭씨 계산
	}
	else  // 그 외
		printf("선택 오류 \n");
	
	return 0;  // 프로그램 종료
}