#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num, input;  // 정수 개수, 입력 정수에 대한 변수 선언
	int i=0, total = 0;  // 반복 횟수, 합계에 대한 변수 선언 및 초기화
	printf("몇 개의 정수를 입력할 것인가요? :");
	scanf("%d", &num);  // 정수 개수 입력

	while (i < num)  // num만큼 반복
	{
		printf("정수 입력 : ");
		scanf("%d", &input);  // 정수 입력
		total += input;  // 합계에 입력된 정수 더하기
		i++;  //횟수 추가
	}
	printf("평균은 %f \n", (double)total/num);  //소수점 이하 부분을 위한 명시적 형 변환
	return 0;
}