#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x1, y1, x2, y2, area ; // 변수 선언
	printf("좌 상단의 x, y 좌표: ");
	scanf("%d %d", &x1, &y1);  // 좌 상단 x y 좌표 입력
	printf("우 하단의 x, y 좌표: ");
	scanf("%d %d", &x2, &y2);  // 우 하단 x y 좌표 입력

	area = (x2 - x1) * (y2 - y1);  // 직사각형 넓이 계산 및 area 변수 초기화
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다. \n", area);  // 결과값 호출
	return 0;
}