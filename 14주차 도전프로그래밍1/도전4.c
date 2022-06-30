#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int money;  //int형 변수 선언
	int b, s, c;  // 크림빵, 새우깡, 콜라 개수 변수 선언

	printf("현재 당신이 소유하고 있는 금액 :");
	scanf("%d", &money);  // 소유 금액 입력

	for (b = 1; b < money / 500; b++)  // 크림빵 반복
		for (s = 1; s < money / 700; s++)  // 새우깡 반복
			for (c = 1; c < money / 400; c++)  // 콜라 반복
			{
				if (b * 500 + s * 700 + c * 400 == money)  // 잔돈 없이 구매 가능하면
					printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개 \n", b, s, c);  // 경우의 수 출력
			}

	printf("\n");
	return 0;
}