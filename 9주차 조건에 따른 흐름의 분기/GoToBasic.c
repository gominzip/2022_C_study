#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num;  // int형 변수 선언
	printf("자연수 입력: ");
	scanf("%d", &num);  // 정수 입력

	if (num == 1)  // 1일 시
		goto ONE;  // 레이블 ONE의 위치로 이동
	else if (num == 2)  //2일 시
		goto TWO;  // 레이블 TWO의 위치로 이동
	else  // 그 외
		goto OTHER;  // 레이블 OTHER의 위치로 이동

ONE:  // 레이블 ONE
	printf("1을 입력하셨습니다! \n");
	goto END;  // 레이블 END의 위치로 이동
TWO:  // 레이블 TWO
	printf("2를 입력하셨습니다! \n");
	goto END;  // 레이블 END의 위치로 이동
OTHER:  // 레이블 OTHER
	printf("3 혹은 다른 값을 입력하셨군요! \n");

END:  // 레이블 END
	return 0;  // 0 반환 실행
}