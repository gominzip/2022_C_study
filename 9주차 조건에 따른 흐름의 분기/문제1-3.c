#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int kor, eng, math;  // int형 변수 선언
	double avr;  // double형 변수 선언
	printf("국어, 영어, 수학 성적 입력: ");
	scanf("%d %d %d", &kor, &eng, &math);  // 정수 입력
	avr = (kor + eng + math) / 3.0;  // 평균 계산
	printf("평균 : %f \n", avr);  // 결과값 출력

	if (avr >= 90.0)  // 평균 90점 이상일 시
		printf("A \n");
	else if (avr >= 80.0)  // 평균 80점 이상일 시
		printf("B \n");
	else if (avr >= 70.0)  // 평균 70점 이상일 시
		printf("C \n");
	else if (avr >= 60.0)  // 평균 50점 이상일 시
		printf("D \n");
	else  // 그 외의 경우
		printf("F \n");

	return 0;
}