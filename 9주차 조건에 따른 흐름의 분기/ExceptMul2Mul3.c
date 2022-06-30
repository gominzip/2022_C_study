#include <stdio.h>

int main(void)
{
	int num;
	printf("start! ");

	for (num = 1; num < 20; num++)  // num 1로 초기화, num=20 전까지 반복, num 1씩 증가
	{
		if (num % 2 == 0 || num % 3 == 0)  // 2나 3의 배수면 실행
			continue;  // 반복문의 조건검사로 이동, 실행 시 12행은 실행되지 않음
		printf("%d ", num);  // 2와 3의 배수가 아닌 것만 출력
	}
	printf("end! \n");
	return 0;
}