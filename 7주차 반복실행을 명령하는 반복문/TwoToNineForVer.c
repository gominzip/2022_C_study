#include <stdio.h>

int main(void)
{
	int cur, is;  // int형 변수 선언

	for (cur = 2; cur < 10; cur++)  // cur 초기화, 2부터 10미만까지 반복, 1씩 증가
	{
		for (is = 1; is < 10; is++)  // is 초기화, 1부터 10미만까지 반복, 1씩 증가
			printf("%d x %d = %d \n", cur, is, cur * is);  // 단 출력
		printf("\n");  //개 행
	}
	return 0;
}